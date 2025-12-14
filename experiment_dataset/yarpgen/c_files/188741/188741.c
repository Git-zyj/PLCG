/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0] [i_0]) ? (min(var_6, (arr_0 [i_0]))) : var_4))) ? (((arr_2 [i_0]) ? -2103769250 : (min((arr_0 [6]), var_13)))) : (arr_0 [i_0])));
        var_18 = (min(var_18, var_10));
    }
    #pragma endscop
}
