/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= 61888;
                var_13 = (max(var_13, 6586278589800746681));
            }
        }
    }
    var_14 = -4815720399627100681;
    var_15 = var_4;
    var_16 = var_3;
    #pragma endscop
}
