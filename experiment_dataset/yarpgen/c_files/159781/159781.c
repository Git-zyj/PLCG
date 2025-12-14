/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (--1);
        var_21 = (max(var_21, (((!((((((1 ? (arr_0 [i_0]) : 0))) ? -225578741 : (arr_1 [i_0] [i_0])))))))));
        var_22 = (!7581535001975456501);
    }
    var_23 = var_1;
    var_24 = var_7;
    var_25 = 7624444383094368388;
    #pragma endscop
}
