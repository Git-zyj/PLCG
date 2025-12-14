/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((var_10 ? (~202) : ((var_1 ? var_11 : var_14))))) ? ((-1138812777 ^ (var_2 - var_3))) : ((((!(var_14 > 1791849992428269471)))))));
    var_17 = ((((((((var_3 ? var_13 : var_9))) ? (((65393 ? var_1 : var_13))) : ((var_14 ? 15360246404643262921 : var_11))))) ? (((!(((var_11 ? var_15 : 65395)))))) : var_14));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= var_15;
        var_18 = ((((((var_15 % 2754313814) ? var_1 : var_0))) ? (((((var_15 ? var_8 : (arr_1 [i_0] [i_0])))) ? (max(var_3, var_3)) : (var_13 > var_10))) : ((-var_9 ? var_0 : (0 & 142)))));
        var_19 = var_15;
        var_20 = var_2;
        var_21 = (min(var_21, ((max(var_6, var_8)))));
    }
    #pragma endscop
}
