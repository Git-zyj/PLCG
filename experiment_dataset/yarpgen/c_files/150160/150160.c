/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 >> (var_11 - 2579472029)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((var_4 | ((194 ? -26816 : 26816))));
        var_14 = var_10;
    }
    #pragma endscop
}
