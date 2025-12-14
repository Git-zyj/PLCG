/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 ? var_12 : var_7));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((((var_1 ? (arr_0 [i_0]) : var_7))) ? (~-22) : (~var_8)))) ? ((((((min(var_7, 12)))) & ((211 ? var_3 : 44))))) : var_5));
        arr_3 [i_0] [i_0] = ((~(~var_9)));
        arr_4 [i_0] = (((((((arr_1 [8] [9]) ? var_3 : var_11))) ? ((1012643545 ? (arr_0 [i_0]) : (arr_1 [i_0] [1]))) : var_0)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_14 = (max((max(var_3, ((var_2 ? (arr_7 [10]) : 2127769861)))), ((((arr_5 [i_1]) == ((max(var_7, (arr_5 [i_1])))))))));
        var_15 += ((((min(((max(var_10, var_3))), (arr_6 [i_1])))) ? (~var_6) : ((517208034 ^ (arr_0 [i_1])))));
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 -= ((((arr_8 [i_2 - 1] [i_2 + 1]) ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 - 1] [i_2 - 1]))));
        arr_10 [i_2] = (max((((((min((arr_8 [14] [14]), 1))) > ((~(arr_8 [i_2 + 1] [12])))))), ((var_11 ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 1] [i_2 - 1])))));
    }
    var_17 |= var_7;
    #pragma endscop
}
