/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/54
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((((4704989111379634881ULL) ? var_0 : var_3))) && var_5));

    for (int i_0 = 2; i_0 < 22; i_0 += 1)
    {
        var_13 = (max(var_13, (arr_2 [i_0])));
        var_14 ^= ((((((((-(4294967295U)))) ? 1 : 1))) ? (((var_1 ? (arr_0 [i_0 + 2]) : var_4))) : ((((((arr_2 [i_0 - 1]) ? var_7 : var_3))) ? (arr_2 [i_0 - 1]) : (arr_0 [i_0])))));
        var_15 |= (arr_2 [1]);
    }
    var_16 |= (-((((max((9223372036854775807LL), var_9))) ? (4105556386U) : 0)));
    #pragma endscop
}
