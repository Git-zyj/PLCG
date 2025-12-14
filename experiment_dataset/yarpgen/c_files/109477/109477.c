/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = (((((19960 + ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [7]))))))) / ((-1 * (min(var_2, (arr_1 [i_0] [2])))))));
        var_18 = ((((((min(1, 8948074884381474560)) - ((((!(arr_1 [i_0] [i_0 + 3])))))))) ? var_11 : (max(((((arr_1 [i_0] [i_0 - 2]) ^ 1))), ((-1074280626 ? var_4 : var_15))))));
        var_19 = (max(var_19, ((((arr_1 [i_0 - 2] [i_0 + 3]) == (((((var_16 ? var_1 : -6585716366581507857))) ? (arr_0 [i_0 + 4]) : -9633)))))));
        var_20 = (max((min(1, (1 + var_4))), 1632645304));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1 - 2] = ((var_15 ? ((-1632645305 ? 102 : 1)) : (var_12 && 163)));
        var_21 *= var_12;
    }
    var_22 = 9643;
    #pragma endscop
}
