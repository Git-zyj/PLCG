/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (max((!1), var_6));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 -= ((((((arr_0 [i_0]) ? var_9 : 62719)) == (var_9 + 1))) ? (arr_1 [i_0 + 1] [i_0]) : ((+((var_0 ? (arr_1 [i_0] [9]) : (arr_0 [i_0]))))));
        var_16 += (max((max((arr_0 [i_0 - 2]), 2281)), (((-2277 ? 2147483647 : -2281)))));
    }
    #pragma endscop
}
