/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (((-var_6 ? ((var_9 ? var_9 : var_5)) : ((min(var_8, var_1))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = ((!((max(((((arr_1 [i_0 + 2]) == var_7))), (arr_0 [i_0]))))));
        var_14 -= ((((min(var_7, (arr_0 [8])))) | (min((arr_2 [i_0 - 1]), var_0))));
        var_15 -= ((((((max((arr_1 [i_0]), 0))) - (!0))) >> (var_2 - 35)));
    }
    #pragma endscop
}
