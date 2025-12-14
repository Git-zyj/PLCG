/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = max((((arr_8 [i_0 - 1] [i_0 - 1] [i_4 + 1]) - (arr_5 [i_0 + 1] [i_0 - 1]))), (arr_8 [15] [i_0 - 1] [i_4 + 1]));
                                arr_13 [i_2] [i_1] = (((max(-1535024762, (min(var_12, 1535024772))))) ? (arr_12 [i_1] [i_3] [i_2] [16] [i_1]) : ((((arr_3 [i_0 - 3]) || var_13))));
                                arr_14 [i_1] = -1573640940;
                                arr_15 [i_2] [i_3 + 1] [i_1] = -1461016597;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_1] = (~((max(var_1, var_4))));
                                arr_22 [i_1] [i_1] [i_2] [i_1] = (var_10 ? var_2 : (((((var_15 ? var_14 : var_8)) != (arr_1 [i_0 - 3] [i_0 - 1])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_17 = var_14;
                        arr_25 [9] [1] [i_2] [16] [i_1] = -1;
                    }
                    var_18 = (max(var_18, var_0));
                }
            }
        }
    }
    var_19 = var_12;
    var_20 = (var_13 / (~var_2));
    var_21 = (((max((!1535024764), var_5))) ? (-2141190367 - var_2) : ((var_11 - (-81832223 - var_10))));
    #pragma endscop
}
