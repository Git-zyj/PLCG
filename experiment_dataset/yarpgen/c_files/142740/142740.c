/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_10 [i_1] [i_3] [i_1] [i_1] [i_2] = ((((var_5 ? var_7 : var_14))) ? (((arr_7 [i_4] [i_0] [9] [i_0]) ? (arr_2 [i_0]) : var_3)) : (arr_3 [i_1] [i_1]));
                            arr_11 [16] [i_1] [i_0] [i_1] [i_0] = (arr_2 [i_3 - 2]);
                            arr_12 [i_0] [i_1] [10] [i_2] [i_1] [i_4] = (((arr_0 [i_0 - 2]) ? var_7 : var_6));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] = (arr_2 [i_1 + 1]);
                        }

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_3] [1] [14] [14] [i_3 - 4] [i_1] = (((arr_8 [i_0] [i_5] [i_3 - 1] [i_3 - 1] [i_2] [i_5 + 1]) ^ -var_4));
                            var_18 = (((((arr_1 [i_0]) ^ var_9))) ? var_1 : var_10);
                            var_19 = (((arr_0 [i_0]) ? (arr_9 [i_1 - 2] [i_1 - 1] [i_1]) : (((arr_2 [i_5 - 1]) ? (arr_16 [i_0] [i_1] [i_3 - 4] [i_1]) : var_9))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_3] [3] = ((((((arr_9 [i_6] [i_0] [i_6]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_3])))) ? ((((arr_16 [i_0 - 2] [i_1] [i_3] [i_6]) ? var_1 : (arr_3 [i_1] [i_1])))) : (arr_6 [i_1 + 1] [i_2] [i_0 - 1] [i_6] [i_6])));
                            var_20 = (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]) ? var_6 : (arr_3 [i_1] [i_1 + 1])));
                            var_21 = ((((((arr_1 [i_2]) ? var_1 : var_3))) ? (arr_8 [i_3 - 2] [i_6] [i_3 - 2] [i_1 + 1] [i_1 - 2] [i_1]) : (((((arr_2 [i_0 - 1]) >= var_9))))));
                            arr_21 [i_0 - 2] [i_0 - 2] [i_2] [i_1] = (arr_9 [i_0 + 1] [i_3 - 1] [i_1 + 2]);
                        }

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [15] [i_1] [i_2] [17] [1] = var_2;
                            var_22 = (max(var_22, (((+(((arr_2 [i_1]) & var_8)))))));
                        }
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [i_1] = (((((arr_8 [i_0] [i_1] [i_2] [i_1] [6] [i_0]) == (((arr_1 [i_0]) ? var_12 : var_8)))) ? (((arr_4 [i_0 - 2] [i_1 - 2] [i_8 - 1]) ? (arr_18 [i_8] [i_1] [i_8] [i_1] [i_8 + 1]) : (((((arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) && var_5)))))) : var_1));
                        var_23 = ((((max((((arr_1 [i_2]) ? (arr_23 [i_0 - 2] [i_1 + 1] [i_2] [i_2] [i_0]) : var_17)), ((((arr_14 [i_0] [i_0] [i_0 + 1]) ? var_14 : (arr_26 [i_2] [i_8] [i_1 + 1] [10] [i_0]))))))) ? (((!var_4) ? ((var_7 ? (arr_8 [i_2] [i_2] [i_2] [7] [i_2] [i_2]) : var_11)) : ((((arr_23 [i_0] [i_2] [i_2] [i_2] [i_0]) + var_6))))) : (arr_4 [9] [i_1] [i_1])));
                    }
                    arr_28 [i_0] [i_1] [i_0 - 2] [i_1] = (((((((var_1 ? var_12 : (arr_5 [15] [i_1] [i_1])))) ? (min(var_5, (arr_7 [i_0] [i_0] [i_2] [i_2]))) : (arr_14 [i_1 + 1] [i_1] [i_0 + 1])))) ? ((((var_17 ? (arr_19 [i_1] [i_1] [i_0] [i_0] [i_1]) : var_1)) + var_3)) : (((var_10 ? (((arr_19 [i_0] [i_1] [i_1] [i_2] [i_2]) >> (((arr_22 [i_0] [i_1] [i_1] [i_1 - 1] [i_2]) - 1550489235)))) : (((arr_14 [i_2] [8] [8]) ? var_5 : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [13])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_24 = (var_13 ? (arr_18 [i_10 - 2] [8] [i_10] [8] [i_9]) : var_12);

                        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_25 = (((arr_6 [i_10] [i_10 - 2] [i_10 + 3] [i_10 + 1] [i_10 + 3]) ? ((((arr_4 [i_12] [11] [i_13]) ? var_12 : var_15))) : (((arr_25 [i_9] [i_9] [i_11] [i_9] [i_13] [i_13]) ? var_15 : (arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                            var_26 = (((var_8 > var_10) ? (var_1 ^ var_7) : (arr_5 [i_10 - 2] [i_13] [i_10 + 2])));
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, var_5));
                            var_28 = ((arr_42 [i_12] [i_11] [i_11] [i_10 - 2] [i_14]) ? var_1 : (arr_34 [i_10 + 3] [i_10 - 1] [i_12]));
                        }
                        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            var_29 = (((arr_23 [i_11] [i_10 + 1] [i_11] [i_9] [i_9]) ? (arr_26 [i_15] [i_15] [i_10 - 1] [i_10 + 1] [i_10 + 2]) : (arr_23 [i_9] [i_10 - 2] [i_15] [i_10 - 2] [i_10 - 2])));
                            var_30 = (((arr_16 [i_10] [i_10 + 3] [i_10] [i_10]) ? (arr_16 [i_10] [i_10 + 1] [i_10] [i_10]) : (arr_29 [i_10] [i_10])));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_31 -= (((((var_5 ? (arr_44 [i_11] [i_11] [i_11]) : (arr_38 [i_16] [i_16] [i_16])))) ? (((arr_2 [i_9]) ? (arr_46 [i_11] [i_11] [i_11] [i_11]) : (arr_40 [i_16]))) : (arr_31 [i_10 + 1])));
                            var_32 = var_6;
                            var_33 = ((-var_15 ? (((var_10 ? (arr_9 [i_9] [i_11] [i_12]) : var_16))) : (((arr_23 [14] [i_10] [i_11] [i_10] [i_16]) ? (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : var_10))));
                        }

                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            var_34 = (min(var_34, (arr_4 [i_10 + 1] [i_10 + 2] [i_10 + 2])));
                            var_35 = (max(var_35, (((arr_29 [i_17 + 1] [i_10 + 3]) ? (arr_39 [i_10] [i_10 - 2] [i_9] [i_17 - 2] [i_10 - 2] [i_10 - 2]) : (arr_29 [i_17 + 4] [i_10 + 3])))));
                        }
                        arr_54 [i_12] [14] [i_10] [i_9] [i_9] = (var_10 ? var_4 : (arr_3 [16] [i_12]));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {
                        arr_57 [i_9] [i_10] [i_10] [i_10] [0] = (((var_15 | var_5) ? (arr_29 [i_10 + 3] [i_10 + 3]) : (arr_3 [2] [i_10 - 2])));

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            arr_60 [i_9] [i_10] [i_11] [i_19] [i_19] = ((arr_40 [i_10 - 1]) >> (((arr_40 [i_10 - 1]) - 3643)));
                            var_36 = (-(((arr_2 [i_9]) ? var_15 : var_9)));
                        }
                        var_37 = var_15;
                        arr_61 [i_11] = (((arr_1 [i_10 + 3]) ? var_4 : (arr_37 [i_10] [i_10 + 2] [i_10 + 2] [i_10 - 2])));
                    }
                    arr_62 [i_9] = (max((((((var_12 ? var_17 : var_10))) ? (arr_51 [i_9] [i_10 - 2] [i_10] [i_10] [i_11] [i_11] [i_11]) : ((var_1 ? var_4 : var_15)))), var_3));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_20 = 2; i_20 < 18;i_20 += 1) /* same iter space */
    {
        var_38 = (min(var_38, (arr_63 [i_20 + 2])));
        var_39 = (max(var_39, (arr_63 [i_20 + 3])));
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 18;i_21 += 1) /* same iter space */
    {
        var_40 |= (arr_66 [i_21 - 1]);
        var_41 |= (arr_65 [i_21] [i_21 + 3]);
        var_42 = (min(var_42, (((((((arr_65 [i_21 - 2] [i_21]) ? var_12 : (arr_64 [i_21])))) ? (arr_64 [i_21 + 2]) : (((arr_66 [i_21]) ? var_5 : (arr_63 [17]))))))));
    }
    var_43 = ((var_8 ? ((var_12 ? ((var_8 ? var_8 : var_15)) : (((var_16 ? var_11 : var_13))))) : ((((((var_2 ? var_11 : var_10))) ? ((max(var_2, var_3))) : ((var_14 ? var_15 : var_9)))))));
    #pragma endscop
}
