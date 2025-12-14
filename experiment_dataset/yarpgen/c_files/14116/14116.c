/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 *= var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 *= (var_5 - var_0);
                                var_15 -= ((((min(var_4, (arr_12 [12] [10] [i_4] [10] [i_4 + 2])))) != (max((arr_12 [i_4] [16] [8] [16] [i_4 + 2]), var_6))));
                                arr_13 [15] [i_1] [6] [i_3] [i_0] [i_3] = var_5;
                                var_16 = (arr_5 [i_0] [14]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
