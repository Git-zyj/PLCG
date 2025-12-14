/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [20] [i_3] [i_2] [13] [i_4] = -2147483642;
                                var_16 = (min(0, 65535));
                                var_17 = ((!((((((arr_0 [i_0 + 3]) >= 9126633640058160366))) == var_11))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((~(arr_11 [i_0] [i_0] [i_0] [i_0 + 2] [i_1 + 2])));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_18 = (max(((var_2 >= (arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1]))), 0));

                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [7] [i_6] [i_1] [i_1] [i_6] [i_0 - 2] = ((!(arr_0 [i_1 - 1])));
                            arr_21 [i_5] [i_5] [i_5] &= (((((var_11 || (((arr_0 [1]) >= (arr_3 [i_2])))))) < (((min(1, 1))))));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_24 [6] [6] [18] = ((!((min((arr_1 [i_0] [i_0]), var_3)))));
                            var_19 = (min(var_19, (((((max((arr_12 [i_0 + 3] [i_5] [i_1] [i_2] [6] [i_0 + 3]), (arr_18 [i_0 - 2] [1] [i_2] [1] [20])))) ? (arr_7 [i_0 + 2] [i_0 - 2]) : ((max((max(0, 9126633640058160364)), (arr_9 [i_7 + 1] [i_1 + 3] [i_1 + 1] [i_0 + 1])))))))));
                            arr_25 [i_1 + 1] [i_2] = (arr_16 [i_0] [i_0] [i_5] [i_0]);
                            var_20 = (((arr_1 [i_0 - 2] [i_0 - 2]) >= ((var_13 ? -76 : (arr_6 [i_2] [i_1 + 2])))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_21 = (max(var_12, (max((!var_11), (arr_1 [i_0 + 1] [i_0 - 2])))));
                            var_22 = ((-((~((min(-23428, 0)))))));
                            var_23 = (arr_3 [0]);
                            var_24 = (arr_0 [i_0]);
                        }
                        var_25 = ((!((((max((arr_7 [i_5] [i_0 + 2]), 0))) && -1))));
                        var_26 = (max(var_26, (!-30869)));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_27 |= 9126633640058160366;
                        var_28 ^= ((!(((~(arr_8 [i_9] [i_2] [i_2] [i_1 + 3] [i_2] [i_0]))))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_34 [i_0] = 1;
                        arr_35 [i_0] [1] [1] [i_10] [i_2] = ((0 ? (max((arr_30 [i_0] [i_0] [i_2] [i_2]), (((arr_22 [i_0] [i_0] [i_1 - 1] [i_2] [i_10]) ? (arr_16 [16] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : 0)))) : var_2));
                        var_29 = ((+((var_14 ? (arr_27 [i_0 - 2] [i_0 - 1] [i_1 + 1]) : (arr_27 [i_0] [i_0 - 2] [i_1 + 2])))));
                    }

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_39 [i_0] [i_11] [12] [i_1] = (arr_5 [i_0 + 1] [i_1 - 1] [i_11 - 1]);
                        arr_40 [i_0 - 2] [i_1 + 1] [i_0 - 2] [0] [i_1] [i_11 - 1] = -30193;
                        var_30 = max(1, 4);
                    }
                }
            }
        }
    }
    var_31 = ((var_2 ? var_0 : ((~(262143 < 65521)))));
    #pragma endscop
}
