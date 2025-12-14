/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = (~var_8);
        var_15 = (max(var_15, var_2));
        var_16 = (min(var_16, (((-((192 ? 192 : var_4)))))));
        var_17 = (min(var_17, ((((var_6 ? var_6 : var_10))))));
        var_18 &= var_3;
    }
    var_19 = (~var_10);
    #pragma endscop
}
