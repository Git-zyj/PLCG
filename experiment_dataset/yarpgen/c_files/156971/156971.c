/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((((var_4 & var_14) ? var_8 : var_5)), var_7);
    var_16 = (max((((127 ? 127 : var_1))), ((var_6 ? ((var_5 ? var_11 : var_13)) : (var_8 && var_1)))));
    var_17 = (~((((min(2147483647, var_14))) ? (185 || var_10) : var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = ((2147483647 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_19 = ((var_8 | (arr_1 [i_0])));
    }
    #pragma endscop
}
