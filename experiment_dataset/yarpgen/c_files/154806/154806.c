/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_15 ? var_5 : var_10)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(9417025888122618675, 65535));
        var_18 = (max(((((arr_0 [15] [16]) == ((222 ? 0 : var_1))))), 191));
    }
    #pragma endscop
}
