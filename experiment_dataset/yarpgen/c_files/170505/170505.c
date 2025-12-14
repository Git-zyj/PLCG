/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = (min(var_10, (((((var_8 ? 0 : (arr_5 [i_0] [i_1 + 2] [i_1] [i_3]))) >> (((~var_4) ? ((var_2 ? 1 : var_2)) : (((arr_0 [i_1] [i_2]) ? (arr_5 [i_0] [i_0] [1] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_3]))))))))));
                        arr_9 [i_0] [i_1] [i_1] [i_3] [i_1] = (max((((arr_5 [4] [1] [i_1] [i_0]) ? var_4 : (arr_4 [i_1] [i_1] [0]))), var_5));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_11 = (((((var_2 ? 1 : (arr_8 [i_4])))) ? (arr_11 [i_4] [1] [i_3] [1] [1] [i_0] [i_0]) : (((arr_4 [i_0] [i_0] [1]) * var_1))));
                            var_12 = (min(var_12, ((((arr_7 [i_0] [i_0] [i_2] [i_3]) ? var_1 : (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1] [i_1 - 1] [i_1 - 1]))))));
                            arr_13 [i_0] [i_1] [3] [i_3] [i_0] = ((arr_3 [i_0] [14]) < (arr_4 [i_4] [1] [i_0]));
                            arr_14 [0] = -var_8;
                            arr_15 [i_2] [i_2] = ((-(arr_12 [1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_13 = (((arr_18 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [12] [i_5 - 1]) >> (arr_10 [1] [1] [1] [i_3] [1] [i_3] [i_3])));
                            var_14 = (((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5]) ? (arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]) : (arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [6] [3])));
                            arr_20 [i_0] [i_0] [i_0] = ((var_0 ? (arr_7 [i_1] [9] [i_1 - 1] [i_1]) : (arr_0 [1] [i_1])));
                            var_15 = var_1;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_16 &= ((((1 ? var_6 : var_7)) << (((arr_3 [i_1 + 1] [i_1 + 4]) - 22))));
                            var_17 = arr_1 [i_2];
                            var_18 = (((arr_3 [i_1] [i_0]) ^ (((arr_2 [i_2] [i_1] [9]) * var_6))));
                            var_19 = ((1 ^ ((((arr_11 [i_3] [i_1] [i_0] [i_6] [i_6] [i_2] [i_0]) && (arr_6 [i_0] [i_0] [15] [i_0]))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_20 = (min(((-var_6 ? 1 : (arr_12 [1] [i_3] [i_2] [i_3] [i_7] [i_3]))), (arr_7 [i_0] [i_1] [1] [i_3])));
                            arr_26 [i_7] [i_3] [0] [0] [0] = ((((((((var_6 ? (arr_1 [i_3]) : (arr_0 [i_0] [i_0])))) ? ((max(var_2, (arr_21 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] [5] [i_7])))) : (arr_24 [i_1] [1] [i_1])))) && (arr_18 [i_0] [i_1] [1] [1] [i_2] [i_3] [3])));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_0] [i_8] = (arr_19 [i_1]);

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_8] [i_1] [i_2] [i_1] [i_8] = 1;
                            arr_34 [i_9] [i_8] [i_0] [i_8] [i_0] = (((arr_30 [i_8] [i_8 - 1] [i_8 - 1]) | (((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [1]) ? (arr_22 [i_0] [1] [1] [i_8] [11]) : 1))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            arr_41 [i_0] [i_10] [i_10] = (arr_32 [i_1 + 2] [12] [i_1 + 2]);
                            var_21 -= (min(((((max(1, (arr_36 [5] [i_1] [i_2] [i_10] [i_10])))) ^ ((199 ? var_2 : var_4)))), (max(((1 ? var_1 : (arr_27 [i_0] [i_1 + 2] [2] [i_2]))), var_5))));
                            arr_42 [1] [i_10] [14] [i_1] [i_10] [i_0] = (((((var_5 ? ((var_5 ? var_3 : (arr_25 [4] [1] [1]))) : (((arr_31 [i_11] [i_10] [i_2] [i_1] [1] [7]) * (arr_30 [i_0] [i_0] [i_0])))))) ? ((((((arr_31 [i_0] [8] [i_0] [i_0] [1] [i_0]) + (arr_2 [i_11] [i_2] [i_1])))) ? ((var_7 ^ (arr_19 [i_1 + 2]))) : ((var_6 ? var_0 : (arr_21 [1] [i_0] [3] [1] [i_10] [14] [i_11]))))) : (((arr_22 [i_11 + 2] [i_11 + 2] [i_0] [10] [i_11]) ? 1 : (arr_23 [i_11 - 3] [i_11 + 2] [i_2] [11] [i_11] [1])))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_45 [i_0] [i_10] [4] = (((arr_11 [i_0] [i_1] [i_2] [i_10] [i_1 + 4] [i_12] [i_1]) ? (arr_11 [i_0] [i_1 + 4] [i_2] [i_10] [i_1 + 4] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_12] [i_12] [i_1 + 4] [i_12] [i_2])));
                            var_22 = (max(var_22, var_1));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            arr_49 [i_10] [i_10] [i_10] [i_10] = (var_2 < ((var_8 ? 1 : var_8)));
                            var_23 *= arr_44 [i_0] [2] [i_2] [i_10] [i_13];
                            arr_50 [i_10] = ((((var_2 ? var_3 : (arr_10 [i_13] [i_13] [i_10] [i_2] [9] [i_0] [i_0])))) || (arr_37 [i_0] [14] [i_10] [i_0] [i_0] [i_0]));
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_24 &= (arr_22 [i_0] [1] [i_2] [i_1 - 2] [i_0]);
                            var_25 ^= (((max(((var_4 ? var_5 : var_2)), (((arr_8 [i_0]) * var_1)))) << (arr_30 [i_1] [i_2] [i_14])));
                        }
                        arr_54 [i_0] [i_10] [i_1] [i_2] [i_10] = 1;
                        arr_55 [i_2] [i_1] [i_1 + 2] [i_1] [i_1] |= (((min(((1 ? (arr_22 [i_0] [i_0] [i_0] [i_2] [i_10]) : var_4)), ((var_2 ? var_8 : var_1)))) + ((((((arr_53 [i_2]) ? 245 : var_7))) ? (((arr_40 [i_10] [1] [1] [i_1] [i_0]) >> (((arr_3 [i_0] [i_0]) - 28)))) : ((min(var_0, (arr_36 [i_0] [i_1] [i_0] [i_2] [i_0]))))))));
                        arr_56 [i_10] [11] [i_2] [i_10] [i_0] = var_2;
                        var_26 = ((177 | (max((var_5 * var_8), (((arr_4 [13] [i_1] [i_1]) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_10]) : var_3))))));
                    }
                    var_27 = (min(var_27, (((((((arr_6 [i_0] [i_2] [i_2] [i_1 + 2]) ? (arr_35 [i_2]) : (arr_35 [i_2])))) ? (arr_18 [4] [7] [7] [1] [i_2] [1] [1]) : (((var_1 | var_6) ? (arr_10 [i_0] [i_1] [1] [i_0] [i_2] [i_1] [1]) : (arr_24 [i_1] [i_1] [1]))))))));
                }
            }
        }
    }
    var_28 = (max(var_28, (((118 ? var_5 : 178)))));
    var_29 += var_7;
    var_30 &= var_9;
    var_31 &= var_3;
    #pragma endscop
}
