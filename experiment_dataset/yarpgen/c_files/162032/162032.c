/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_10 = ((min(((max(47010, -123))), -34712)));
                    var_11 = ((((~(((-6915490138479244809 + 9223372036854775807) >> (18553 - 18529))))) <= ((((!(((18526 ? 18502 : 4031692965357853109)))))))));
                    var_12 = ((((max((118 | 4147651252463416785), (97 == var_6)))) ? ((min((min(97, 18525)), var_9))) : ((max(86, -7309277195039852221)))));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_3] [20] [i_3] = (((((-(var_9 + 9223372036854775795)))) ? -113 : (min(((61 ? 5750239272336739070 : -5829478421849008321)), (65530 < -91)))));
                    var_13 = ((((-(18522 - -8824780019287038734)))) ? (max(9223372036854775786, (81 == var_5))) : var_4);
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] [i_6] = ((65530 ? (((!(10 * var_7)))) : ((((var_6 ? var_6 : 34378)) % 36))));
                                arr_21 [i_0] [i_0] [11] [i_0] [i_0] = min((((62719 == 65507) ? ((2667076026598139137 ? 6 : 9223372036854775807)) : (((max(-60, 39)))))), 8824780019287038729);
                                var_14 = ((var_6 ? var_5 : (((127 << 0) ^ -100))));
                            }
                        }
                    }
                    var_15 = min((((var_2 ? 40337 : 58907))), ((127 ? var_1 : -7135909337073307241)));
                }
                arr_22 [i_0] = (((((65534 >= 64800) >> (-7309277195039852221 >= var_9))) << (((~13) ? (3 >= var_8) : (361475611733737955 || 65531)))));
                var_16 = ((((((min(var_5, var_3)) + 0))) ? var_2 : var_0));
            }
        }
    }
    var_17 = (65531 | 39);
    var_18 = (min(13, ((var_1 ? var_2 : (!65535)))));
    #pragma endscop
}
