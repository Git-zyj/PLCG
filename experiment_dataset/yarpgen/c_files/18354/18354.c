/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = var_11;
        var_16 = ((!(((-(((arr_1 [i_0] [i_0]) * 0)))))));
        var_17 = (((-1777143547 ? ((var_1 ? 1777143547 : var_7) : (max(var_2, (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] |= (((((arr_1 [i_0] [i_0]) ? -var_11 : 93))) ? ((-(max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))) : (((((arr_0 [i_0]) && var_6)))));
    }
    var_18 = (~162);
    var_19 = (min((((!(((var_0 ? var_6 : var_1)))))), 219));
    var_20 = var_5;
    #pragma endscop
}
