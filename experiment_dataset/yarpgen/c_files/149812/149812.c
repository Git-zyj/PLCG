/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 -= (arr_0 [i_0 + 1]);
        arr_2 [i_0] = (((arr_1 [i_0 + 1]) ? (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1]))) : (246 % var_5)));
        var_18 = (max(var_18, ((((((arr_1 [i_0]) >= var_4)) ? ((var_8 ? (-32767 - 1) : var_16)) : (((arr_1 [i_0]) ? var_12 : -7291)))))));
    }
    var_19 = (min(var_19, ((((!var_3) ? var_12 : ((var_0 ? (var_4 && var_16) : ((var_7 ? -380863827 : var_14)))))))));
    var_20 = (max(var_20, 3494897431));
    #pragma endscop
}
