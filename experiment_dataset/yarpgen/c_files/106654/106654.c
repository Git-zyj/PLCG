/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_17 = (3045160301 % 1249806994);
    }
    var_18 = ((((max(var_14, var_2))) ? (max(-var_15, (-1787211195 / 728925270))) : var_10));
    var_19 = var_15;
    var_20 = 2639420001;
    #pragma endscop
}
