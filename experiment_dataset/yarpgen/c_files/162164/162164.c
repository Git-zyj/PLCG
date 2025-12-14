/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, 163));
    var_13 = var_11;
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (max(-2411, ((((((arr_1 [i_0]) ? var_6 : (arr_1 [i_0 + 1])))) ? (~var_6) : (((arr_1 [i_0]) ? var_3 : var_9))))));
        var_15 = ((9 % ((~(arr_0 [i_0 - 1])))));
        arr_3 [i_0 + 1] = ((((((~-72) ? (((var_3 ? var_2 : -124))) : (arr_0 [i_0])))) ? var_0 : (arr_1 [i_0])));
        var_16 = 240;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (arr_5 [i_1] [i_1]);
        arr_6 [i_1] [i_1] = (((((((((arr_4 [1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (!61440) : var_10))) ^ ((((max((arr_4 [i_1] [i_1]), -1))) ? (max(var_10, (arr_5 [i_1] [i_1]))) : 28563))));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        var_18 = (min(var_18, (((-((173 ? var_5 : (arr_8 [i_2 + 2]))))))));
        var_19 = ((11 + (((arr_7 [i_2]) ? var_11 : (((arr_7 [i_2]) + var_8))))));
        var_20 = (min(var_20, 9223372036854775807));
        var_21 = (max(var_21, (((((max(((max((arr_7 [i_2]), (arr_7 [i_2])))), ((4 ? (arr_8 [i_2]) : 32752))))) ? (arr_7 [i_2 + 1]) : var_10)))));
    }
    var_22 &= ((((~(var_0 == 18446744073709551615))) & (((!38806) << (((max(var_1, 35)) - 15))))));
    #pragma endscop
}
