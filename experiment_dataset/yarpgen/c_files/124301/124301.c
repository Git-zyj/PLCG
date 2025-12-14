/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = max(((((((!(arr_5 [i_0] [i_1]))))) ^ (arr_8 [i_0] [i_1] [i_1] [i_0] [1]))), (((+((((arr_3 [i_1]) < (arr_0 [i_4]))))))));
                                arr_12 [i_2] [i_1] [i_4] = ((~(max((min((arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 2] [i_0] [i_0 + 2]), (arr_3 [i_0 + 2]))), (!-22524)))));
                                var_11 = (((~((~(-9223372036854775807 - 1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_12 *= ((!((max((arr_16 [i_0] [i_1] [i_2] [i_6] [i_6] [i_5] [i_6]), 9223372036854775807)))));
                                arr_17 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0 - 1] = -17355;
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_6] [i_6]);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_22 [i_0 - 3] [i_1] [i_0] [i_7] [i_7] = (arr_0 [i_0]);
                        var_13 = (max(var_13, ((max(7359878752446878874, ((((~(arr_2 [i_1]))))))))));
                        arr_23 [8] [i_1] [6] |= 8746451237808789650;
                        arr_24 [i_1] [i_1] [i_1] [i_1] = (arr_1 [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_14 = ((-(arr_11 [i_0] [i_0] [9] [i_1] [i_2] [i_8])));
                        var_15 = (((((-(arr_7 [i_1] [11] [11] [i_1])))) > ((((!(((-(arr_25 [i_0 + 2]))))))))));
                        var_16 = (min(var_16, ((((arr_19 [i_8] [i_1] [i_1] [i_0]) << (((!(arr_9 [i_0 - 1] [2])))))))));
                        var_17 = (min(var_17, (arr_16 [i_1] [i_1] [i_2] [14] [i_2] [i_8] [i_8])));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (~var_5)));
    var_19 = 11086865321262672742;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_20 = (arr_8 [i_9] [1] [i_11] [1] [i_11]);
                    var_21 = (max((((!((min((arr_26 [i_9] [12]), 1)))))), 91));
                    var_22 *= (((arr_29 [i_9] [1]) >= (((((~18446744073709551615) && (arr_35 [i_9] [7] [i_9])))))));
                }
            }
        }
    }
    #pragma endscop
}
