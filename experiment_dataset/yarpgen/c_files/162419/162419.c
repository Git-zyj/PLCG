/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((-((~(((arr_2 [i_1]) & var_15))))));
                arr_6 [i_1] = 16376;
                arr_7 [i_1] [i_1] [i_1] = ((~(~1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_19 = (arr_4 [i_2]);

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_3] [0] [i_2] [i_3] = var_15;
                    arr_17 [i_3] [5] [i_3] = (((arr_9 [i_2]) ? ((~(arr_9 [i_4]))) : (((arr_11 [20] [i_3]) ? (arr_11 [i_3] [i_2]) : (arr_14 [i_2])))));
                    var_20 = (min(var_20, ((((arr_3 [i_4] [i_3]) < (min(((1 ? (arr_9 [i_2]) : (arr_10 [i_4] [i_2]))), 1)))))));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_21 = min(((min((-109 >= var_1), (max((arr_2 [i_3]), var_16))))), (min(((max((arr_2 [i_5]), (arr_11 [i_5] [i_5])))), ((~(arr_10 [i_2] [i_3]))))));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_22 = ((((((arr_1 [i_5]) && (arr_1 [i_6])))) * (((arr_1 [i_2]) / -32764))));
                        var_23 = (min(var_23, ((max((((arr_18 [i_5] [i_3] [i_5]) ? (arr_4 [i_2]) : (arr_18 [i_2] [i_2] [i_2]))), ((~(arr_4 [i_2]))))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] = 1;
                        arr_26 [i_2] [i_3] [i_3] [i_7] = (((~(((arr_4 [1]) ? var_8 : (arr_15 [i_2] [i_2] [i_3] [i_2]))))) > (min((arr_24 [i_2] [i_3] [i_2] [i_5] [i_7]), ((-22900 ? var_3 : (arr_2 [i_7]))))));
                        var_24 = (arr_24 [i_3] [1] [i_3] [i_3] [1]);
                        var_25 *= (min((arr_23 [i_2] [i_3] [2] [i_7] [i_7]), ((((arr_3 [i_2] [1]) >= (arr_18 [i_7] [i_5] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_32 [i_2] [i_5] [18] [i_2] [1] [i_3] = (((arr_1 [i_3]) * (arr_5 [i_2] [3])));
                                var_26 = 0;
                                arr_33 [1] &= ((((-(arr_22 [i_2] [6] [i_2] [i_2] [18]))) * ((((var_3 + (arr_19 [i_9] [i_8 - 3] [i_3] [i_3])))))));
                                arr_34 [10] [1] [i_5] [3] [i_3] = (((((~var_4) + 2147483647)) >> ((((~(arr_18 [i_2] [6] [6]))) + 16))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_39 [i_2] [i_2] [i_2] [i_2] [i_3] = (max((max((((arr_1 [i_3]) ? var_2 : var_17)), (arr_37 [20] [20]))), (arr_5 [i_11 - 1] [i_11 - 1])));
                                var_27 = (max(var_27, (((((((!(arr_2 [i_10])))) + (arr_24 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_28 = arr_5 [i_13 + 2] [i_13 + 2];
                            arr_47 [i_2] [i_3] [i_3] [i_12] [i_13] = (max(1, (((!1) ? ((max((arr_29 [i_2]), 34))) : (!var_4)))));
                        }
                    }
                }
            }
        }
    }
    var_29 = 1;
    #pragma endscop
}
