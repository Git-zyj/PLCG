/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 -= (((max(1, 0)) ? ((((((var_9 ? (arr_1 [i_0] [i_0]) : var_1))) && (arr_1 [i_0] [i_0])))) : (max((((arr_2 [i_0] [13]) ? var_0 : (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_15 = ((-((var_7 ? (arr_2 [i_0] [i_0]) : var_5))));
        var_16 = arr_0 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_17 = (arr_8 [i_1] [i_1] [1] [i_5]);
                                var_18 ^= ((var_4 ? (arr_10 [i_3 + 2] [i_3 - 1] [i_3 + 1]) : (((var_2 ? var_3 : var_12)))));
                                var_19 = (~var_12);
                            }
                        }
                    }
                    var_20 = (((arr_10 [i_3 + 2] [i_3 + 2] [i_3 - 1]) ? (((arr_11 [4] [i_1] [i_1] [i_1]) ? var_6 : var_5)) : (!var_10)));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_5));
                                var_22 = (((arr_14 [i_1 + 1]) ? (arr_14 [i_1 - 1]) : (arr_14 [i_1 + 2])));
                                var_23 ^= ((arr_13 [i_1 + 1] [i_7 + 1] [i_3 + 1] [21] [i_3 + 1]) ^ -var_2);
                            }
                        }
                    }
                    arr_21 [i_3] [i_2] [i_3] [i_2] |= var_11;
                    var_24 = ((!(arr_11 [i_3] [i_3 + 2] [1] [9])));
                }
            }
        }
        var_25 = (min(var_25, (((~(~var_8))))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_26 = (((((~(arr_28 [9] [12] [12] [20])))) && (arr_15 [i_1] [i_8 - 1] [i_8 - 1] [i_1 + 4] [i_9] [i_8 - 1])));
                    var_27 -= (((arr_28 [i_1] [i_1] [i_1] [i_1 + 4]) ? (arr_16 [i_1 + 1] [i_1 + 1] [i_9] [i_1]) : (arr_24 [i_1 + 3] [i_1 + 1] [10])));
                    arr_29 [i_1 + 2] [i_8] [i_1] [2] = (arr_27 [20] [i_8]);
                }
            }
        }
        arr_30 [i_1] = ((!(arr_11 [i_1 - 1] [21] [i_1 - 1] [i_1 + 2])));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_28 = ((var_3 ? (((arr_26 [i_10] [2] [2] [i_10]) ? (arr_16 [6] [6] [6] [6]) : var_3)) : var_9));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_11 + 1] [i_11] [i_11] = (arr_19 [8] [8] [8] [8]);
                    arr_42 [i_11] [i_12] = arr_24 [i_10] [15] [i_10];
                }
            }
        }
    }
    var_29 = ((var_1 ? ((-1 ? var_4 : ((var_5 ? var_0 : var_11)))) : (((!(var_0 >= var_0))))));
    #pragma endscop
}
