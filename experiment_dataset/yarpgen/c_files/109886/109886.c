/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (max(var_14, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_15 = (min(var_15, var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 2] [i_1 - 1] [i_2] [1] [i_2] = var_3;
                                arr_13 [i_4] [1] [i_2] [i_1] [i_4] = (((arr_11 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_2 + 3] [i_2] [i_4] [i_4]) + (arr_11 [i_0 + 2] [i_1 + 1] [1] [i_2 + 3] [i_3] [17] [i_3])));
                                var_16 = (max(var_16, (arr_3 [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 ^= ((arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) | (arr_17 [i_6] [i_1 - 1] [i_2]));
                                var_18 = (max(var_18, (arr_0 [i_2] [i_2])));
                                var_19 = 0;
                            }
                        }
                    }
                    var_20 = (arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_2] [i_2]);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_21 = (((!var_7) == var_5));
                    var_22 = (max((arr_18 [i_0 + 1] [i_0] [i_0 + 1]), (var_0 / var_0)));
                    var_23 ^= ((-((min((arr_4 [i_0] [i_0] [i_0]), var_8)))));
                    var_24 = var_9;
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_25 = ((-((-(arr_9 [i_0 + 2] [i_0 + 2] [i_1] [10] [i_1 + 2])))));

                    for (int i_9 = 4; i_9 < 15;i_9 += 1)
                    {
                        var_26 = var_12;
                        arr_24 [i_9 - 2] = ((~(arr_16 [14] [14] [i_8] [i_1] [14] [14])));
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        var_27 = (max(var_27, (arr_8 [i_10] [i_10 - 2] [2] [i_10] [i_10])));
                        var_28 = -var_12;
                    }
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        arr_29 [15] = var_11;
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((-(arr_0 [i_1 + 1] [i_1])));
                        var_29 = (arr_3 [i_0 + 1]);
                        var_30 = (max((min((arr_8 [0] [i_1] [i_8] [i_0 - 1] [4]), var_0)), (arr_11 [i_1 - 1] [i_1 - 1] [i_11 - 1] [1] [i_11] [i_11 - 2] [i_11 - 3])));
                    }
                    var_31 = var_6;
                    var_32 = (min((max((arr_6 [10] [i_1 + 1] [i_8] [0]), (arr_4 [i_0] [i_1 + 2] [i_8]))), ((max((arr_4 [i_0 + 2] [i_1 + 2] [3]), (arr_15 [i_8] [i_8] [i_1 + 2] [i_1] [i_1 - 1] [i_0 - 1]))))));
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    var_33 = var_10;
                    arr_33 [i_12] = ((!((max((arr_22 [0] [0] [i_12]), var_7)))));
                }
                var_34 = (arr_5 [1] [1] [i_1 + 2]);
            }
        }
    }
    #pragma endscop
}
