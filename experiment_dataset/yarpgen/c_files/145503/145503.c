/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 ^= ((~(672198791909458525 ^ 74)));
        var_11 = var_8;
    }
    var_12 = ((var_3 ? ((((max(1, var_0))) ? var_3 : var_3)) : var_5));
    var_13 -= (var_3 ? var_5 : ((65533 << (133 - 118))));
    #pragma endscop
}
