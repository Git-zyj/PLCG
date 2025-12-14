/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, ((max(((min((min(13568, var_3)), ((max((-127 - 1), (arr_0 [i_0]))))))), ((var_8 ^ (((max(-1, -104)))))))))));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((arr_2 [i_1 + 1] [i_1]) ? 173 : (arr_2 [i_1 - 1] [i_1])));
        arr_5 [i_1] = var_5;
        arr_6 [i_1] [i_1] &= ((-var_5 ? (arr_2 [i_1] [i_1 + 1]) : 0));
        arr_7 [i_1] = (!var_1);
        arr_8 [i_1] = -var_7;
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_11 [7] [i_2] = arr_9 [i_2 + 3];
        var_16 ^= var_4;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 += -108;
                                var_18 = var_1;
                            }
                        }
                    }
                    arr_21 [i_4] [i_2] = (arr_12 [i_2 - 1] [i_2 - 1] [i_4]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_34 [i_7] = (max((min(((min((arr_13 [8] [i_8 - 1] [i_10]), var_10))), var_7)), ((max(var_4, var_11)))));
                                arr_35 [i_2] [i_7] [i_8] [i_9] [i_7] [i_10] = (min(209, (arr_12 [1] [i_7] [i_8])));
                                var_19 = (max((max((arr_32 [i_2] [i_7] [i_7 - 2] [i_10 - 2]), (arr_18 [i_10 - 2] [i_8] [i_8 + 1] [i_7 + 1]))), ((9223372036854775807 ? (((arr_32 [i_2] [i_8] [i_9] [i_10]) ? (arr_28 [i_7] [i_8] [i_9] [3]) : var_2)) : var_0))));
                                var_20 = -103;
                                var_21 = -103;
                            }
                        }
                    }

                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        var_22 = (9187343239835811840 <= 13519125862370127871);
                        arr_38 [i_7] [i_8] [i_8] [i_7 - 2] [i_7] = ((var_2 ? ((((max(-21, 201326592))) ? -890446503695740140 : (4927618211339423766 % 220))) : ((max(((890446503695740140 ? var_12 : 141)), ((max(var_11, (arr_16 [i_7] [i_7] [i_8 - 1] [i_11 - 1])))))))));
                        arr_39 [i_2] [i_7] [i_8] [i_8] = (((((((arr_30 [i_2] [i_11]) << (var_10 + 118))))) ? ((20375 ? 58 : -97)) : (((((-(arr_36 [i_2 - 1] [i_7] [i_8] [i_11]))) < (((min((arr_24 [i_8 - 1]), var_10)))))))));

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_42 [i_2] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] = (arr_19 [i_12] [i_11] [i_7] [i_7] [i_2]);
                            arr_43 [i_7] [i_11] [i_8 - 1] [i_7] [i_7] = (-(arr_36 [i_2 + 4] [i_2] [i_11 + 1] [i_11]));
                            var_23 = (min(47, (arr_13 [i_8 - 1] [i_8 - 1] [i_12])));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_24 = (((!560934087) ? (max(21142136, ((max((arr_30 [i_8] [i_13]), var_10))))) : var_0));
                            arr_46 [i_7] [i_11] = ((3458764513820540928 ? 3994892046 : 890446503695740121));
                            arr_47 [i_7] = (min((arr_45 [i_2] [i_7] [i_7] [i_11] [10]), (((((max(var_11, var_4)))) - (min(var_3, (arr_22 [i_13] [i_13] [i_13])))))));
                            arr_48 [i_2] [i_7] [i_7] [i_11] [i_13] = ((var_12 < (arr_17 [i_13] [i_7 - 2] [i_7 - 2] [i_7 - 2])));
                            arr_49 [i_7] [15] [18] [i_7] [i_13] = ((((((arr_17 [2] [i_8] [i_8] [i_11]) ? (((var_1 && (arr_18 [i_2] [i_2] [i_2] [i_2])))) : (~560934064)))) && (((max((arr_40 [i_7]), (arr_26 [i_7])))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_25 = ((-(((arr_25 [i_7] [i_11] [i_8]) / 1))));
                            arr_54 [i_2] [i_2] [i_8] [i_7] [i_14] = (!96);
                            var_26 = (max(var_26, (((((arr_22 [i_2] [i_7] [i_14]) ? var_10 : var_0))))));
                            var_27 = ((47 ? (((var_3 ? 209 : 247))) : -5391097703415071346));
                        }
                    }
                }
            }
        }
        var_28 = ((+((-(min((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]), var_0))))));
    }
    #pragma endscop
}
