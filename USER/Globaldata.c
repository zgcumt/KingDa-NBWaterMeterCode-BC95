/*********************************************************************************
文件包含区
*********************************************************************************/
#include "Globaldata.h"
/*********************************************************************************
常量定义区
*********************************************************************************/
/*********************************************************************************
公共变量定义区
*********************************************************************************/
u8 Device_Status;            //设备状态
signed char Temp;                     //设备温度
u16 BAT_Vol;                     //电池电压
u16 BAT_Alarm_Vol;           //电池告警电压
u8 Settle_Date;          //结算日期
RTC_TimeTypeDef Settlement_Time;          //日结算时间
u16 Report_Cycle;             //上报周期，分
u32 Report_Cycle_counter;     //上报周期计数，秒
u8 Gather_Cycle_counter;     //采集周期计数，秒
u8 Meter_Number[7];             //表号
unsigned char HistoryDataIndex; //历史数据索引
/*********************************************************************************
外部变量声明区
*********************************************************************************/

/*********************************************************************************
私有变量定义区
*********************************************************************************/ 
/*********************************************************************************
测试变量定义区
*********************************************************************************/
/*********************************************************************************
内部函数定义区
*********************************************************************************/
/*********************************************************************************
功能代码定义区
*********************************************************************************/
unsigned char Int_to_ASCLL(unsigned char data)
{
  unsigned char value = 0;
  
  if( data <= 9 )
  {
          value = data + '0';
  }
  else
  {
          value = data + 'A' - 10;
  }
  return value;
}

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
unsigned char ASCLL_to_Int(unsigned char data)
{
  unsigned char value = 0;
  if(data >= '0' && data <= '9')
    value = data - '0';
  else if(data >= 'A' && data <= 'F')
    value = data - 'A' + 10;
  else if(data >= 'a' && data <= 'f')
    value = data - 'a' + 10;
  else value = data;
  return value;
}
/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/
unsigned char BCD_to_Int(unsigned char data)
{
  return (data/16*10+data%16);
}
/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

/*********************************************************************************
 Function:      //
 Description:   //
 Input:         //
                //
 Output:        //
 Return:      	//
 Others:        //
*********************************************************************************/

