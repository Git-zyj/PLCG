/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 += var_8;
        var_19 = ((((1 && (arr_1 [i_0]))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : var_14));
        arr_2 [i_0] = ((+((((-116 && var_4) < (arr_1 [i_0]))))));
        var_20 = max((((-(arr_1 [i_0])))), ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((22283 ? (arr_1 [i_0]) : var_8))) : (((arr_1 [i_0]) ? var_3 : (arr_0 [i_0]))))));
        arr_3 [i_0] = max((arr_1 [i_0]), ((max(-4, (arr_0 [21])))));
    }
    var_21 = (((((var_3 - var_15) - var_3)) - ((max(var_7, var_0)))));
    var_22 = ((var_11 ? (((((max(var_15, var_10))) << ((max(4, var_13)))))) : (var_2 + var_4)));
    #pragma endscop
}
