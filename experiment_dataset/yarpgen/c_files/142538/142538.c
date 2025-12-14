/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_11;
                                arr_16 [4] [i_1] [i_1] [i_1] [i_1] = 44283;
                                var_14 = ((+(((arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 2]) << (((arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 2]) - 67))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = min(var_6, var_5);
    #pragma endscop
}
