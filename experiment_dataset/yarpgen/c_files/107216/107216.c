/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_9;
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = var_7;
                    var_14 = (arr_7 [i_0] [i_0] [i_0] [i_2 - 1]);
                    arr_10 [i_0] [i_0] [i_2] = var_8;
                }
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] = ((0 ? 1 : 5855));
                        arr_20 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3] [i_0] = 0;
                        var_15 = min(((-5831 * (arr_13 [i_0] [i_0] [i_0] [i_4]))), (arr_13 [i_0] [i_1 + 1] [i_3] [i_4]));
                        arr_21 [i_0] = -var_9;
                        arr_22 [i_0] [i_1] [i_0] [i_4] = var_2;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_26 [i_0] [i_0] = (arr_3 [i_3 + 1]);
                        var_16 = (arr_13 [i_0] [i_1] [i_5] [9]);
                        var_17 -= ((-5831 ? ((-5831 ? 0 : (arr_5 [i_0 + 2] [i_1 + 1] [i_3 - 1]))) : (((var_2 - (arr_17 [2] [i_3] [i_1] [2]))))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_31 [i_0 + 2] [i_1] [i_0] [i_6] [i_3] = ((var_3 & ((((arr_13 [i_0 + 1] [i_1] [i_3 - 3] [i_6]) != var_9)))));
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] = ((9223372036854775807 ? 0 : 1));
                        var_18 = (min(var_18, var_8));
                    }
                    var_19 = (((arr_29 [i_3 - 2]) ? -5855 : (max((arr_18 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1]), (arr_18 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_20 = (arr_37 [i_0] [i_1]);
                                arr_38 [i_0] [i_0] = ((-5831 ? 1 : -115));
                                var_21 = (min(var_21, (arr_28 [14] [i_3] [i_1])));
                                var_22 = var_4;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_23 *= (arr_37 [i_1] [i_1 - 1]);
                    var_24 = 779304679;
                    arr_41 [i_0] = (arr_6 [i_0]);
                }
                var_25 = var_1;
            }
        }
    }
    #pragma endscop
}
