/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 >> (var_7 - 2854946230)));
    var_19 = (max(var_7, (var_1 + var_8)));
    var_20 = (!var_14);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_0 [4])));
        var_22 = (max(var_22, var_5));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_23 = (min(((9235048323883058728 ? ((0 ? -24902 : 9607477098212529076)) : 31)), 97));
        var_24 = (max(var_24, (((((((arr_5 [i_1 + 1] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 + 1])))) ? (((-(arr_5 [i_1 - 1] [i_1 + 1])))) : (30 ^ 6017335256581191183))))));
    }
    var_25 = var_11;
    #pragma endscop
}
