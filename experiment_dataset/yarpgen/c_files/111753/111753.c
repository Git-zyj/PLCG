/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_8, ((var_17 ? (((var_3 >> (var_5 - 74)))) : (var_1 | var_4)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        arr_3 [i_0] = (max((((var_0 != var_2) << ((min(var_19, var_16))))), (var_8 < var_3)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [8] &= (((max((var_19 / var_4), ((var_17 ? var_4 : var_0))))) ? (max(var_17, var_16)) : (((((max(var_13, var_17))) ? ((var_0 ? var_14 : var_15)) : ((var_2 >> (var_14 + 84)))))));
        var_21 = ((((var_15 ? var_5 : var_5)) >> (((var_7 % var_13) + 52))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [16] = (((var_10 + 2147483647) >> (((max((var_8 - var_18), var_4)) - 4006503439932051553))));
        var_22 = ((((max(var_1, var_15))) | (6113579191686066614 - 12333164882023485001)));
        var_23 ^= ((var_8 >= (var_8 <= var_2)));
    }
    #pragma endscop
}
