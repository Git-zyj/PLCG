/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_4 && (arr_1 [i_0] [i_0])))) ^ (((arr_0 [i_0]) ? var_11 : var_1)));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] = ((var_3 == ((var_5 ? (arr_3 [i_1]) : (arr_1 [i_1] [i_1])))));
            arr_6 [i_1] = var_1;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_12 = (((arr_4 [i_0] [i_1]) & var_8));

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_0] [i_2] [i_2] [i_3] = (((arr_7 [i_0] [i_1] [i_2] [i_2]) * ((var_4 ? (arr_7 [i_2] [i_2] [i_1] [i_2]) : var_0))));
                            var_13 = (max(var_13, ((((-32335 ? 1033654851 : var_9)) >> (arr_13 [i_4] [i_1] [i_2] [i_3] [i_4])))));
                            var_14 = (((arr_12 [i_0] [i_1] [i_0] [i_2] [i_4] [i_4]) ? (arr_13 [i_4] [i_2] [i_2] [i_2] [i_0]) : var_6));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((!((((arr_4 [i_0] [i_1]) ? 44 : 2013931245)))));
                        }
                        for (int i_5 = 4; i_5 < 11;i_5 += 1)
                        {
                            var_15 = (((arr_7 [i_0] [i_2] [i_3] [i_2]) ? (((arr_1 [i_0] [i_1]) ? var_7 : (arr_4 [i_0] [i_1]))) : var_9));
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((507886047 ? (var_0 + var_9) : ((var_5 >> (((arr_14 [i_0] [i_1]) - 69))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_1] [i_2] [i_3] [i_6] = ((((((((arr_4 [i_6] [i_2]) + 9223372036854775807)) >> (((arr_1 [i_0] [i_1]) + 1542016302))))) ? -var_0 : (((arr_11 [i_0] [i_0] [i_0]) % var_5))));
                            arr_23 [i_2] = ((+(((arr_0 [i_0]) ? (arr_13 [i_6] [i_2] [i_3] [i_3] [i_0]) : (arr_4 [i_0] [i_1])))));
                            var_16 = (min(var_16, (arr_21 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_2] [i_7] = ((var_11 ? 21281 : 212));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_7] = (((~var_7) ? var_0 : (((var_11 >= (arr_3 [i_0]))))));
                        }
                    }
                }
            }
            var_17 = (max(var_17, ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (var_7 | 819768257) : (((arr_7 [i_1] [i_1] [i_0] [i_1]) + var_1)))))));
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_18 = var_2;
            arr_30 [i_8] [i_8] [i_0] = (arr_1 [i_0] [i_8]);
        }
        var_19 = (+((((arr_13 [i_0] [6] [i_0] [i_0] [i_0]) != var_5))));

        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_38 [i_9] [i_9] [i_10] [i_11] = var_8;
                        arr_39 [i_0] [i_9] [i_9] [i_10] [i_11] = 31;
                    }
                }
            }
            var_20 -= (((arr_4 [i_0] [i_9]) ? (((arr_8 [i_0] [i_0] [6]) + -2101257328)) : (arr_17 [i_0] [i_0] [i_0] [i_9])));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_21 |= var_10;
            arr_42 [i_12] [i_0] = var_2;
            var_22 = (max(var_22, ((((arr_41 [i_0] [i_12] [i_0]) ? ((var_9 + (arr_7 [i_0] [i_0] [i_0] [1]))) : (((var_5 << (-9 + 16)))))))));
        }
    }
    for (int i_13 = 3; i_13 < 10;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 7;i_15 += 1)
            {
                {
                    arr_51 [i_13] [i_13] [i_14] = (max(((var_3 ? (((arr_24 [i_13] [i_14] [i_14] [i_15] [i_15]) ? var_4 : var_0)) : -2101257330)), var_9));
                    var_23 = (((arr_33 [i_13] [2] [i_14] [i_15]) >> (((arr_25 [i_13] [i_14] [i_15] [1] [i_15]) - 1097411462))));
                }
            }
        }
        var_24 &= ((((min((~var_1), var_11))) <= (max((max((arr_20 [i_13] [i_13] [i_13] [i_13] [10] [i_13] [i_13]), (arr_34 [i_13] [i_13]))), (((arr_46 [i_13] [i_13] [i_13]) ? var_3 : var_3))))));
        var_25 = (((((var_9 ? (var_8 + var_5) : (((arr_33 [i_13] [4] [i_13] [i_13]) ? var_3 : var_4))))) ? (((var_3 * var_7) ? (min(var_6, var_3)) : var_3)) : (arr_8 [1] [i_13] [1])));
        arr_52 [i_13] = (((((var_7 << (((arr_34 [i_13] [i_13]) - 3303627898))))) ? (((var_7 ? var_1 : var_6))) : ((((var_0 <= (((!(arr_50 [i_13]))))))))));

        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            arr_56 [i_13] = ((-(arr_9 [i_13] [i_13] [i_16] [i_16])));
            arr_57 [i_16] [i_16] [i_13] = ((((!(!var_4))) ? (min(((((arr_37 [i_13] [2] [i_16] [i_13]) ? var_0 : (arr_37 [i_13] [10] [i_13] [i_13])))), (arr_25 [i_16] [2] [i_13] [2] [i_13]))) : (arr_8 [i_13] [i_16] [4])));
            var_26 = ((((-(((arr_13 [i_13] [0] [i_13] [i_16] [i_16]) ? var_9 : (arr_7 [i_13] [i_13] [i_16] [10]))))) & ((min((~-100), var_10)))));
            var_27 = (-((var_11 ? ((min((arr_8 [i_13] [i_16] [0]), (arr_17 [i_13] [i_13] [i_16] [i_16])))) : (var_9 * var_10))));
        }
    }
    var_28 = (min((((var_3 ? var_1 : var_0))), (~123)));
    var_29 = (max(var_29, (((((max(var_3, (!var_6)))) ? (max(var_8, (max(var_5, var_1)))) : ((((max(var_3, var_9))) ? var_9 : ((var_11 ? var_11 : var_0)))))))));
    #pragma endscop
}
