/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (arr_3 [i_1] [0]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            var_19 ^= ((!(arr_9 [2] [i_4 + 1] [i_2] [i_1])));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((var_9 <= (arr_7 [i_0] [i_3 + 1] [i_2] [i_0 + 1] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_5] [i_1] [i_2] [i_1] [i_0 + 1] = 0;
                            var_20 = ((1 + (arr_14 [i_0 + 1] [i_1] [i_1] [i_2] [i_0 + 1] [i_3] [i_5])));
                            arr_18 [i_0] [i_0] [i_2] = ((var_0 ? ((1 ? 2654748869 : -16936)) : var_13));
                        }
                        var_21 += var_7;
                        var_22 += ((45616 ? -105 : 65535));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_23 = (max((arr_9 [i_0] [i_1] [1] [i_6]), ((var_12 << (-2147483639 - -2147483642)))));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_24 = ((-(((arr_19 [i_6] [i_1]) * (max(1, 243211956))))));
                            arr_26 [i_0] [i_0] [i_2] = (((((-2109620120 + -3555227695611598914) ? 127 : -12408)) / (((arr_7 [i_0] [1] [i_0 - 1] [i_0] [i_0 + 1]) ? var_0 : -var_0))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_25 = (((arr_0 [i_0 - 1]) == ((1 ? (arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_8]) : 307924903295873576))));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_26 = (arr_3 [i_0] [12]);
                            var_27 = (((arr_14 [i_0] [i_0] [i_2] [13] [i_9] [i_8] [3]) ? var_9 : var_1));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_28 = (arr_21 [i_0 + 1] [i_1] [3] [1]);
                            arr_35 [i_0] [i_0] [7] [i_2] [1] [i_8] [7] = (((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 1]) - 3969852549995695112))));
                            arr_36 [i_0] = var_17;
                            var_29 = (min(var_29, (((arr_28 [i_0 - 1] [i_1] [i_2]) / (arr_3 [i_0 - 1] [i_1])))));
                        }
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_0] [2] [i_11] = (arr_14 [i_8] [i_1] [i_2] [i_8] [3] [i_2] [i_8]);
                            var_30 |= (~22902);
                        }
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, var_15));
    #pragma endscop
}
