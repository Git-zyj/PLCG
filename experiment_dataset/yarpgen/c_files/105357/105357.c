/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((var_6 ? (arr_0 [i_0]) : var_5)) & ((-22872 ? 22872 : (arr_0 [i_0 + 1]))));
        var_12 -= ((((((arr_1 [i_0 + 1] [i_0]) ? (arr_0 [i_0]) : (arr_0 [5])))) ? (((arr_1 [i_0] [i_0]) * var_3)) : ((var_10 ? var_3 : var_4))));
        arr_3 [i_0] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : -106)) >= (((23690 ? var_4 : (arr_1 [i_0 - 1] [i_0 + 1]))))));
    }
    var_13 = (min((((((var_7 ? var_3 : var_4))) ? ((var_5 ? var_5 : var_2)) : (!81))), (((!(((var_0 ? var_5 : var_6))))))));
    #pragma endscop
}
