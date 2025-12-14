/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_4;
        var_16 = arr_0 [i_0];
        arr_2 [i_0] = (arr_1 [i_0]);
        var_17 = (min(var_17, (((-(((arr_1 [0]) ? ((((!(arr_0 [12]))))) : ((var_3 ? 4064780178 : 886821180)))))))));
        var_18 = (min((arr_0 [i_0]), 508));
    }
    var_19 = var_8;
    var_20 = (((((((var_12 ? var_1 : var_7))) < var_5)) ? (((var_4 || (((var_9 << (-101 + 108))))))) : (!var_0)));
    var_21 = ((((((max(24576, var_0))) || 40960)) && var_1));
    #pragma endscop
}
