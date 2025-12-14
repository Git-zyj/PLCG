/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (arr_1 [i_0]);
        var_15 = arr_1 [i_0];

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [13] [i_2] [i_1] [i_0] = var_2;
                        var_16 = arr_2 [i_0] [i_0];
                    }
                }
            }
            var_17 = ((((!(arr_6 [i_0]))) ? ((((arr_0 [i_0] [8]) << var_11))) : (min((min((arr_4 [i_0] [i_1]), 0)), ((min((arr_8 [i_0]), var_4)))))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_18 = 23;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_19 = ((var_10 | ((var_5 ? (arr_8 [2]) : (arr_0 [i_0] [i_5])))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_20 ^= (((var_11 ? (arr_12 [i_0] [i_4 + 1] [4]) : var_3)));
                            var_21 = ((6284 >> (9223372036854775807 - 9223372036854775776)));
                            arr_19 [i_4] [i_4] = ((2490833286 / ((~(arr_18 [i_0] [i_4] [i_5] [i_6])))));
                            arr_20 [i_0] [i_4] [i_5] [1] [i_6] [i_4] [i_7] = (var_4 ? (arr_8 [i_0]) : (arr_1 [i_4 + 2]));
                        }
                        var_22 = ((~(arr_9 [i_0] [11] [11] [i_4 - 2] [i_4])));
                        arr_21 [i_4] [i_4] [i_5] [i_6] = ((-(arr_1 [i_4 - 2])));
                    }
                }
            }
            var_23 = (-(arr_6 [i_4 - 1]));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            var_24 = (arr_25 [i_4] [11] [1] [i_9] [i_9]);
                            var_25 = ((arr_6 [i_9]) ? (((arr_28 [i_9] [i_4] [i_8] [i_9] [i_10 + 1]) ? (arr_1 [i_8]) : (arr_2 [i_0] [0]))) : 59251);
                            arr_29 [i_0] [i_4] [i_4] [i_9] [i_10] = (arr_26 [i_4] [i_4] [i_4 + 4] [i_8 - 1] [i_8 + 3]);
                            var_26 = 911272455164481777;
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_27 = (arr_0 [i_4 + 1] [i_8 - 1]);
                            var_28 = 3170121458716292281;
                            var_29 = ((var_2 ? (arr_15 [i_4 + 1] [i_4 + 4] [i_4 + 2] [i_4 + 2]) : 59271));
                            arr_32 [1] [i_4 + 3] [i_8] [i_4] [i_4] [i_9] [i_0] = ((-(arr_24 [i_4] [i_4] [i_4] [i_9] [i_9] [i_11])));
                            var_30 = (min(var_30, ((((~59275) ? -1900213633 : (arr_0 [i_0] [i_4]))))));
                        }
                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            var_31 = -217275767;
                            var_32 = ((-911272455164481778 ? 72 : 6284));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_33 = (((var_8 == (arr_6 [i_4]))));
                            var_34 = (arr_16 [8]);
                            arr_37 [i_0] [i_4] [i_8 + 3] [i_9] [0] = (arr_14 [i_0] [i_4]);
                        }
                        var_35 += ((((((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_7 [1] [i_4])))) && (((~(arr_30 [i_0] [i_0] [i_8] [i_9] [i_9]))))));
                    }
                }
            }
        }
        for (int i_14 = 3; i_14 < 10;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_36 = (max(var_36, 0));
                            var_37 = var_11;
                            var_38 = (max(var_38, (((-(!-5088317778567781932))))));
                            var_39 = var_2;
                        }
                    }
                }
                var_40 = -9223372036854775785;
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_41 = var_8;
                            var_42 = ((-(min(((var_10 ? (arr_33 [i_19] [i_18]) : (arr_27 [i_0] [i_0] [i_18] [i_19 + 1] [i_20]))), (var_5 * var_9)))));
                            var_43 = (max(((-217275769 ? 25167 : 2147483647)), ((((arr_47 [i_14] [i_14] [i_14 + 3] [i_14 - 3] [i_19 + 3] [i_19] [i_19 - 1]) && (arr_47 [i_14] [i_14] [i_14 + 1] [i_14 + 3] [i_19 + 1] [i_19] [i_19 - 1]))))));
                            var_44 = ((((var_13 != (arr_26 [i_18] [i_14 + 1] [i_14 + 2] [3] [i_14 + 1]))) ? (arr_22 [i_14] [i_18] [i_19] [i_20]) : (arr_26 [i_18] [5] [i_14 - 3] [i_14 - 3] [i_18])));
                        }
                    }
                }
                var_45 = (min(var_11, (arr_8 [i_0])));
            }
            var_46 = (arr_54 [i_0] [6] [i_0]);
            var_47 = (max(((-2982014206657267651 * (arr_13 [i_0]))), (((11 <= (arr_13 [1]))))));
        }
        var_48 |= ((!(((-(arr_45 [i_0]))))));

        for (int i_21 = 1; i_21 < 13;i_21 += 1)
        {
            arr_58 [i_0] [i_0] = 2147483635;

            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                var_49 = (arr_27 [12] [i_21 + 1] [i_21] [i_21] [i_22]);
                var_50 += ((((min((arr_41 [1]), (arr_11 [i_21 - 1] [i_21 - 1] [i_21 + 1])))) ^ ((-(arr_41 [6])))));
                var_51 = var_8;
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 11;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                {
                    var_52 = var_13;

                    for (int i_26 = 1; i_26 < 11;i_26 += 1)
                    {
                        var_53 -= (((arr_59 [i_23] [i_24 + 1] [i_26 + 3]) == (arr_59 [i_23] [i_24 + 1] [i_26 - 1])));

                        for (int i_27 = 3; i_27 < 13;i_27 += 1)
                        {
                            var_54 = (arr_23 [i_27 - 2] [i_27 - 1] [i_27 - 1]);
                            var_55 = (min(var_55, (-178981237 < 59246)));
                        }
                        for (int i_28 = 2; i_28 < 12;i_28 += 1)
                        {
                            var_56 = var_5;
                            var_57 = (-32767 - 1);
                        }
                        for (int i_29 = 0; i_29 < 14;i_29 += 1)
                        {
                            arr_80 [i_23] [i_23] [i_25] [i_26] [i_26] = ((-(arr_74 [i_23] [i_24] [1] [i_26] [i_26 + 1] [0])));
                            var_58 = (((arr_72 [i_24 + 1]) ? (arr_11 [10] [i_25] [i_29]) : ((var_13 ? (arr_43 [i_23] [i_24 - 1] [i_25] [i_26]) : var_13))));
                        }
                        arr_81 [i_23] [i_24] [i_25] [i_26] = ((8 ? 1900213632 : -23));
                        var_59 = ((3563759123 ? (arr_60 [i_26] [i_24 + 1] [i_24] [i_26 + 2]) : (arr_44 [i_23] [i_23] [i_26] [i_24] [i_24 + 3] [i_24])));
                    }
                }
            }
        }
        var_60 = (arr_51 [0]);
        arr_82 [i_23] [i_23] = var_4;
    }
    var_61 = var_13;
    #pragma endscop
}
