/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (~0);
                    var_15 = (max((((arr_3 [i_2] [i_0] [i_0]) ? (min(-8446561323324313040, 1)) : (1 < 1))), (((((min((arr_6 [i_0]), 1152921496016912384))) ? 255 : (!61756))))));
                }
            }
        }
    }
    var_16 ^= -1152921496016912384;
    #pragma endscop
}
