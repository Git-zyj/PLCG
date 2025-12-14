/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = var_5;
                                var_12 = (arr_10 [i_3] [i_4 + 1]);
                            }
                        }
                    }
                }
                var_13 = (arr_10 [i_1] [i_0]);
            }
        }
    }
    var_14 = var_8;
    var_15 = (var_10 ? (((var_5 ? var_9 : var_4))) : var_1);
    #pragma endscop
}
