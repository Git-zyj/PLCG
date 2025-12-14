/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((var_8 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 ^= var_7;
                        var_16 = (min(var_16, 0));
                        var_17 = ((-((59183 ? var_2 : 1))));
                        var_18 = (((arr_13 [i_3] [i_3] [i_3 - 1] [i_3]) ? (arr_13 [i_3] [i_3] [i_3 - 1] [i_2]) : (arr_13 [i_3] [i_3] [i_3 + 2] [i_1])));
                        var_19 = (min(var_19, (((!(arr_10 [i_1] [i_2] [i_1]))))));
                    }
                }
            }
        }
        var_20 = (max(var_20, var_13));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_8] [i_7] [i_6] [i_5] [i_1] [i_1] = (((var_11 ? -121 : (arr_17 [i_1]))));
                                arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] [i_8] |= (((arr_21 [i_1] [i_5] [i_6 - 1]) ? (arr_21 [i_1] [i_5] [i_6 + 2]) : (arr_21 [i_1] [i_5] [i_6 - 1])));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_21 = (((arr_13 [i_6 + 2] [i_6] [i_6 + 2] [i_6]) ? 0 : (arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                        arr_34 [i_1] [i_5] [i_6] [i_1] = (((((arr_9 [i_5] [i_1]) << (((arr_12 [i_1] [i_6] [i_6]) - 1920303519700389008)))) << (((((arr_33 [i_1] [i_5] [i_6] [i_6] [i_9]) - (arr_27 [i_1] [i_5] [i_6] [i_9] [i_5]))) - 1473130976))));
                        var_22 |= ((arr_32 [i_5] [i_6]) ? -var_7 : 3838506931446025575);
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_23 *= (arr_28 [i_1] [i_1] [i_6] [i_6 + 1] [i_5]);

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_24 ^= ((-(arr_39 [i_6 + 1] [i_1] [i_1])));
                            var_25 -= -0;
                            arr_42 [i_6] [i_5] [i_11] [i_6] = (arr_10 [i_1] [i_1] [i_1]);
                        }
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_45 [i_12] [i_6] [i_5] [i_1] [i_1] = -112250850;
                        var_26 *= (((arr_28 [i_5] [i_5] [i_6] [i_6] [i_5]) ? 1 : 12049));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            {
                                arr_50 [i_1] [i_5] [i_6] [i_13] [i_13] [i_14] = (((arr_40 [i_14] [i_13] [i_5]) + var_0));
                                var_27 ^= (var_0 ? (arr_27 [i_14] [i_14] [i_14] [i_14 + 2] [i_14 + 1]) : 2969637608);
                                arr_51 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((var_11 ? (!var_13) : (((arr_11 [i_13] [i_14] [i_6] [i_14]) ? 1 : (arr_48 [i_5] [i_5])))));
                            }
                        }
                    }
                    var_28 = (max(var_28, (((((arr_35 [i_1] [i_5] [i_5] [i_1] [i_1] [i_5]) - (arr_15 [i_6] [i_6])))))));
                }
            }
        }
        arr_52 [i_1] = var_8;
    }
    var_29 = (min(var_2, (!1)));
    #pragma endscop
}
