/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_1;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 = ((((min((arr_11 [i_0] [i_1] [i_1] [i_2] [i_3]), (arr_8 [i_0] [i_1])))) & (~var_0)));
                        arr_12 [i_0] [i_1] [i_0] = (((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 + 4]) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2]))) : ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 4]))))));
                        var_15 = (min(var_15, ((((max(var_3, (arr_8 [i_3] [i_0 - 1]))) * (((arr_8 [i_3] [i_0 + 4]) * (arr_8 [i_3] [i_0 + 2]))))))));
                        var_16 = (min((arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 3] [i_0 + 1] [i_0 + 2]), (((96 <= (arr_10 [i_0 + 3] [i_0 - 1] [i_0 + 4] [i_0] [i_0] [i_0 + 3]))))));
                        var_17 = min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0]));
                    }
                    for (int i_4 = 3; i_4 < 7;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((228 ? 228 : 12));
                        arr_17 [i_0] [i_0] [i_2] [i_4] [i_1] = 22;
                        arr_18 [i_0 + 2] [i_0] [i_0] [i_2] [i_4] = (((((arr_13 [i_4 - 1] [i_4 - 2] [i_0 + 4] [i_0 + 1]) ^ 0))) ? (((arr_13 [i_4 + 1] [i_4 - 3] [i_0 + 1] [i_0 + 3]) ^ 0)) : (((arr_13 [i_4 + 3] [i_4 - 2] [i_0 + 3] [i_0 - 1]) ? (arr_11 [i_0 + 3] [i_0 - 1] [i_4 - 1] [i_4] [i_1]) : var_6)));
                        arr_19 [i_0] = (var_8 / (((((arr_11 [i_4 - 2] [i_4 - 3] [i_0 + 2] [i_0] [i_0]) || var_10)))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_5]);
                        arr_23 [i_0] = ((((((!(arr_7 [i_0] [i_0] [i_0 + 2] [i_0]))))) % var_10));
                    }
                    arr_24 [i_0] [i_0] [i_0] = ((var_1 ? (!1) : 1));
                    var_18 += (min(-var_13, -32768));
                }
                var_19 = ((var_1 ? ((min((arr_11 [i_0 + 4] [i_0 + 3] [i_0 + 4] [i_0 + 2] [i_0 + 4]), 3))) : 0));

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_20 += ((-32766 - 0) ? (arr_3 [i_0 - 1]) : (min((arr_3 [i_0 - 1]), var_4)));
                    arr_28 [i_0] [i_1] [i_0] = 26;
                    var_21 = (max(((min((arr_25 [i_0 + 3] [i_0] [i_6] [i_0]), (max(4, var_2))))), (min(((min(var_0, var_12))), (arr_27 [i_0] [i_0] [i_1] [i_6])))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_22 = ((var_10 ? var_12 : 28));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_34 [i_0 + 2] [i_0] [i_0] = ((((min(244, 14))) ? (max((max(var_10, 101)), var_2)) : (((~(arr_8 [i_0] [i_0 + 2]))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            var_23 = (max(var_23, ((-((((arr_8 [i_8] [i_9 - 1]) >= var_0)))))));
                            arr_38 [i_0] [i_7] [i_0] = (((arr_31 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 2] [i_0]) & (arr_31 [i_9] [i_7] [i_7] [i_1] [i_0 - 1])));
                            var_24 = var_8;
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 7;i_10 += 1)
                        {
                            var_25 *= (arr_15 [i_0 + 2] [i_1] [i_8] [i_8] [i_10 - 1]);
                            arr_42 [i_8] &= (((var_12 ? var_6 : 22)));
                            arr_43 [i_10] [i_8] [i_0] [i_7] [i_0] [i_1] [i_0] = ((1792 ? var_3 : (arr_36 [i_8] [i_7] [i_7] [i_0] [i_8] [i_0] [i_1])));
                        }
                        var_26 = (((((arr_14 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]) ^ 32768)) * (arr_14 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 - 1])));
                        arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = (((min((arr_26 [i_0] [i_0]), 1))) ? ((((((arr_25 [i_0 + 4] [i_1] [i_7] [i_0]) / var_1))))) : (!var_1));
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_47 [i_0] [i_0] [i_0] [i_11] = (((arr_30 [i_0 + 4] [i_0 + 3] [i_11]) == (arr_30 [i_0 - 1] [i_0 + 1] [i_11])));
                    arr_48 [i_11] [i_0] [i_0] = ((11 ? (arr_33 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0 + 4]) : var_12));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    arr_52 [i_0] [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_27 = var_4;
                                var_28 ^= ((var_8 && ((min(0, ((~(arr_41 [i_14] [i_13 - 1] [i_12] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    var_29 += ((((var_11 ? (arr_6 [i_0 + 3] [i_0] [i_0] [i_0 + 1]) : 26)) - (arr_20 [i_0 + 2] [6] [i_0])));
                }
            }
        }
    }
    var_30 = 228;
    #pragma endscop
}
