/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_16, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_21 += max(((((arr_0 [i_0]) << ((((-(arr_1 [i_0]))) - 13863944847834062776))))), (((((var_17 ? var_4 : (arr_1 [i_0])))) ? ((var_9 ? var_17 : (arr_1 [i_0]))) : (((-(arr_0 [8])))))));
    }
    var_22 = (min(var_3, var_0));
    var_23 = var_2;
    var_24 = ((-(min((((var_16 ? var_10 : var_9))), var_5))));
    var_25 = (max(var_25, (((var_16 ? (max((max(var_0, var_16)), var_12)) : var_12)))));
    #pragma endscop
}
