/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 ^= ((1 ? 7975460831160152047 : -32375));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = (max(var_19, var_6));
        var_20 = (min(var_20, (((-((-var_5 - (var_13 * var_12))))))));
        arr_2 [i_0] = (((((var_11 ? var_11 : var_7))) ? ((((var_16 >= ((var_14 ? var_13 : var_2)))))) : 26822));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_21 = (min(var_21, (var_0 >> var_13)));
        var_22 = var_0;
    }
    #pragma endscop
}
