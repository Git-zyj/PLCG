/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((-((var_15 ? (arr_0 [i_4]) : (arr_0 [i_0])))));
                                var_20 = (max(((max((arr_3 [i_0]), var_4))), ((~(arr_2 [i_4])))));
                                arr_15 [i_2] [i_1] [i_2 + 3] [i_3] [i_4] = (max((((arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_2]) ? (arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_2]) : (arr_13 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_2]))), (max(1, ((1 ? -448023005 : 1))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 = (min((((arr_5 [i_5] [i_1] [i_0]) ? var_15 : (arr_8 [i_0] [i_1] [i_5]))), (arr_0 [i_0])));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_7] [i_6] [i_5] = (((((max(var_5, (arr_18 [i_0] [i_1] [i_5]))) ? (~var_12) : (arr_19 [i_0] [i_0] [i_0] [i_0])))));
                            var_22 = ((var_17 ? (((((var_17 ? (arr_11 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7]) : var_7))) ? (arr_9 [i_0] [i_1] [i_6] [i_6]) : (max(var_14, (arr_4 [i_1] [i_5] [i_7]))))) : ((((!((max(var_17, (arr_12 [i_7] [i_6] [i_0]))))))))));
                            var_23 *= (((arr_8 [i_0] [i_1] [i_5]) ? var_15 : (arr_21 [i_0] [i_1] [i_5] [i_6])));
                        }
                        arr_24 [i_6] [i_1] [i_5] [i_6] = (((var_11 + var_10) ? var_7 : (((((((arr_2 [i_6]) ? var_6 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? var_14 : ((max(var_15, (arr_5 [i_1] [i_5] [i_6])))))))));
                        arr_25 [i_0] [i_1] [i_5] [i_6] = ((((max((max(var_14, (arr_7 [i_0] [i_6] [i_5]))), (arr_8 [i_6] [i_5] [i_6])))) ? (((!((max(var_10, (arr_19 [i_6] [i_5] [i_1] [i_0]))))))) : ((max((arr_13 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]))))));
                        var_24 = (min((((((((arr_4 [i_0] [i_0] [i_0]) ? var_0 : (arr_5 [i_0] [i_1] [i_5])))) ? 1 : (max(7852, 3317940911))))), (max((arr_20 [i_6] [i_5] [i_1] [i_0]), (arr_18 [i_6] [i_1] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_30 [i_0] = (arr_18 [i_0] [i_1] [i_8]);
                        var_25 = (arr_29 [i_1]);
                        var_26 *= (arr_7 [i_0] [i_8] [i_8]);
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_5] [i_9] [i_10] = (((~(arr_31 [i_10] [i_9] [i_5] [i_1]))));
                            arr_37 [i_0] [i_1] [i_5] [i_9] [i_10] = (((((arr_29 [i_0]) ? ((max(var_16, (arr_27 [i_10] [i_9 - 1] [i_1] [i_0])))) : var_6)) + var_8));
                            arr_38 [i_0] [i_0] [i_0] = ((((max((arr_33 [i_0] [i_1] [i_9 - 1] [i_10]), (arr_22 [i_10] [i_0] [i_0] [i_0])))) ? (min((arr_3 [i_0]), var_12)) : (((max((arr_22 [i_0] [i_1] [i_10] [i_9 - 1]), var_13))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_41 [i_0] [i_1] [i_5] [i_9 + 1] [i_11] = (arr_31 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]);
                            arr_42 [i_0] [i_1] [i_5] [i_5] [i_9 - 1] [i_11] = (((arr_34 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) ? var_3 : (arr_34 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 2] [i_9])));
                            var_27 = (min(var_27, (((var_19 ? var_15 : (arr_3 [i_9 - 1]))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_31 [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]) / (arr_31 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                        }
                        arr_44 [i_9 + 1] [i_5] [i_1] &= ((min((arr_19 [i_0] [i_1] [i_5] [i_9 + 2]), (arr_19 [i_0] [i_1] [i_5] [i_9 - 1]))));
                        var_28 += (arr_33 [i_0] [i_1] [i_5] [i_9 + 2]);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_50 [i_0] [i_1] [i_5] [i_12 - 1] [i_13] = (1 <= 12608);
                                var_29 = (max((arr_48 [i_13 - 1]), var_1));
                                var_30 &= (max(((-var_3 ? ((var_19 ? var_19 : (arr_8 [i_12] [i_1] [i_5]))) : (((!(arr_48 [i_0])))))), (((!(!var_14))))));
                                arr_51 [i_0] [i_1] [i_5] = ((var_19 ? (arr_2 [i_13 - 1]) : (max((max(var_17, var_9)), ((min((arr_13 [i_0] [i_1] [i_5] [i_12 - 2] [i_13 - 1] [i_12]), (arr_32 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = ((var_19 ? var_9 : var_13));
    #pragma endscop
}
