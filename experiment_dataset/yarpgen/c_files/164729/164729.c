/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) - (((arr_1 [i_0]) - (arr_1 [i_0]))));
                var_16 = (((((arr_0 [i_1]) ? ((0 ? (arr_4 [i_0] [i_0]) : var_6)) : (((63 ? 262143 : 63))))) + (((+((91 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
                var_17 = (((((((arr_1 [i_0]) | (arr_4 [i_1] [i_0])))) ? var_10 : ((min((arr_1 [i_0]), (arr_0 [i_1])))))));
                var_18 = (arr_3 [i_0] [i_0] [1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_2] [i_3] [i_4 - 1] = 0;

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_3] = ((((64 ? 0 : -85)) & ((~(-32767 - 1)))));
                        arr_20 [i_3] [i_3] [i_3] [i_3] [14] [i_2] = (((!0) ? ((max((arr_12 [i_4 - 1] [i_3] [i_3 - 1]), (arr_12 [i_4 - 1] [i_3] [i_3 - 1])))) : (arr_9 [i_4])));
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_19 = (((arr_13 [i_3 - 1] [i_3] [i_6] [i_6 + 2]) * (((min(4883, 193))))));
                        var_20 = ((!(((-4893 ^ (arr_12 [i_6] [i_3] [i_3 - 1]))))));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_21 = (arr_21 [0] [i_4] [i_7 - 1]);

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_22 = ((arr_21 [i_4 + 1] [i_4] [i_7 - 1]) / (min((arr_21 [i_4 - 1] [i_7 - 1] [i_7 - 2]), (arr_21 [i_4 - 1] [12] [i_7 + 1]))));
                            var_23 = (arr_12 [i_2] [i_3] [i_7]);
                        }
                        for (int i_9 = 4; i_9 < 16;i_9 += 1)
                        {
                            arr_32 [i_2] [i_2] [13] [i_4] [i_3] [3] = (((!((min((arr_8 [i_4]), 0))))));
                            arr_33 [i_2] [i_3] [i_4] [i_7] [i_9] [i_4] = (!var_5);
                            arr_34 [i_3] [7] [i_3] [i_3] = (!((((var_1 ^ -4893) ? (arr_26 [i_3] [i_7] [i_4] [i_3] [i_3]) : (~-92)))));
                            arr_35 [i_9] [i_3] [1] [i_3] [i_2] = ((var_7 + (max((var_3 || var_7), 10483469355161383191))));
                        }
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            var_24 = (min((max(53372, 3255037165386831394)), ((((!61) ? (arr_12 [i_2] [i_3] [i_2]) : ((max(123, 14))))))));
                            var_25 = (min(((max(var_4, (arr_31 [i_4 + 1] [i_3] [1] [i_3] [i_2])))), (max((-9223372036854775807 - 1), 10483469355161383191))));
                            arr_38 [i_3] [i_3 - 1] [i_4 + 1] [i_3 - 1] [4] = var_13;
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_41 [i_3] = (arr_18 [i_3 + 1] [i_7 + 1] [i_4 + 1] [i_7 - 1]);
                            var_26 = ((-(arr_11 [12] [i_7] [i_2])));
                            arr_42 [i_3] [i_7 - 1] [i_4 - 1] [i_3 - 1] [i_3] = var_2;
                            var_27 = (arr_22 [i_7 - 1] [i_3 - 1]);
                            arr_43 [i_3] [i_7] = var_5;
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 13;i_12 += 1)
                        {
                            var_28 = ((var_1 ? 234 : ((7364 ^ (arr_29 [8] [i_3] [8] [i_7 - 1] [i_12] [i_3] [i_3 - 1])))));
                            var_29 = (arr_13 [i_4] [i_3] [i_12 - 2] [i_12 + 4]);
                            var_30 = ((63 ? (((-4893 | (arr_16 [i_2] [i_2] [i_4 - 1] [i_7])))) : (arr_22 [i_2] [i_3])));
                            var_31 = (((((var_7 == (arr_39 [i_2] [i_3 + 1] [i_4] [i_4] [i_7] [i_12 + 1])))) >> ((53362 >> (((arr_28 [9] [i_3] [13] [i_3] [i_7 - 1] [i_12 - 2]) - 36449))))));
                        }
                        arr_47 [i_7 - 1] [i_3] [i_4] [1] [i_3] [i_2] = var_12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
