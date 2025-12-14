/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, (min((min(0, 1)), 0))));
        var_21 = (((arr_0 [i_0]) ? (min(((3327787645 ? 1 : var_15)), ((0 ? 0 : 1)))) : (arr_0 [i_0])));
    }
    var_22 = (min(var_22, ((min(var_3, 0)))));
    var_23 ^= ((~1926870025) == 3089512839);
    var_24 = 632438030;
    var_25 = (var_5 ? (min(((2193845382 >> (var_4 - 1349181257))), var_1)) : (max(1, var_13)));
    #pragma endscop
}
