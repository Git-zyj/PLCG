/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 || ((max(var_15, ((var_0 << (var_11 - 36319))))))));
    var_17 = (((((max(var_5, var_3)) <= (var_0 >= var_15)))) < var_0);
    var_18 = (max(((max((max(var_4, var_0)), (max(var_8, var_1))))), ((((max(0, 21650))) ? ((var_10 ? var_2 : var_3)) : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_4] = (arr_12 [i_0] [i_1] [i_3] [i_1] [i_4] [i_4]);
                                arr_17 [i_1] [i_1] [i_4] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                                var_19 += (max(((min(127, 21650))), var_3));
                                var_20 = (((((0 <= 21650) > 21650)) || (((1020 ^ (41 ^ 33))))));
                                var_21 ^= ((((max(0, (max((-127 - 1), 1))))) > ((-((max(0, 1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_1] [i_1] = (((max((arr_1 [i_0] [i_5]), ((var_11 ? var_10 : (arr_3 [i_5])))))) ? (max((arr_7 [i_6] [i_1] [i_1] [i_0]), (arr_5 [1] [i_6] [i_1]))) : (max((max((-127 - 1), 0)), (max((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_5 [i_2] [i_5] [i_1]))))));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] = ((var_15 == (((arr_22 [i_1 + 1] [1] [i_2 + 2]) % (arr_22 [i_1 + 1] [i_1 + 1] [i_2 + 1])))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_7] [i_7] [i_0] |= min((((((arr_6 [i_0] [i_0] [i_2] [i_7]) - (arr_22 [i_0] [i_1 + 1] [i_2 + 2]))) + var_2)), (((((max((arr_25 [i_0] [i_0]), var_13))) && var_3))));
                            var_22 = ((-(((((min(var_11, (arr_26 [i_8] [i_1] [i_2] [i_1] [i_0]))))) - var_3))));
                            var_23 ^= (((((arr_0 [i_1]) ? (arr_2 [i_0]) : var_10)) * (((((-(arr_10 [i_0] [4] [i_7] [6]))) / ((min(1, (arr_27 [i_0] [i_1] [i_0] [i_8])))))))));
                            var_24 += var_14;
                            var_25 += (max(var_4, var_4));
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            var_26 -= ((~((((~(arr_19 [i_0] [2] [i_9]))) ^ (max(var_8, var_2))))));
                            arr_33 [i_0] [i_1] [i_2] [i_1] [i_9] [i_1] = ((((((((var_7 + (arr_13 [i_1] [i_2 + 2] [i_1])))) ? ((max((arr_31 [i_1] [i_1] [i_2] [i_9] [i_9]), (arr_21 [i_0] [i_1])))) : (((var_9 || (arr_3 [i_7]))))))) + ((((max((arr_22 [i_7] [i_1] [i_1]), var_0))) / (min(14497683066231103251, (arr_29 [5] [i_1 + 1] [i_2] [12] [i_9])))))));
                        }
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            arr_36 [i_1] [i_1] [i_2] [i_7] [i_10] [i_10] = (((arr_32 [i_0] [i_1] [i_1] [i_7] [i_1]) + -var_9));
                            var_27 -= (min((!0), ((~(max((arr_20 [i_2] [i_2] [i_1] [i_0]), (arr_35 [i_10] [i_7] [i_7] [i_7] [10] [i_0] [i_0])))))));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_28 = (min(((-(((arr_15 [1] [i_1] [i_2] [10] [i_2 + 2] [i_2] [i_11]) % 206)))), ((((arr_3 [i_2]) < (arr_0 [i_2 + 2]))))));
                            var_29 &= ((!(arr_4 [i_11])));
                            var_30 ^= ((((max((arr_9 [i_2 + 1] [i_11]), (arr_9 [i_2 + 1] [i_7])))) ? (arr_9 [i_2 + 1] [i_0]) : (arr_9 [i_2 - 1] [i_0])));
                            var_31 = ((-((((min((arr_2 [3]), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [12]))) > (var_13 && var_14))))));
                        }

                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_1] = ((+(((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), var_3)) - (((var_5 + (arr_9 [i_0] [i_1]))))))));
                            var_32 = (max((arr_3 [i_1]), (((max((arr_5 [3] [i_2] [i_1]), var_3)) >> ((min(var_2, (arr_4 [i_1]))))))));
                        }
                    }
                    arr_43 [i_0] [i_1] = ((+((((arr_32 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 2]) < (arr_0 [i_2 + 1]))))));

                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        var_33 = (min(var_33, var_15));
                        var_34 = (min(var_34, ((((((arr_18 [i_1 + 1]) - -var_15))) ? ((((((arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]) - var_14))) ? ((((arr_32 [i_13] [i_0] [i_2] [i_0] [i_0]) ? var_5 : (arr_37 [5] [5] [i_13])))) : (arr_29 [i_0] [i_0] [i_0] [i_2] [i_13]))) : ((((arr_20 [1] [i_2 - 1] [i_13 - 1] [3]) * var_14)))))));
                        var_35 = (max((max(0, -8063734050459412671)), var_14));
                        var_36 = ((127 ? 112 : 50));
                    }
                }
            }
        }
    }
    #pragma endscop
}
