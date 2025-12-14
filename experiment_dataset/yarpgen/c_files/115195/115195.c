/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_4;
    var_14 = (!227);
    var_15 = (max(var_11, (min(var_5, ((var_6 ? var_11 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 -= var_7;
        arr_4 [5] = var_10;
        var_17 = (arr_0 [i_0]);
        var_18 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_19 = (max(var_19, var_0));
    }
    #pragma endscop
}
