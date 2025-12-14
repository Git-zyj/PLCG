/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_16 -= (arr_0 [3]);
        var_17 = ((-(((45866 || 57731) | (((arr_3 [6]) ? var_3 : 57731))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 ^= arr_5 [i_2];
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [0] [12] [14] [12] [i_5] [2] |= ((-((var_15 ? var_0 : var_7))));
                                var_19 += ((~((((7810 ? 57731 : var_7)) % (arr_13 [i_2] [14] [8] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
