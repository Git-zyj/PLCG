/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 24347;
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 *= ((-(arr_6 [i_2 - 1] [i_4 + 1] [i_1 - 1] [8])));
                                var_23 = (max(var_23, var_12));
                                arr_12 [i_2] [i_2] [14] [i_3] [i_4] [i_4] [10] = 960;
                                var_24 = var_18;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_25 = var_16;
                        arr_17 [i_2] [i_1] [i_0] [i_5] [8] = max((arr_6 [i_0] [i_1] [i_2] [i_2]), 128);
                        var_26 = ((min(var_1, (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2]))));
                    }
                }
            }
        }
    }
    var_27 = ((var_5 / (max((((var_9 ? var_19 : var_4))), (~var_6)))));
    #pragma endscop
}
