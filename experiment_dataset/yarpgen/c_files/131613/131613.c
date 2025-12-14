/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-((var_10 ? var_10 : var_16)))) - (max(var_11, 2190373881481343993))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = var_15;
        var_21 = ((!(((var_7 ? (arr_0 [i_0] [i_0 - 1]) : ((max((arr_1 [i_0]), 13326))))))));
        arr_2 [i_0] [i_0] = ((var_18 ? (((arr_0 [i_0 + 3] [i_0 + 3]) ? 52210 : (arr_1 [i_0 + 1]))) : 52226));
    }
    #pragma endscop
}
