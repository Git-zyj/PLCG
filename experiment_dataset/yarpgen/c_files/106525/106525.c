/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_6 | 1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0] [i_0]) && 31621));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = ((!(arr_3 [1])));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            var_20 = (((arr_8 [i_0] [i_1] [i_1] [i_3]) ? var_7 : (arr_7 [i_0] [3] [i_2] [i_3])));
                            arr_14 [i_1] = (1 < ((((arr_7 [i_0] [i_1] [i_0] [i_4]) ? 0 : (arr_1 [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] = var_9;
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_0] = (((arr_5 [i_5]) ? 1 : (!1)));
                            var_21 = ((1 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : -31599));
                        }
                    }
                }
            }
            arr_20 [i_1] [i_1] = ((-(arr_3 [i_0])));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_6] [8] [i_7] [7] = (--31621);
                            var_22 = (max(var_22, (((~var_9) ? ((var_4 ? (arr_16 [1] [i_1] [i_1] [i_6] [i_6 + 3] [i_7] [i_8]) : 8189882297536913132)) : (((~(arr_7 [i_7] [i_7] [i_7] [i_7 - 2]))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] = ((0 * (arr_4 [i_0] [i_0])));
                            arr_37 [i_0] [i_1] [i_9] [i_1] [i_10] [i_11] = (-((var_2 ? 31621 : (arr_6 [i_0]))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] &= var_16;
                            arr_42 [i_0] [i_1] [i_9] [i_10] [i_12] [i_1] = 1271983900;
                            arr_43 [i_0] [i_0] [i_9] [i_1] [i_12] = (~-var_14);
                        }
                        var_23 = (max(var_23, ((((arr_31 [i_0] [i_1] [i_0] [i_9]) ? (arr_7 [i_0] [i_1] [i_9] [i_10]) : var_12)))));
                        var_24 *= 1;
                        var_25 *= 18446744073709551615;
                        var_26 = (((arr_12 [i_1] [5] [i_9] [i_9]) == (arr_12 [i_1] [i_1] [i_9] [i_10])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 8;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_51 [i_15] [i_13] [i_13] [i_13] [i_15] [i_13] = 4;
                        var_27 = max((((((arr_50 [i_13]) ^ 4294967285)))), (min(((1 * (arr_0 [i_0]))), (min(1, var_11)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 0;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 9;i_19 += 1)
                    {
                        {
                            arr_63 [i_17] [9] [i_17] [i_17] [i_17] [i_17] = ((-((31618 ? var_8 : 0))));
                            var_28 = (!-1);
                            var_29 = 117622876760376618;
                            var_30 = (arr_35 [i_0] [i_16] [4] [i_18] [i_19]);
                            arr_64 [i_19] [i_17] [i_18] [i_17] [i_17] [i_0] = ((((arr_30 [i_0] [i_17] [i_19]) ? (arr_22 [i_17] [i_16] [i_17]) : (arr_11 [i_16]))));
                        }
                    }
                }
            }
            var_31 *= ((112 ? (((arr_13 [i_0] [0] [i_0] [i_0] [1] [i_16] [i_16]) ? var_0 : 18446744073709551600)) : ((var_7 ? (arr_15 [i_16] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_8))));
        }
        arr_65 [i_0] = ((((max(1, (((arr_25 [i_0] [i_0]) - var_0))))) ? (((max((arr_24 [i_0] [i_0]), 18446744073709551615)) >> (-var_4 - 11707))) : -var_0));
    }
    #pragma endscop
}
