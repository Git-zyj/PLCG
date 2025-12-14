/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((min(1, 0))) ? (((((55973 ? var_11 : var_6))) ? (min(var_7, -2018)) : (var_13 == var_7))) : var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((!(arr_0 [i_0])));
        var_18 = (((!var_5) ? ((((arr_0 [i_0]) & (arr_1 [i_0])))) : 4294967295));
        arr_3 [i_0] = ((!(arr_0 [i_0])));
    }
    var_19 = ((max(var_14, var_6)) & ((((((var_4 ? var_3 : var_2))) ? var_9 : var_6))));
    #pragma endscop
}
