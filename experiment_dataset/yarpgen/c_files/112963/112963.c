/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0] [i_0 - 2]) >= (arr_0 [i_0] [i_0 + 1])));
        var_13 = var_0;

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_14 = (((((arr_0 [i_0 + 1] [i_1 - 3]) != var_1)) ? var_10 : (arr_1 [i_1 - 1] [i_0 - 2])));
            arr_4 [i_0] [i_1] = ((var_8 ? ((((var_2 == (arr_0 [i_1 - 1] [i_0 + 2]))))) : (max(var_6, (arr_0 [i_1 + 1] [i_0 + 2])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_2] = ((((var_8 ? var_8 : var_10)) / var_7));
            arr_8 [i_0] [i_2] = var_4;
            var_15 ^= ((var_7 * (((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0 - 1]) : (arr_3 [i_0] [i_2] [i_2])))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_16 = (min((((var_4 ? var_5 : var_5))), ((var_10 ? var_8 : (arr_0 [i_0 + 2] [i_0 - 1])))));
            arr_11 [i_3] = max(var_0, var_9);
            var_17 = (max(var_9, var_2));

            /* vectorizable */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                arr_16 [2] [2] [i_3] = arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1];
                arr_17 [17] [i_3] = ((var_6 ? (arr_6 [i_0 + 1] [i_0]) : (arr_9 [5] [i_3] [6])));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_21 [19] [i_3] [i_3] [i_5] = var_4;
                var_18 = (((((var_3 ? var_6 : var_4))) ? (arr_15 [i_0 - 1] [i_0 - 2] [i_0 + 2]) : (arr_15 [i_0 + 1] [i_0 - 2] [i_0 + 2])));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_19 = (arr_0 [i_0] [13]);
            arr_24 [i_6] |= var_2;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_20 = ((var_0 + (arr_20 [i_0] [i_0 - 1])));
                arr_28 [i_0] [i_0] [i_7] [i_7] = ((var_5 == (arr_23 [i_7] [i_6] [i_0])));
                arr_29 [8] [i_6] [i_7] = (arr_1 [i_0 - 2] [i_0 - 1]);
            }
            var_21 = (max(var_1, ((((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_0 : var_3)))));
        }
        arr_30 [i_0] = var_5;
        var_22 = (((((var_5 & (arr_25 [16] [i_0 - 2] [4])))) ? (arr_23 [i_0] [i_0 - 2] [4]) : (min((arr_25 [4] [i_0 - 2] [4]), var_1))));
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        arr_33 [i_8] = var_9;
        var_23 = var_10;
    }
    var_24 = (max((((var_8 > (var_6 | var_11)))), var_2));
    var_25 = (var_10 == var_0);
    var_26 = var_8;
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_27 = min(var_2, var_9);
                                arr_45 [i_9] [i_13] [i_11] [6] [i_10] [i_12] = var_3;
                                arr_46 [i_9] [i_9] [i_9] [i_10] [i_9] = (arr_40 [i_13] [i_12] [5] [12]);
                                arr_47 [i_13] [i_10] [i_12] [i_12] [i_11] [i_10] [i_9] = (min((arr_6 [i_9 + 3] [i_11 + 1]), (arr_6 [i_9 - 4] [i_11 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_53 [i_10] [7] [i_10] = (arr_32 [i_9]);
                                arr_54 [11] [1] [i_11] [i_10] [i_9] [i_10 - 2] [i_9] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
