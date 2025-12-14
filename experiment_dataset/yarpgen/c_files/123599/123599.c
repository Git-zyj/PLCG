/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = ((!(arr_1 [i_0 - 1])));
        var_16 = arr_1 [i_0 + 2];
    }
    var_17 |= ((153 - (var_11 & 103)));
    #pragma endscop
}
