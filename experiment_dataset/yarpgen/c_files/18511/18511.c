/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~(var_10 ^ -4983779782415846622));
        var_20 = var_4;
    }
    var_21 = (max(var_15, 1214551608));
    #pragma endscop
}
