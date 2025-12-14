/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(var_13, var_9))) & var_2))) ? ((min(var_0, var_6))) : var_13));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 &= ((((var_2 ? var_5 : var_7)) - (((var_1 ? var_11 : var_2)))));
        var_16 = (max(var_16, (((~((min(var_11, var_13))))))));
        arr_4 [i_0] = (((var_7 >= var_0) ? (max(var_7, var_4)) : (min(var_1, var_12))));
        var_17 = (max((min((var_8 | var_8), ((var_9 ? var_12 : var_2)))), ((min(var_9, var_11)))));
        arr_5 [i_0] &= (min(((70 ? 13606 : 11206)), var_13));
    }
    var_18 = ((var_13 ? (((var_4 - var_13) ? (~var_12) : var_2)) : var_0));
    var_19 = (min((((var_1 ? (~var_1) : var_3))), (max((((-1063968370 ? 3690843718 : 18862))), ((var_11 ? var_4 : var_10))))));
    #pragma endscop
}
