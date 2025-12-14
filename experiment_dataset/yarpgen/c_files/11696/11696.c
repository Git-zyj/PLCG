/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((arr_4 [i_1 + 1] [i_1 - 1]) ? (max((arr_4 [i_1 + 1] [i_1 - 1]), 628492298)) : ((-(arr_4 [i_1 + 1] [i_1 - 1])))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = arr_1 [i_1 + 1];
                        var_17 = var_12;
                    }
                    var_18 = 1;

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_19 = ((-296731276 ? -1 : (min((max((-2147483647 - 1), (arr_1 [i_2]))), 88))));
                        arr_13 [i_0] = (((((1 ? (arr_7 [i_4] [i_1 - 1] [i_0] [i_1 + 1] [i_1 + 1]) : (arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1 + 1])))) || -6));
                        var_20 *= ((~(((arr_10 [8] [i_4] [i_1 + 1] [i_1 - 1] [i_1 + 1] [8]) & (arr_10 [4] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [4])))));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_21 = 2116020057126102447;
                            var_22 = ((-(arr_1 [i_5])));
                            var_23 = (((arr_2 [i_2] [i_1 - 1]) / -2147483646));
                            arr_17 [i_0] [i_2] [i_0] [i_0] = ((-(arr_6 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 2])));
                        }

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((((arr_14 [i_0] [i_1] [i_1 - 1] [3] [i_2]) && ((2147483643 && (arr_11 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] [i_6]))))))));
                            arr_22 [i_0] [i_1] = (arr_0 [8]);
                            var_25 = ((!(~-2147483643)));
                            var_26 = (arr_4 [i_6] [i_6 - 2]);
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_27 [i_0] [i_4] [i_2] [i_1] [i_0] = -123;
                            var_27 = (arr_1 [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_28 -= (max(((((1 ? (arr_4 [12] [12]) : var_14)) % ((((var_7 || (arr_15 [i_8] [i_4] [i_0] [i_1 + 1] [i_0]))))))), ((min(-6, 15754)))));
                            var_29 += (arr_19 [i_4] [i_2] [i_1 - 1] [i_0]);
                        }
                    }
                    var_30 = (((arr_29 [i_1 + 1] [i_1] [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1]) ? ((-2147483643 ? (arr_29 [i_1 + 1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_1 + 1] [i_1 - 1] [i_0] [i_1] [i_0] [i_1] [i_1]))) : (((arr_29 [i_1 - 1] [i_1] [i_0] [11] [i_0] [i_1] [i_1]) ? (arr_29 [i_1 + 1] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) : (arr_29 [i_1 - 1] [i_1] [i_0] [i_1 + 1] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_31 |= 62;
    #pragma endscop
}
