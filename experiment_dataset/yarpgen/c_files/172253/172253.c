/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_1] [i_1] [i_0]);
                var_20 = (max(var_20, (((((min(6, -1))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_1] [i_0] = 16915;
                    var_21 = (min(var_21, var_10));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] = (((arr_10 [i_1] [i_1] [i_3 - 1]) + var_15));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_22 -= (((arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1]) ? (arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2]) : (arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                        arr_16 [i_3] [i_3] = ((arr_7 [i_1 + 1] [i_1 - 1]) * (arr_2 [i_0] [i_1 - 1]));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (arr_2 [i_0] [i_0])));
                        arr_19 [i_0] [i_3] [i_3] [i_5] [i_3] = -6;
                        var_24 = var_5;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((var_0 < (arr_17 [i_0] [i_1] [i_3] [i_1 + 1])));
                    }
                    var_25 = (((arr_15 [i_3]) ? (arr_4 [i_1] [i_3] [i_3 + 1] [i_3 - 1]) : 18494));
                    var_26 = (max(var_26, ((((arr_3 [i_1 + 1] [i_1 - 1] [i_3 - 1]) ? (((var_0 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_1] [i_3])))) : var_5)))));
                    arr_21 [i_0] [i_3] [7] = (arr_14 [11] [i_1 + 2] [i_1]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_27 = -1;

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_28 [i_6] [12] [0] [i_7] [i_6] [i_1] = (arr_17 [i_0] [i_1] [i_6] [i_7]);
                        arr_29 [i_0] [i_1] [i_1] [i_6] [i_7] [i_7] = var_10;
                    }
                    arr_30 [i_6] = (arr_10 [2] [i_0] [6]);
                    var_28 ^= -25;
                    var_29 -= var_12;
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_30 = (((((((var_0 ? 17366827041999126116 : (arr_35 [i_0] [16] [i_0] [i_0])))) && -352956952406513552)) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_2 [i_1 - 1] [i_1])));
                        arr_38 [i_8] [i_1 + 1] [i_1 + 1] [i_8] = (arr_6 [i_9]);
                        arr_39 [i_8] [i_1 + 1] [i_8] [i_9] = (arr_2 [i_1 + 2] [i_1 - 1]);
                        arr_40 [i_1] [i_9] [i_8] [i_9] [1] |= (((((min(var_9, (arr_1 [i_0] [i_1]))))) ? (max(((var_0 & (arr_9 [i_1] [i_8] [i_1]))), (25 | var_6))) : var_8));
                        arr_41 [i_8] [6] [16] [i_8] = var_13;
                    }
                    var_31 *= (max((((arr_32 [i_1 - 1] [i_1] [8]) + ((min((arr_10 [i_8] [4] [i_0]), 2147483642))))), (((-(arr_37 [i_0] [i_1 + 1] [i_8] [i_1] [i_8] [i_1]))))));
                    var_32 = (~(arr_17 [i_0] [i_0] [i_8] [i_0]));
                    arr_42 [i_1 + 2] [i_8] = ((-((((arr_23 [i_0] [i_8] [i_1 - 1] [i_1 - 1]) <= 18019883945983614643)))));
                }
            }
        }
    }
    var_33 = (max(var_7, var_3));
    var_34 = (max(var_5, var_12));
    #pragma endscop
}
