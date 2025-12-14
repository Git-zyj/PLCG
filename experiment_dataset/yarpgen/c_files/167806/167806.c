/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(62, (min((var_12 + var_3), ((min(var_5, 194))))));
    var_14 |= var_8;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (min((~1598156673), (((arr_1 [i_0] [i_1]) & (arr_1 [i_0] [i_2])))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0 + 1] [i_1] [6] [i_3] |= 7;
                        arr_11 [i_0] [i_0] [i_2] [i_0] = 62;
                        arr_12 [i_0] [i_1] [11] [i_2] [i_1] = ((var_8 ? var_10 : ((max((arr_5 [i_0] [i_0] [i_0] [i_0]), 2696810622)))));
                        var_15 = (max(var_15, (arr_1 [i_1] [i_0 - 1])));
                    }
                }
            }
        }
        arr_13 [i_0] = (((((6 & (arr_2 [i_0] [i_0 + 2])))) ? (1598156674 + 2696810627) : ((min(57667, (((-2147483647 - 1) / var_11)))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_16 = (((arr_4 [i_0]) ? (arr_9 [i_0]) : var_5));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_17 = (~1598156674);
                            var_18 *= 238;
                        }
                    }
                }
            }
            arr_24 [11] [i_0] = var_3;
            var_19 = (max(var_19, ((((arr_21 [i_0] [i_0] [i_0] [7] [i_0] [i_0 + 2]) ? var_3 : var_11)))));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_27 [i_0] = (((((arr_0 [i_0]) / -13640)) / (max((arr_3 [i_0 - 1]), 1))));

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_30 [i_0] [i_0] [i_8] [i_9] = (arr_20 [i_0]);
                var_20 = (min(var_20, (max(var_0, (((1 == (var_11 - var_10))))))));
                var_21 = (arr_17 [i_0] [10]);
            }
            arr_31 [1] [i_0] [1] = (min(((((218 * 187) / (((arr_25 [1] [i_0] [i_8]) / var_9))))), 4294967290));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_22 = (arr_0 [i_0]);
                arr_36 [i_0] [i_10] = (2696810627 / 65535);
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_23 = ((1724585798 != (arr_1 [i_0] [i_0 + 1])));
                var_24 = (!var_7);
                var_25 = (var_4 + var_7);
                arr_41 [i_0] [i_0] = ((var_10 | ((((arr_16 [i_0] [i_11]) | 26430)))));
            }
            var_26 = (min((((((arr_21 [i_0] [5] [5] [i_0] [i_0] [i_8]) / var_7)) + (max(7868, var_7)))), ((min(54, (arr_19 [i_0]))))));
        }
        arr_42 [i_0] = (arr_18 [i_0] [i_0] [i_0]);

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_45 [i_0] [i_12] = ((((max((arr_16 [i_0 + 2] [i_12]), var_8))) ? (min(((var_3 ? (arr_20 [i_0]) : var_10)), var_6)) : (((65535 + (max(var_6, var_9)))))));

            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_27 = (max(((4294967295 * (668978640 / var_8))), ((max((((var_2 ? (arr_40 [i_0 + 1] [i_0] [i_0]) : (arr_29 [i_0 + 1] [i_0] [i_0])))), var_2)))));
                arr_48 [i_13] [i_0] [i_0 - 1] = (max(((((arr_20 [i_0 + 1]) + (arr_20 [i_0 + 2])))), (min(var_7, var_1))));
                arr_49 [i_0] = 1;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_54 [i_0] [i_12] [i_15] [i_0] [i_15] = (arr_35 [i_12] [i_12]);
                            arr_55 [i_0] [i_12] [i_0] [i_0] [i_0] [i_13] = (((arr_0 [i_0]) < (((arr_0 [i_0]) - (arr_0 [i_0])))));
                            arr_56 [i_0] = ((-(((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_28 = (((45 ^ 668978636) ? (((arr_57 [i_0 - 1] [i_0] [i_0]) / var_0)) : (arr_0 [i_0])));
            var_29 &= (((arr_18 [i_0 - 1] [i_0 + 1] [i_16]) / (arr_18 [i_0 - 1] [i_0 - 1] [i_16])));
            var_30 = (max(var_30, (((var_2 - (arr_9 [i_16]))))));
        }
    }
    #pragma endscop
}
