/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(277765767, var_18)))) - ((var_4 ? var_2 : var_6))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = (!1);
        var_20 = (min(var_20, var_17));
        var_21 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (min(var_22, -471533237));
        var_23 -= (max(12462, ((((((arr_5 [i_1]) ? 4611404543450677248 : var_1))) ? ((var_3 ? var_14 : (arr_0 [i_1]))) : ((28702 ? (arr_6 [i_1] [i_1]) : 20780))))));
        var_24 = var_0;
    }
    #pragma endscop
}
