/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_19;
    var_21 += var_16;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [14] [14] &= (((max((arr_1 [20]), (arr_1 [22]))) && ((max((arr_1 [6]), 0)))));
        var_22 &= ((-((-((3261250774370241104 ? 113 : var_14))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (((arr_4 [i_1]) + (((arr_4 [i_1]) ? 3773124143 : var_1))));
        var_24 = ((!((((arr_0 [14]) + 2)))));
        arr_5 [i_1] = (var_5 ? var_8 : (((!(!var_11)))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_25 = (max(var_25, ((((3773124148 ? 4294967295 : (-127 - 1)))))));
        var_26 &= ((~(max(((1 & (-127 - 1))), -2889342475681487240))));
    }
    #pragma endscop
}
