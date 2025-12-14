/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_6, var_3));
    var_11 = (1048575 >= 16658745393532269648);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 = ((arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]) < (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]));
                        var_13 = (max(var_13, (((var_9 ? (arr_4 [i_0]) : (arr_4 [i_3]))))));
                        var_14 += (((arr_1 [i_0]) & (((5620088793242141717 ? var_3 : (arr_2 [i_2]))))));
                        var_15 *= 15;
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = (var_2 | var_9);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 = (((arr_5 [i_4] [i_2] [i_0]) ? var_8 : ((var_2 ? (arr_5 [i_4] [i_4] [i_4]) : 65535))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_1] [i_4] [i_1] = (arr_7 [i_0] [i_0]);
                            var_17 = (((arr_4 [i_1]) ? (arr_16 [i_0] [i_1] [i_2] [i_1] [i_5]) : (arr_16 [i_0] [i_1] [i_2] [i_1] [i_5])));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_18 *= (((arr_15 [i_2] [i_6] [i_2] [i_2] [i_0] [i_6 - 1]) ? (arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1]) : (arr_2 [i_4])));
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_6] = (34506 / 5756541509171422560);
                            arr_21 [i_1] [i_2] [i_1] [i_6] = (arr_15 [i_0] [i_1] [i_2] [i_4] [i_6] [i_6 - 1]);
                            var_19 = -9874;
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] [i_6] = var_5;
                        }
                        arr_23 [i_1] [i_1] = (arr_1 [i_0]);
                        var_20 = (arr_13 [i_1]);

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_27 [i_1] = ((-1 ? -1 : 22533));
                            arr_28 [i_0] [i_1] [i_1] [i_0] [i_0] = (arr_0 [i_0] [i_1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_21 = (1048556 & 65533);
                                var_22 = ((!((!(6719089685400930877 | -3581918718313485365)))));
                            }
                        }
                    }
                    var_23 *= ((((((7487042652480750093 ? -2147483623 : 22611)) + 2147483647)) >> ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    arr_37 [i_0] [i_1] [i_1] = var_5;
                    var_24 -= ((8703768664823253928 ? -1231667712 : -84));
                }
            }
        }
    }
    #pragma endscop
}
