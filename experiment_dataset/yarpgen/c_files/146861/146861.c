/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((((arr_3 [i_1 + 1] [4]) / (arr_3 [i_1 - 2] [2]))) / (((max(var_7, 87))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [3] [i_2] [24] [i_4] = ((((((arr_6 [i_2 + 2]) ? var_3 : (arr_6 [i_2 + 1])))) ? ((max((arr_6 [i_2 - 1]), (arr_5 [i_0 + 1] [i_2 - 1])))) : ((16323253861508803225 ^ (arr_5 [i_0 + 2] [i_2 + 1])))));
                                var_16 = (arr_11 [i_1] [i_1] [i_1] [i_1] [10] [i_1] [21]);
                            }
                        }
                    }
                    var_17 = (min(var_12, (((var_4 | -27) | 1))));
                }
            }
        }
    }
    var_18 = var_10;
    var_19 += var_0;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_23 [6] [i_6] [i_6] = 6708562325127628283;
                arr_24 [2] [i_6] [i_6] = var_9;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_20 = ((-82 / (max((var_4 & var_13), var_11))));
                            var_21 = -6708562325127628297;
                            arr_33 [i_8] [i_6] [i_8] = 10461;
                        }
                    }
                }
                var_22 *= ((0 >> ((((max(10470, (min(var_7, -28302))))) - 10450))));
                arr_34 [i_5] = (((-127 - 1) ? 0 : ((49 & (arr_6 [i_6])))));
            }
        }
    }
    #pragma endscop
}
