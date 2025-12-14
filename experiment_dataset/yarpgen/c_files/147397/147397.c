/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = (max(20, 9497701384536767317));
        arr_4 [i_0 + 1] = ((28672 ? (((var_7 ? var_3 : 5))) : (min(1, ((min(149, 149)))))));
        var_14 = (~var_9);
        arr_5 [8] [i_0] = (min((((max(57301, var_1)))), ((5 ? var_1 : -var_6))));
        var_15 = (min(var_15, (((!(((var_6 ? var_11 : var_4))))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 = (max(((max(70, var_6))), (149 / 65374)));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_1 + 1] [i_2] [i_4] [11] [i_4] [i_4] &= -38;
                        arr_16 [i_1] [i_2 - 3] [i_3] [i_4] = (!38);

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_17 |= ((((var_0 || var_0) || (!var_8))) ? (((~var_6) ^ (min(var_12, (arr_2 [i_1]))))) : (max(var_0, (21 >= 31546))));
                            var_18 = (max(var_3, 15508254141702981608));
                            var_19 = ((((min(var_9, 0))) ? ((var_9 ? (arr_19 [i_2 + 4] [i_1 - 1] [i_3 + 2] [i_5 + 1]) : 65530)) : (var_5 / var_3)));
                        }
                        arr_21 [i_1] [i_2 + 2] [i_3] = ((((max(4294967295, 3))) ? -var_10 : -var_6));
                    }
                }
            }
        }
        var_20 ^= (max((var_5 ^ 29), ((var_3 ? ((max(-3789, var_5))) : var_2))));
        arr_22 [i_1] = (((var_0 ? ((var_3 ? var_11 : var_3)) : -15508254141702981608)));
        var_21 = ((+((((((arr_20 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) ? var_11 : var_4))) ? 11199287776337353483 : (arr_14 [i_1] [i_1] [12] [i_1] [i_1] [i_1])))));
    }
    var_22 = -var_4;
    var_23 = var_11;
    var_24 &= (~(var_1 >= 160));
    #pragma endscop
}
