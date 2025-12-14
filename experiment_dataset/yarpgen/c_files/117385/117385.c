/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_17 = (min(var_17, ((min((27185 + -46), ((((arr_1 [i_0]) | (arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = (-((max(var_1, var_6))));
    }
    var_18 += (((max(2167047042593104796, -2167047042593104797)) | var_1));
    var_19 = (((6092 ^ 28) ? (((((var_10 ? var_7 : -27191))))) : (min(var_4, var_2))));

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((~((~(arr_0 [i_1 + 2])))));
        var_20 = ((-(((((130 ? var_4 : (arr_4 [9] [i_1])))) ? (((var_2 || (arr_5 [i_1])))) : var_8))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_21 = (((var_14 - (arr_5 [i_2 - 1]))));
        arr_11 [8] [8] = (min((((!(((var_14 ? (arr_9 [i_2] [i_2]) : (arr_0 [i_2]))))))), (arr_5 [i_2])));
    }
    #pragma endscop
}
