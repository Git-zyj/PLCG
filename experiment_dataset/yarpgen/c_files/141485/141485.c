/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_5 < var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max((var_2 - var_15), (~var_8)));
                var_18 = (max((max(var_15, var_15)), (!var_13)));
            }
        }
    }
    #pragma endscop
}
