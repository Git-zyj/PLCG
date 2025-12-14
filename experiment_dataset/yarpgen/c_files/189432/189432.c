/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_19 ^= (arr_0 [i_0]);
        var_20 -= ((-var_13 ? (arr_0 [i_0 - 1]) : var_9));
        var_21 = (var_7 ? (arr_1 [1] [i_0]) : (0 % -3455168019943772487));
    }
    var_22 = ((var_3 ? (max((var_5 / var_13), var_5)) : -var_15));
    var_23 = (11938211504000012275 ? ((((var_10 ? var_15 : 1)) % var_2)) : var_7);
    var_24 = var_17;
    #pragma endscop
}
