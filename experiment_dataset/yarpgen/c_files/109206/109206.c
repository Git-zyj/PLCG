/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (((-(arr_1 [i_0]))));
        arr_3 [i_0] = (~1);
        arr_4 [i_0] [i_0] = ((var_6 & (arr_2 [i_0])));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_19 = (((-3408 & var_1) ^ (((((1 ? 32757 : 3408))) ? (arr_6 [i_1 + 1]) : ((((arr_5 [i_1] [12]) | var_14)))))));
        var_20 -= (arr_6 [i_1 - 1]);
        arr_7 [i_1] = ((((var_15 ^ (arr_5 [i_1] [i_1])))));
        arr_8 [i_1] [i_1] = arr_6 [i_1];
        arr_9 [i_1] = (((((1 <= 1) != var_6)) ? (var_0 / var_8) : ((((var_13 ? 1 : var_6)) << ((16547493502325450899 ? 1 : 1))))));
    }
    var_21 = (max(var_21, var_4));
    #pragma endscop
}
