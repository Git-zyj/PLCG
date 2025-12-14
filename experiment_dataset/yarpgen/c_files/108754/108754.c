/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4840956793974242238;
    var_16 = var_3;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [i_0] [i_0 + 2] = 1;
                var_18 = 72057594037927935;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 -= 92;
                                var_20 = (min(var_20, 7));
                                var_21 = 534768879483919751;
                                arr_14 [1] [i_1 + 1] [i_2] [i_3] [i_1 - 2] = 10658220381271760202;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
