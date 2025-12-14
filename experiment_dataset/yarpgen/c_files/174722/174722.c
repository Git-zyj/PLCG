/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 -= -1;
                                var_16 *= (((172 ? (arr_3 [i_4] [i_3 + 1] [i_4]) : (arr_3 [i_4] [i_3 + 1] [i_4]))));
                                var_17 |= (max(0, (max(1099511627775, (arr_5 [i_2 - 4] [i_2] [i_2])))));
                                var_18 ^= ((((arr_9 [i_4] [i_0]) ? var_8 : (425231233 > 1))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_19 -= var_9;
                        var_20 -= (max(0, (((arr_6 [i_5] [i_5] [i_5 - 1] [i_5 + 1]) ? (min(var_5, var_4)) : (((1802519583 ? 1 : 1)))))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_21 = (min(var_21, (arr_4 [i_1] [i_1] [i_2])));
                        var_22 *= (min((arr_8 [i_1] [i_2] [i_2] [i_1]), (((arr_13 [i_2 - 2] [i_6] [i_2 - 2] [i_6] [i_0]) ? var_10 : (arr_8 [i_6] [i_6] [i_6] [i_1])))));
                    }
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        var_23 = var_14;
                        var_24 -= (~1);
                        var_25 *= var_7;
                        var_26 = (max(var_26, ((max(((((!834109334) >= (min((arr_20 [i_2] [i_2] [i_1] [i_1] [i_0]), 1783648746422767888))))), (max((arr_16 [i_7 - 1] [i_7 + 1] [i_7] [i_7]), ((max((arr_6 [i_7] [i_2] [i_1] [i_0]), 228))))))))));
                    }
                }
            }
        }
    }
    var_27 *= (min(((max(var_3, var_6))), var_11));
    #pragma endscop
}
