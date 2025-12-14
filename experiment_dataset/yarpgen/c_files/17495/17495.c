/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_10 ? var_2 : (var_3 & var_6))) >> ((((((((var_4 ? var_10 : var_1)) + 9223372036854775807)) >> (var_5 - 6409224584051269601))) - 5236486538913119730))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = ((((((((arr_2 [i_0]) + (arr_2 [i_0])))) - (18446744073709551608 + 18446744073709551611))) + (((((((arr_0 [i_0] [i_0]) + (arr_2 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_13 |= var_9;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 = arr_4 [3] [i_1];
        var_15 ^= ((((var_10 ? (arr_2 [i_1]) : (arr_0 [i_1] [i_1]))) | (((arr_1 [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1])))));
        arr_6 [i_1] |= (((arr_0 [i_1] [i_1]) | (arr_5 [5])));
        arr_7 [i_1] &= (((arr_3 [i_1]) + ((((max(var_6, (arr_1 [i_1])))) ? var_5 : ((((arr_2 [i_1]) / (arr_2 [i_1]))))))));
    }
    var_16 = ((((max(var_1, var_9))) ? var_3 : (18446744073709551582 ^ var_7)));
    var_17 = var_7;
    var_18 = var_0;
    #pragma endscop
}
