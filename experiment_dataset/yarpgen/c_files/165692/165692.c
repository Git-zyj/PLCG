/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((((var_2 ? var_9 : var_2)) >> (((var_7 & -1945025785) - 201343236)))) & (max((min(3839807442, 31721)), (var_5 | var_0))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((arr_1 [i_0] [i_0]) < (arr_0 [i_0] [i_0])))), 31));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = ((!(((~(arr_3 [i_0] [i_1] [0]))))));
            arr_6 [8] [i_1] |= ((~((((arr_3 [i_0] [i_1] [i_1]) || (arr_3 [i_0] [i_0] [i_0]))))));
            var_21 = ((var_9 ? ((((max(-1945025756, (arr_0 [i_1] [i_1])))) ? (arr_4 [i_1]) : (max(var_13, (arr_1 [0] [i_1]))))) : ((max((arr_5 [i_0]), (((arr_4 [i_1]) / var_15)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = (arr_4 [i_3 - 2]);
                        arr_13 [i_1] = ((((((max(-1061588969, -1945025763))) >= (arr_4 [i_1]))) ? 1945025740 : 1));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] = (arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_1]);
                            var_22 = ((((arr_1 [i_3 - 4] [i_3]) | (arr_1 [i_3 - 2] [i_3]))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_1] [i_1] = (min(((((min(-1731988159, -11))) ? (min(var_17, var_17)) : (arr_8 [i_1]))), ((max(((max(-1945025763, 0))), (arr_17 [4] [i_1] [4] [i_5]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_1] = ((var_17 ? ((min(15457, ((1945025729 / (arr_17 [i_1] [i_1] [i_3] [i_5])))))) : ((((min(var_2, (arr_9 [i_2] [i_3] [i_1])))) ? (arr_3 [i_0] [i_1] [i_2]) : (min(var_14, (arr_11 [i_1])))))));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] = ((+(((((arr_10 [i_5] [i_3] [i_1] [i_0]) ? (arr_11 [i_1]) : var_12)) - (arr_18 [i_0] [i_1] [7] [i_2] [i_3 - 3] [i_5])))));
                        }

                        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] = ((((arr_18 [i_6 - 1] [i_3] [i_2] [i_1] [i_0] [i_0]) - -6833624463333530101)));
                            arr_25 [i_0] [i_1] [i_0] [i_0] = (arr_23 [i_6] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]);
                            arr_26 [i_1] [i_1] [i_3] [i_6] = var_3;
                            var_23 = var_1;
                        }
                        for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_24 = (min(((16 ? (~64) : 127)), (((!((min((arr_5 [i_1]), 114))))))));
                            arr_29 [i_1] [i_1] [i_1] [i_3] [i_7] = (((-17445 + 2147483647) << (((arr_5 [i_0]) - 22364))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_25 = ((1 & (arr_5 [i_0])));

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_26 = 13892544261816282212;
                arr_34 [i_0] [i_8] [i_8] [i_8] = (max((((29 != (~-102)))), ((var_13 / ((max((arr_14 [i_0] [i_0] [i_0] [i_8] [i_0] [i_9] [i_8]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]))))))));
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_27 = (arr_15 [i_0] [i_8] [i_11 + 1] [i_8] [i_11 + 3] [i_11]);
                            arr_43 [i_8] [i_8] [i_10] [i_11] = var_4;
                            arr_44 [i_8] [i_8] [i_10] [i_10] [i_8] [i_12] = (((1 || var_7) & (arr_23 [i_12] [i_12] [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 1] [i_8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_49 [i_10] [i_8] |= (!(arr_17 [i_0] [i_10] [i_0] [i_0]));
                            arr_50 [i_0] [i_8] [i_10] [i_8] [i_14] = (((arr_47 [i_0] [i_8] [i_10] [i_13] [i_14] [i_0]) ? var_2 : (arr_47 [i_0] [i_8] [i_10] [i_13] [i_10] [i_8])));
                            var_28 = (((arr_27 [i_8]) ? 1945025756 : (arr_4 [i_14])));
                        }
                    }
                }
                var_29 = ((((~(arr_35 [i_10] [i_10] [i_8] [4]))) - (arr_18 [i_0] [i_0] [i_0] [i_8] [i_8] [i_10])));
            }
        }
    }
    #pragma endscop
}
