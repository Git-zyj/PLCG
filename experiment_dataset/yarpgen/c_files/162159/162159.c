/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_6, ((-var_14 ? var_11 : ((max(243, 16)))))));
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = ((((-(((arr_0 [i_0]) ? (arr_2 [i_0]) : -115)))) * (min((arr_2 [i_0]), (((arr_1 [i_0]) ? var_12 : var_8))))));
        var_18 *= (max((min((max(var_9, (arr_1 [i_0]))), (min(var_3, (arr_1 [i_0]))))), var_14));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((max((var_8 * var_14), ((max(var_2, var_5)))))) ? (((((110 * (arr_5 [i_1] [6])))) ? (arr_3 [i_1]) : var_4)) : (max(var_9, ((var_2 / (arr_4 [i_1])))))));
        var_19 = (min(var_19, ((((arr_5 [i_1] [i_1]) ? (((~var_7) & (~254))) : 134)))));
        arr_7 [0] |= ((-12 | (((arr_4 [2]) ? (arr_5 [i_1] [i_1]) : (arr_4 [10])))));
    }
    var_20 &= var_11;
    #pragma endscop
}
