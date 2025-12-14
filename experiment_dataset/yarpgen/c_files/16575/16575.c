/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = 27906;
                    var_20 ^= 936197352;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((((max(37642, (arr_1 [i_0] [i_1]))))) % var_13);
                                var_22 -= (~-1);
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_23 = ((!((((arr_7 [i_0 + 2] [i_0] [6] [i_0] [i_0 + 2] [i_0]) ? var_15 : var_2)))));
                        var_24 = (min(var_24, 57));
                        arr_17 [10] [i_0] [i_0] [i_5] [i_5] = (((((max(20222, var_9))) ? 5803 : var_7)));
                        arr_18 [i_0] [i_1] [1] [10] |= 936197352;
                    }
                    var_25 = (~(max((arr_2 [i_0]), ((1 << (1844927944 - 1844927914))))));
                }
            }
        }
    }
    #pragma endscop
}
