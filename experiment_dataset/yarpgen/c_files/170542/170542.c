/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, 1958829513));
        var_16 = (~7527535404604840844);
    }
    var_17 = var_9;
    #pragma endscop
}
