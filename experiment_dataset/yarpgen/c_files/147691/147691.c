/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((~((((((arr_1 [i_0]) ? 15429 : -30))) ? ((9822717258130111730 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (65525 || 10557037018582816647)))));
        var_14 = ((!(arr_1 [i_0])));
    }
    var_15 = (max(1, 1));
    #pragma endscop
}
