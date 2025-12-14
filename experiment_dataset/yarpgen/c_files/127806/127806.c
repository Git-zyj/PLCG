/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-2992986981 ? 7 : 0)) / (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (min((min(((((arr_0 [i_0] [i_0]) ? 5404 : var_2))), (min((arr_1 [i_0]), 9223372036854775807)))), (((((min(var_15, var_18))) ? (((!(arr_0 [1] [i_0])))) : (arr_0 [1] [6]))))));
        var_22 = (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [8]);
        arr_3 [i_0] = ((var_8 * (((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = arr_5 [i_1];
        arr_6 [7] [i_1] = (((((arr_4 [3]) && ((!(arr_5 [1]))))) ? (arr_5 [3]) : ((min(((min((arr_1 [1]), (arr_1 [4])))), (min((arr_4 [i_1]), var_2)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_24 = (max(var_24, -13250));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [4] [4] &= (~-1);
                        arr_16 [i_2] = (arr_9 [i_4] [0]);
                        var_25 = (arr_10 [4] [i_2]);
                    }
                }
            }
            var_26 = (arr_10 [i_1] [11]);
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_27 *= ((((((arr_11 [10] [2] [6] [i_5 - 3]) | 1))) ? (((var_7 & (arr_17 [1] [10] [i_5])))) : (arr_14 [i_5] [1] [10] [11])));
            arr_19 [i_1] [i_5] = ((-11633 ? ((var_18 ? 67043328 : (arr_12 [i_1] [i_5]))) : (!var_0)));
        }

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_24 [0] = (arr_22 [i_1] [3]);

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_29 [i_8] [i_8] [4] [8] [i_6 + 1] [i_1] = (min((((1 ? (((arr_1 [i_7]) & var_8)) : -67043328))), ((min(var_11, 29)))));
                    arr_30 [4] [11] [i_7] [i_6] [8] = (arr_23 [11] [i_6] [i_7] [i_8]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_28 = (arr_13 [i_1] [10] [6] [8] [1] [i_9]);

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_29 = (arr_32 [i_9] [8] [i_10]);
                        arr_35 [i_1] [11] [i_9] [i_1] = ((((var_15 * (arr_26 [9] [i_6 - 1] [i_9] [i_10]))) - (~120)));
                        var_30 = (min(var_30, 16383));
                    }
                    var_31 = (min(var_31, (((0 ? (((var_0 << (((arr_17 [i_7] [2] [i_7]) - 38258))))) : var_1)))));
                }
            }
            var_32 *= arr_9 [6] [3];

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_33 = (min(var_33, (arr_31 [i_1] [8] [i_6] [0] [i_11])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_43 [i_13] [i_11] [i_13] = ((~((~((27497 ? var_2 : var_1))))));
                            arr_44 [i_13] [7] [i_11] [4] [i_12] [3] [i_13] = (min(18446744073709551615, (((((min(0, 1))) ? 1 : ((var_3 ? (arr_17 [i_13] [0] [i_13]) : var_14)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_34 -= var_6;
                            arr_49 [4] [11] [0] [5] [i_15] [i_14] = ((((min((min(30162, var_0)), var_11))) ? 0 : (min(((var_15 ? (arr_33 [1] [i_6] [i_11] [i_14] [1]) : (arr_1 [i_14]))), ((((arr_1 [i_14]) ? (arr_5 [8]) : (arr_27 [i_1] [i_6 - 1] [0] [0] [4]))))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                arr_52 [i_16 + 1] [i_6] &= (arr_31 [2] [i_1] [i_6] [10] [0]);
                arr_53 [i_1] [i_6] [i_6 + 1] [i_16] = (49938 == 4294967295);
                arr_54 [3] [i_1] [i_6] [8] = (~((~(arr_11 [1] [8] [i_16] [i_16 - 1]))));
            }
        }
        for (int i_17 = 4; i_17 < 11;i_17 += 1)
        {
            var_35 = (((((~(((arr_40 [3] [i_17]) ? var_12 : (arr_56 [0])))))) ? ((1 ? 55587 : 3229049803)) : (((((min((arr_39 [0] [i_17]), 1))) ? ((((arr_23 [1] [3] [9] [i_17]) > (arr_31 [2] [i_17] [i_1] [i_17] [8])))) : (!5))))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            arr_66 [i_20] [11] [1] [i_19] [8] [i_20] = var_11;
                            var_36 = (max(var_36, ((min((arr_4 [i_1]), (min((arr_4 [i_1]), (arr_4 [i_17 - 4]))))))));
                        }
                        arr_67 [i_1] [i_17 + 1] [1] [i_19] [i_19] |= ((((0 ? 12380591666616748302 : -495526416)) != (arr_11 [1] [i_19] [2] [6])));
                        var_37 = (max(var_37, ((((((~(var_2 - 0)))) ? -1 : ((14 ? (((-27 + 2147483647) << (1 - 1))) : ((1 * (arr_22 [i_1] [i_17]))))))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            arr_71 [8] [11] [i_21] = (((~var_9) ? var_12 : (arr_60 [i_1] [9] [3] [10])));
            var_38 = (((arr_8 [1] [i_21]) ? var_9 : var_9));
        }
    }
    #pragma endscop
}
