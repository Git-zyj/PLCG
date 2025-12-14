/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((~var_9) >= 2147483647));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((+(min((var_0 + var_0), var_7))));
        var_17 = ((((((arr_1 [i_0] [i_0]) * var_9))) ? ((-(arr_1 [i_0] [i_0]))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_13 [0] [i_2] [i_2] [5] [i_2] [i_2] = var_15;
                        var_18 = (((arr_5 [i_4]) / (arr_0 [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_19 ^= var_15;
                        var_20 = (((((~(arr_16 [i_3] [i_3] [i_1] [5] [3])))) ? (((arr_6 [i_1] [i_3] [i_5]) ? (arr_11 [i_3] [i_3] [7] [i_3] [i_3] [i_3]) : var_0)) : (((arr_11 [i_1] [i_2] [1] [i_3] [i_5] [i_2]) ? var_0 : var_12))));
                    }
                    arr_17 [i_3] [i_2] [i_1] [i_1] = ((var_9 ? ((var_7 ? var_6 : var_3)) : var_0));
                }
            }
        }
        var_21 = (((arr_8 [i_1] [i_1] [i_1] [i_1]) || (var_9 % var_8)));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_7] [i_6] [i_6] = min((((var_3 || (arr_22 [i_6] [i_7] [i_6])))), (((arr_27 [i_7] [i_7]) ? (arr_22 [i_6] [i_6] [i_6]) : (arr_27 [i_7] [i_7]))));
                    var_22 ^= (((((arr_24 [i_7 + 1] [i_7] [1]) ? var_10 : (arr_27 [i_7 - 1] [i_7]))) != (((arr_24 [i_7 - 2] [i_8] [i_8]) ? (arr_27 [i_7 + 1] [i_7]) : (arr_23 [i_7 - 2] [i_7])))));

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_23 = (min(var_23, ((((arr_18 [15] [15]) / ((((var_1 != (arr_25 [i_6] [i_8] [5] [18]))))))))));
                        var_24 = (max(var_24, (((((((arr_18 [i_7] [i_9]) | (arr_18 [i_7 + 1] [i_8])))) ? ((~(arr_18 [i_6] [i_7 - 1]))) : (((arr_18 [i_8] [8]) ? (arr_18 [i_6] [i_6]) : (arr_18 [i_6] [i_7]))))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_25 -= (((var_7 - (arr_20 [4]))));
                            var_26 = (((~var_7) ? (((!(arr_26 [i_6])))) : ((var_13 ? var_1 : (arr_27 [i_6] [1])))));
                            var_27 = (((var_9 ? var_1 : (arr_27 [i_6] [i_6]))) < (arr_33 [i_6] [i_6] [i_6]));
                            arr_35 [i_6] = (arr_25 [i_6] [22] [i_7 - 2] [i_10]);
                        }

                        for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            arr_38 [1] [i_7] [i_8] [i_7] [i_6] = ((((((~(arr_29 [1] [i_6] [i_8] [i_7] [i_6] [i_6])))) ? ((min(var_12, var_1))) : (arr_36 [i_6] [i_7] [i_8] [i_8] [i_6]))));
                            arr_39 [i_6] [i_11] [i_9] [i_9] [i_8] [i_7] [i_6] = (((((-(((!(arr_29 [1] [i_6] [i_8] [17] [i_9] [i_11]))))))) && (arr_33 [i_6] [i_6] [i_11])));
                            arr_40 [i_6] [21] [21] [i_8] [8] [i_11] = (arr_34 [i_9] [i_7 - 2] [i_7 - 2] [i_6]);
                            var_28 ^= (arr_32 [20] [i_7] [i_7] [16] [i_11]);
                        }
                        for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_6] = (arr_26 [i_6]);
                            var_29 += (((arr_18 [i_8] [i_6]) ? (arr_22 [i_6] [i_7] [i_7]) : ((((!var_0) && ((((arr_34 [i_6] [i_7] [i_8] [i_9]) ? (arr_18 [i_6] [i_8]) : (arr_24 [i_12] [i_9] [i_6])))))))));
                        }
                        for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            arr_46 [i_6] [i_7] [i_6] [i_9] [i_13] = (arr_41 [i_6] [17] [17] [i_8] [1] [i_13]);
                            var_30 = (max(var_30, (arr_26 [i_9])));
                            var_31 = ((-((((arr_21 [i_6]) || (arr_21 [i_6]))))));
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_32 = (i_6 % 2 == 0) ? (((((!var_12) << (((arr_29 [i_6] [i_6] [i_9] [i_7 - 1] [i_6] [i_14]) - 151)))))) : (((((!var_12) << (((((arr_29 [i_6] [i_6] [i_9] [i_7 - 1] [i_6] [i_14]) - 151)) - 21))))));
                            var_33 = ((var_4 ? (((((arr_34 [i_9] [i_8] [20] [i_6]) * (arr_33 [8] [i_8] [i_7]))) >> ((min(var_4, (arr_41 [i_6] [i_7] [i_8] [i_9] [i_14] [i_8])))))) : (arr_49 [i_6] [i_6] [15] [i_6] [i_14])));
                            var_34 = max((arr_26 [i_6]), (min(((109 >> (90 - 68))), (var_11 | var_8))));
                            var_35 = (min((max((arr_45 [i_14] [i_6] [i_7]), (arr_45 [i_8] [i_6] [i_6]))), (min(var_6, (((arr_32 [i_6] [i_7] [i_6] [i_7] [i_9]) ? (arr_31 [i_6] [18] [i_6] [i_7 + 1] [i_6] [i_7 - 2]) : var_10))))));
                        }

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            arr_53 [i_6] [i_7] [i_8] [i_6] = (min(((-(arr_32 [i_9] [i_6] [i_6] [17] [i_7 - 1]))), ((((arr_48 [i_15] [i_7] [i_8]) || (arr_32 [14] [14] [i_6] [i_9] [i_7 + 1]))))));
                            arr_54 [i_6] [i_6] [i_6] [i_8] [i_9] [i_15] [2] = (min((!var_4), (arr_30 [i_15] [i_9] [i_8] [9] [9])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
