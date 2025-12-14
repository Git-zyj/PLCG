/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 + 2147483647) << (var_6 - 1)));
    var_14 &= var_3;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = (arr_6 [i_0] [i_1] [i_2] [i_1]);
                    var_15 = (arr_7 [i_1 + 1] [i_0 + 3]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_16 = ((!(arr_10 [i_1] [i_2] [i_3])));
                            var_17 -= (arr_13 [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4] [i_4]);
                            arr_15 [i_4] [i_3] [i_3] [i_0] &= (((arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4 + 1]) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_4 + 2]) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2])));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_20 [i_0 + 2] [i_0] [6] [i_1] [i_0] [20] [i_0] = (((arr_11 [i_1] [i_1 - 1] [i_2] [i_3]) - 16));
                            var_18 -= var_5;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = (((!var_2) ? -1 : (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_25 [i_0 + 3] [i_1] [i_2] [i_1] [i_6] = var_7;
                            var_19 = (((arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_1 + 1]) ? (arr_12 [i_0] [i_1] [i_1] [5] [i_1 - 1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                        }
                        var_20 = (max(var_20, ((((arr_23 [i_0] [i_1] [i_1] [i_0] [i_0 + 1]) == (arr_14 [i_3] [i_0 - 1] [i_3] [i_0] [i_1 - 1]))))));
                    }
                }
            }
        }
        arr_26 [i_0] = ((var_0 ? (arr_5 [20] [i_0] [20]) : (((arr_0 [i_0]) ? var_8 : 8))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        var_21 = ((!(arr_28 [i_7 + 1] [i_7 + 1])));
        arr_29 [i_7] [i_7] = var_12;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_22 = ((!(arr_5 [i_8 - 1] [i_8 + 1] [i_8 + 2])));
        var_23 = (arr_10 [i_8] [i_8 - 1] [i_8]);
    }
    var_24 = var_9;
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        {
                            arr_42 [i_9] [i_10] [i_9] [i_9] = (max(((var_5 ? ((13 ? (arr_5 [i_9] [i_10] [4]) : (arr_19 [i_9] [i_9] [i_9]))) : (arr_28 [i_11] [i_11]))), (arr_35 [i_10])));
                            arr_43 [i_9] [i_10] [i_9] [i_12] = var_0;
                            var_25 = (!var_9);
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_52 [i_9] [i_10] [i_13] [i_14] [i_9] [i_15] = ((-(max((((arr_23 [i_9] [i_10] [i_9] [i_14] [i_15]) ? (arr_12 [i_14] [i_14] [0] [i_14] [i_14]) : (arr_44 [i_15] [3] [i_9] [i_9]))), 1009068206))));
                                var_26 = ((max(((max(var_2, var_0))), (((arr_40 [i_10] [i_9] [i_14] [i_15]) - 1)))));
                            }
                        }
                    }
                    var_27 = (((arr_6 [i_9] [12] [12] [i_9]) + 1));
                }
                var_28 = (~1);
            }
        }
    }
    #pragma endscop
}
