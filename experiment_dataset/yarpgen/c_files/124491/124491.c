/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((~3501380735), ((var_15 | (51703 | var_17))));
    var_19 = (((((var_8 ? var_12 : (var_6 & var_9)))) ? var_13 : (((var_4 ? ((min(var_5, var_0))) : var_4)))));
    var_20 = (max(var_20, var_17));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = min((max((((var_8 ? var_6 : var_15))), ((var_16 ? 7098748885895186559 : var_14)))), ((max((((((arr_0 [i_0]) + 2147483647)) >> (((arr_0 [i_0]) + 154)))), (arr_0 [i_0])))));
        var_21 = var_1;
        arr_3 [0] [i_0] = ((((max(((var_1 ? var_1 : var_12)), var_12))) ? (min((~var_17), (var_12 / var_2))) : var_3));
    }
    var_22 = var_1;
    #pragma endscop
}
