/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 2] = (arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 3] [i_2] = (arr_9 [i_1 + 1] [i_1 + 1] [i_3] [i_4]);
                                arr_15 [i_0] [1] [1] [i_3] [i_2] = 160;
                            }

                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_20 -= ((~(((arr_13 [i_0] [i_0] [i_1] [10] [i_3 + 3] [i_5]) ? ((var_12 ? (arr_4 [i_0] [i_1 - 2] [14]) : 2529803607415184334)) : (~3684141322611922516)))));
                                var_21 = (arr_11 [i_0] [i_2 + 1] [i_2] [i_5]);
                                var_22 = (arr_5 [i_2] [i_3]);
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 13;i_6 += 1)
                            {
                                var_23 = (arr_17 [i_6 + 1] [i_1 - 2] [i_3 + 3] [i_2 + 2] [i_1 + 1] [i_1 - 2]);
                                var_24 = ((arr_12 [i_2] [i_2] [i_2] [i_2 - 1] [i_6]) ? (arr_13 [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6 + 3] [i_6]) : (arr_12 [i_2] [i_2] [i_2] [i_1 + 1] [i_1 + 1]));
                                var_25 = ((arr_1 [i_2 - 1] [6]) & (arr_22 [i_6] [i_3 + 1] [i_2] [i_1 + 2] [i_1 - 1] [i_0]));
                            }
                            var_26 = (-(((!(arr_5 [i_1] [i_3])))));
                            var_27 = arr_9 [i_3] [i_3 + 3] [i_3 + 4] [i_3 + 4];
                            var_28 ^= var_14;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_29 = min((~-var_0), (((!(arr_26 [i_0] [14] [i_7])))));
                                arr_32 [i_9] [i_8] [12] [i_1 + 2] [i_8] [i_0] = ((-(arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1])));
                                var_30 *= ((((((arr_18 [i_1] [i_8] [i_9]) ? (arr_18 [11] [i_7] [i_9]) : var_0))) == ((255 ? (min((arr_11 [i_9] [i_1] [i_1] [i_1]), var_14)) : (((var_3 ? 14729 : (arr_20 [i_1] [i_1] [i_8] [i_9]))))))));
                                arr_33 [i_8] = (((((-85 ? 0 : 90)))));
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                arr_36 [i_0] [i_1 - 2] [i_7] [i_8] [4] = 1;
                                var_31 = ((-(((~var_12) ? (arr_26 [i_1 - 2] [i_7] [i_7]) : ((var_14 ^ (arr_9 [i_0] [i_7] [i_0] [i_10])))))));
                            }
                            for (int i_11 = 1; i_11 < 15;i_11 += 1)
                            {
                                arr_39 [i_11] [i_8] [i_7] [i_1 + 1] [i_8] [i_0] = (((max(((var_2 | (arr_11 [i_0] [i_1] [i_8] [i_0]))), var_6)) == (((!((!(arr_5 [7] [i_1 - 2]))))))));
                                var_32 ^= -89;
                                var_33 = ((max(var_12, (min(var_3, var_7)))));
                                var_34 ^= ((((arr_18 [i_0] [i_1] [i_1 + 2]) || ((((arr_24 [i_11]) ? (arr_2 [i_11]) : 7))))));
                            }

                            for (int i_12 = 0; i_12 < 16;i_12 += 1)
                            {
                                arr_42 [i_8] = var_18;
                                arr_43 [i_8] [i_1] [i_7] [i_1] [i_12] = ((var_6 ? (max(var_13, (((arr_4 [i_0] [i_1 - 2] [i_8]) ? -8824002562684128783 : var_0)))) : 115));
                                var_35 *= ((((((arr_27 [i_1 + 2] [i_1 - 1] [i_1] [6]) && (arr_27 [i_1] [i_1 + 3] [i_1] [i_1])))) <= (max((((arr_31 [i_1] [i_8] [i_7] [i_1] [i_1]) >> (arr_31 [i_1] [i_1] [i_7] [i_8] [i_12]))), (min((arr_12 [i_1] [i_8] [i_7] [6] [i_1]), (arr_13 [i_12] [i_8] [i_7] [i_7] [1] [i_0])))))));
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 16;i_13 += 1)
                            {
                                var_36 = var_6;
                                arr_47 [i_13] [i_8] [i_8] [i_8] [i_0] = (((-var_4 + 2147483647) << ((var_13 >> (((arr_25 [i_8] [i_0] [i_0]) - 2407415612))))));
                                arr_48 [11] [11] [11] [i_8] [i_8] [i_13] [i_13] = (((arr_46 [i_0] [i_8]) >= (arr_46 [i_1] [i_8])));
                            }
                            var_37 += ((((((min((arr_45 [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] [i_7]), (arr_3 [i_8])))) ? ((((arr_1 [i_8] [i_0]) <= (arr_9 [1] [i_0] [i_1 + 2] [i_0])))) : (var_0 != var_13))) / ((48 ? (max(var_5, -962433094)) : (arr_28 [i_1 + 1])))));
                            arr_49 [i_8] [i_7] [i_1 - 2] [i_8] = (((~(arr_2 [i_1 + 3]))));
                        }
                    }
                }
            }
        }
    }
    var_38 = var_2;
    var_39 = 64137;
    #pragma endscop
}
