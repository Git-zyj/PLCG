/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_5) | var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (~var_2);
                var_13 ^= ((~(((var_5 == (min((arr_2 [i_1]), (arr_3 [i_0] [i_1]))))))));
                var_14 = var_5;

                for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_0] = (max((((((min(var_4, (arr_5 [i_2] [18] [18])))) == var_6))), var_4));
                    var_15 = (min((((~(arr_6 [i_0] [i_2 + 3] [17] [i_2 + 3])))), (((arr_5 [i_0] [i_2 - 1] [i_2 - 1]) ? (arr_5 [4] [i_2 + 1] [i_2]) : 255))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_16 += (((arr_6 [i_0] [i_0] [i_0] [i_3]) ? (arr_1 [i_3]) : (min(var_1, -9099))));
                        var_17 = (((((-(arr_6 [1] [i_2 - 2] [i_3 - 2] [i_3])))) ? (arr_6 [i_0] [i_2 - 2] [i_3 - 2] [i_2]) : ((min((arr_6 [i_1] [i_2 - 2] [i_3 - 2] [1]), (arr_5 [i_0] [i_2 - 2] [i_3 - 2]))))));
                        var_18 = (min((((arr_0 [i_2 + 4]) ? (arr_5 [i_2 + 1] [i_3 - 1] [i_3 - 1]) : 25243)), ((((~(arr_0 [i_2 - 2]))) & (arr_0 [i_3 - 2])))));
                        var_19 -= var_6;
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_4] = -var_5;
                            var_20 = -9099;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 -= (arr_6 [i_0] [i_1] [i_1] [i_1]);
                            var_22 = (((arr_6 [i_2 - 1] [i_2 - 2] [i_4 + 2] [i_4 + 1]) == (~1)));
                            var_23 = var_10;
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 = (var_1 + -var_1);
                            var_25 = ((((12238457097832410987 ? 1620048132 : 168)) | -37));
                            var_26 = (min(var_26, (((~((~(arr_4 [i_1] [i_4 - 1]))))))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_26 [i_0] [i_1] [1] [1] [1] [i_8] = (max(((var_8 ? var_1 : var_1)), (((1 ? (arr_19 [i_0] [i_1] [i_2 + 4] [i_8] [i_8 - 1] [8]) : (arr_19 [i_1] [i_1] [i_2 + 4] [i_1] [i_8 - 1] [i_8 - 1]))))));
                        var_27 = var_1;
                    }
                    arr_27 [i_0] [i_1] [1] = (max((((1 | var_0) >> (((((((arr_25 [i_0] [i_1] [i_0]) + 2147483647)) << (((arr_23 [i_0] [i_1] [i_1] [i_2]) - 973268607)))) - 2147483547)))), (arr_3 [i_1] [i_0])));
                }
                for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_28 = ((min(-var_0, (((var_6 * (arr_18 [i_1] [i_9] [5] [i_0] [i_1] [i_0] [i_0])))))));
                    var_29 |= ((!(((~(arr_6 [i_9 + 1] [i_1] [i_1] [11]))))));
                }
                for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_30 = ((((min((arr_33 [i_10 + 4] [i_10] [i_10 + 2] [i_10 + 4]), (arr_1 [i_10 + 4])))) | var_10));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_31 = (max(((min(var_5, (-1925027821 & 1)))), (!261535753)));
                                arr_40 [i_12] [i_1] [i_10] [9] = ((-(arr_32 [i_10 + 3] [i_11 - 1] [i_11])));
                                var_32 = (((var_10 * var_2) / (arr_13 [i_0] [i_10] [i_11] [i_0])));
                                var_33 = var_7;
                                arr_41 [i_12] [i_1] [i_10] [i_11] [i_10] = ((-1 + ((((arr_15 [16] [16] [i_10] [i_11] [i_12]) ? 1 : var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_34 -= max((min(((max(1, var_4))), -9055016450813583233)), ((max(1, var_5))));
                                var_35 = (max(var_35, (((((-6757314302138496600 ? var_3 : (arr_6 [i_10 + 4] [i_1] [i_10] [i_13])))) ? (arr_6 [i_10 - 2] [i_1] [i_0] [i_13]) : (min((arr_6 [i_10 - 2] [i_13] [i_1] [i_13]), var_0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            {
                var_36 = (((((arr_31 [i_15] [i_15]) & (arr_31 [i_15] [i_15]))) | (arr_4 [i_15] [i_16])));
                var_37 = (var_1 | var_2);

                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    arr_58 [i_15] [11] [i_16] [i_15] = ((((max((var_3 & var_9), (arr_2 [i_17])))) ? ((((((arr_22 [i_15] [i_16] [i_16] [i_17] [1]) & var_2))) & var_7)) : var_2));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 16;i_19 += 1)
                        {
                            {
                                var_38 = (min(var_38, ((-9055016450813583233 / ((((((var_9 + 9223372036854775807) << (1 - 1))))))))));
                                var_39 = (arr_18 [i_15] [i_16] [i_16] [i_17] [i_18] [i_19 + 3] [i_19]);
                                arr_64 [i_18] [i_18] = (((((arr_59 [i_17 + 2] [i_17 + 2] [i_17 + 2]) ? (arr_59 [i_17 - 1] [i_17 + 1] [i_17]) : -15)) << ((~((~(arr_53 [i_15] [i_16])))))));
                            }
                        }
                    }
                    var_40 = (min(730060056102914955, (((var_1 ? (arr_20 [i_16] [i_16]) : -32)))));
                }
            }
        }
    }
    #pragma endscop
}
