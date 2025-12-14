/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((max(var_19, var_0)), var_11))) ? ((((max(var_15, var_17))) ? (min(var_11, var_1)) : var_8)) : var_18));
        arr_3 [i_0] = (min((((var_12 ? var_13 : (var_5 == var_13)))), (max(var_3, var_1))));
        var_20 = min((var_18 > var_1), (((var_6 * var_11) * var_18)));
        var_21 = var_6;
    }

    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((var_16 > (min((min(var_1, var_12)), (((var_16 ? var_0 : var_5)))))));
        var_22 = (((((var_0 >> (var_19 - 1998202510)))) ? var_9 : (((min(var_17, var_8))))));
        arr_8 [16] &= var_3;
    }
    var_23 = var_3;
    var_24 = (min(var_24, ((max(var_18, ((var_6 - (((max(32483, 40898)))))))))));
    var_25 = var_15;
    #pragma endscop
}
