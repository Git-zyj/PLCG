/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 >= ((min(((var_9 ? var_18 : var_7)), var_8)))));
    var_21 = (min(var_21, ((((((!var_15) == var_0)) ? ((var_0 ? (12671968366487519974 / var_10) : var_0)) : (((((var_0 ? var_10 : var_1))) ? 12671968366487519986 : var_4)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = ((21 >= (511 - 21)));
        var_23 = var_12;
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 1 : (arr_0 [i_0]))) : ((-(arr_0 [i_0])))));
    }
    var_24 = var_13;
    #pragma endscop
}
