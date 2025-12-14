/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 &= var_11;
                var_21 = (max(var_21, var_6));
            }
        }
    }
    var_22 &= var_1;
    var_23 -= (var_4 ? ((var_17 | (var_2 && var_16))) : var_9);
    var_24 = var_8;
    #pragma endscop
}
