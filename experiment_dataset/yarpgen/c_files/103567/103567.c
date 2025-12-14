/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((((((-(max((arr_1 [i_0]), 32767)))) + 2147483647)) >> (var_0 - 14024)));
        var_16 = (max(var_16, var_5));
    }
    var_17 += var_14;
    var_18 ^= var_9;
    #pragma endscop
}
