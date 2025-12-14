/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (var_17 && var_4);
        var_19 = 22509;
        arr_5 [i_0] = var_12;
    }
    var_20 = ((((var_14 ? var_5 : (var_15 ^ var_11))) & (((~(~var_8))))));
    #pragma endscop
}
