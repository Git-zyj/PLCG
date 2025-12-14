/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (!var_8);
    var_18 = ((var_9 ? (((600329686756145495 ? 262128 : 139))) : (((var_3 << (var_3 - 2108637426))))));
    var_19 = ((var_4 ? (max((max(var_2, var_6)), 32767)) : var_4));
    var_20 = var_16;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((max(-1, -882266077)), (((-32767 ? (arr_0 [i_0]) : ((((arr_1 [i_0]) == (arr_1 [i_0])))))))));
        arr_3 [1] [i_0] &= var_9;
    }
    #pragma endscop
}
