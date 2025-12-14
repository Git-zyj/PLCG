/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = -31923;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 96;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = ((!(((arr_7 [i_2] [i_1] [i_2]) || 159))));
                            var_16 = ((161 + (min(((min(var_3, 160))), (32767 + var_7)))));
                            var_17 *= ((-(min(var_4, (((arr_8 [i_0] [i_1] [1]) - var_4))))));
                            var_18 *= (!77);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
