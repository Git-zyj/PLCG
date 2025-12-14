/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_5));
    var_16 -= var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = 24;
        var_18 *= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((var_11 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_6))));
    }
    var_19 = ((~(min(-1819138177, var_7))));
    #pragma endscop
}
