/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(0, 18446744073709551600));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = 65535;
        arr_2 [12] &= (arr_1 [4]);
        var_18 += (arr_0 [22]);
    }
    var_19 += 3641;
    #pragma endscop
}
