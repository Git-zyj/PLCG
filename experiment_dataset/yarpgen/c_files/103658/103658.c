/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 -= (((((arr_0 [i_0]) / (min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))) & (((((37003720 ? 0 : (arr_0 [i_0])))) ? (!0) : (arr_1 [i_0] [i_0])))));
        var_16 = (((((~((min(var_0, var_2)))))) + (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_11)) : (arr_0 [i_0])))));
        var_17 = (min(var_17, (arr_0 [5])));
        var_18 |= (((((~(10483668 / 4294967295)))) ? -7968 : (arr_1 [i_0] [16])));
    }
    var_19 = var_1;
    #pragma endscop
}
