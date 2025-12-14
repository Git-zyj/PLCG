/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_14 = (((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0 + 1]))) & (arr_1 [i_0 - 1])));
        var_15 = (arr_2 [i_0]);
        var_16 = ((((((arr_0 [i_0] [i_0]) != (arr_3 [i_0])))) != var_12));
        var_17 = ((-(arr_0 [i_0 + 1] [i_0 - 1])));
        var_18 = (((arr_0 [i_0 + 1] [i_0 + 2]) % var_2));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_19 |= (-(((arr_3 [i_1 + 2]) | (arr_2 [i_1 + 2]))));
        arr_6 [i_1] = (((arr_1 [i_1 - 1]) ? (arr_4 [i_1] [i_1]) : (+-95)));
        var_20 &= ((((min((arr_5 [i_1 + 2]), (arr_3 [i_1 + 1])))) * (((arr_1 [i_1 + 2]) & (arr_1 [i_1 + 2])))));
    }
    var_21 = ((((min((~var_2), var_4))) ? ((var_1 ? -38 : var_11)) : ((min(var_7, var_8)))));
    var_22 = (((var_2 - var_8) ? ((var_5 ? ((var_2 ? var_4 : var_13)) : -89)) : var_7));
    var_23 -= -95;
    #pragma endscop
}
