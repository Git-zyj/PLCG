/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((max((((var_9 ? var_9 : var_13))), var_11))) ? (((((var_5 ? var_8 : var_4))) ? (var_9 && var_1) : (max(var_0, var_6)))) : ((var_6 ? (((var_0 ? var_16 : var_13))) : var_0)))))));
    var_20 = (max(var_20, (((((((var_17 ? var_14 : var_3)) >> (-var_2 - 498890601464018158)))) ? (min(((var_1 ? var_1 : var_17)), var_6)) : (((~((var_14 ? var_15 : var_16)))))))));
    var_21 |= ((((min(var_5, var_11))) ? var_11 : (var_17 / var_10)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (max(var_22, (((~(((var_16 | var_9) ? -var_14 : var_5)))))));
        var_23 = ((var_7 ? var_5 : var_1));
        var_24 *= ((((var_4 ? var_8 : var_3))));
    }
    #pragma endscop
}
