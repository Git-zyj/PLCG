/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_3;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (min((max((((arr_1 [i_1]) | 281470681743360)), (arr_0 [i_1] [i_0]))), 18446744073709551615));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [10] [1] = (((((arr_9 [1] [i_1] [i_1] [i_0]) | 0)) % 177));
                        arr_11 [i_1] [5] = 0;
                        var_16 = (max(var_16, (arr_6 [i_1] [i_2 - 4] [i_0] [i_3])));
                        var_17 = -14;
                    }
                    arr_12 [i_1] = 24;
                }
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_18 = ((arr_14 [i_4] [i_6] [i_4 - 3]) ? (arr_14 [8] [i_1] [i_4 - 3]) : (arr_18 [i_0] [i_1] [i_4 - 3]));
                            var_19 |= (~0);
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_24 [i_1] [11] [i_1] [i_1] [i_1] = (-16685 <= 255);
                            arr_25 [i_0] [i_1] [i_1] [18] [i_7] = (arr_13 [i_7]);
                            arr_26 [i_1] [19] [18] [i_1] [i_1] = 8510187199268534201;
                            var_20 = (min(var_20, (arr_22 [i_4 - 3] [i_4] [i_4 - 3] [i_4 - 2] [14])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_21 += ((!(arr_21 [i_4 - 3] [i_4 + 1])));
                            var_22 = -var_1;
                        }
                        arr_30 [i_1] = ((((((arr_21 [i_0] [i_0]) - 87))) ? (arr_18 [i_0] [i_1] [i_4 - 2]) : (arr_28 [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4])));
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_33 [17] [i_1] = (max((((0 / 18446744073709551608) ? 48 : 18446744073709551608)), (8 | var_0)));
                        var_23 *= (max(((~(arr_8 [3] [i_9 + 3] [i_9 - 1]))), (((arr_8 [i_4] [i_9 + 3] [i_9 + 2]) ? (arr_8 [i_1] [i_9 + 2] [i_9]) : (arr_8 [1] [i_9 + 1] [i_9 + 2])))));
                        arr_34 [i_1] = ((((((((arr_7 [i_0] [i_0]) * (arr_1 [i_4])))) ? var_8 : (max(var_5, (arr_13 [i_0])))))) ? ((max(var_10, (((arr_0 [15] [i_0]) - var_10))))) : (max((arr_19 [i_9] [i_4] [i_1] [12] [i_1] [i_0]), (min((arr_8 [i_0] [18] [i_9 + 1]), 1094922036486521980)))));
                        arr_35 [i_1] [i_1] [i_1] [i_4] [i_9 - 1] = (arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] [i_9 + 1]);
                        arr_36 [i_0] [i_0] [i_1] [i_4] [i_9] [i_9] = ((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_11 : var_2);
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, var_3));
                            arr_41 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_1] = ((-25 - (arr_23 [i_0] [i_10 + 3] [i_4 - 2] [i_10])));
                            arr_42 [i_1] [i_1] [i_11] = ((!(arr_38 [i_10] [i_0] [i_10] [i_10])));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_12] [4] [i_1] [i_1] [8] [i_0] = (arr_18 [i_10 + 2] [i_4 + 1] [i_4]);
                            var_25 ^= (arr_28 [1] [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_10 + 2]);
                        }
                        var_26 = (min(var_26, (((~((((arr_15 [i_0] [i_4 - 2] [i_4] [i_0]) <= (arr_15 [i_0] [i_4 - 2] [i_4] [i_0])))))))));
                        var_27 = (arr_37 [13] [i_1] [i_4] [i_10 - 1] [i_4]);
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_28 += (((((!(((-18420 ? var_12 : var_0)))))) > -573799223));
                        arr_48 [i_0] [i_0] [i_1] = min((!var_5), (max((arr_6 [i_4 - 1] [i_4 - 1] [i_1] [i_13]), 18446744073709551612)));
                        arr_49 [i_1] [i_1] [i_1] [i_1] = ((((((((arr_9 [i_0] [i_0] [i_1] [i_13]) > 0)) ? (arr_18 [i_4 - 3] [i_4 - 3] [i_4 + 1]) : (((arr_19 [i_13] [i_13] [11] [i_4] [i_1] [i_0]) ? 17351822037223029611 : var_10))))) ? (arr_6 [i_4 + 1] [i_4 - 1] [i_1] [i_4 - 1]) : (max(((136 ? 0 : var_2)), (((-(arr_6 [i_4] [i_1] [i_1] [i_1]))))))));
                    }
                    arr_50 [i_1] [i_1] [i_4] = (arr_0 [i_4] [i_4]);
                    var_29 = (arr_0 [0] [i_4 + 1]);
                    var_30 = (max(var_30, (min(-15015075980693210693, ((min(((var_11 ? (arr_23 [i_1] [i_4] [i_1] [i_0]) : 192)), (((var_11 ^ (arr_40 [i_1] [i_4] [i_0])))))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_31 += (arr_54 [i_14]);
                                var_32 = var_2;
                                var_33 *= -1854988275527107936;
                                var_34 += ((((var_12 ? (((-(arr_0 [i_0] [i_0])))) : (arr_52 [i_0] [i_4 - 2] [i_15]))) * (((((((arr_39 [i_0] [7] [i_14] [i_15]) / (arr_9 [i_0] [i_1] [i_0] [i_15 - 1])))) ? (arr_47 [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 3] [i_15 - 1]) : var_1)))));
                                arr_57 [i_1] = ((((((!(arr_32 [i_4 + 1] [16] [16] [i_4] [0] [i_4 - 3]))))) + (arr_39 [i_4 + 1] [i_4 - 3] [i_15 - 1] [15])));
                            }
                        }
                    }
                }
                var_35 += (arr_2 [i_1] [i_1]);
                var_36 = var_6;
            }
        }
    }
    #pragma endscop
}
