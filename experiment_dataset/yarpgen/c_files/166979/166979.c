/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, var_3));
        var_13 = (max(((((-7209856473732804153 ? (arr_1 [0]) : var_3)))), (min((arr_1 [i_0]), 1))));
    }
    var_14 ^= var_3;
    var_15 *= var_10;
    #pragma endscop
}
