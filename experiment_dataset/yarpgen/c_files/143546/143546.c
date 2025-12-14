/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min((arr_1 [i_0] [i_0]), (!130)))) ? (((((130 ? var_2 : 1))) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))));
        var_11 = -1;
        var_12 = (((~(((arr_0 [i_0]) ? var_9 : 130)))) > ((1 ? ((var_4 ? 1 : var_5)) : (16131267606065015306 || 1))));
        var_13 = ((((max(1, 1))) ? ((-(arr_0 [i_0 + 1]))) : (arr_1 [i_0] [i_0])));
        var_14 = (min(var_14, ((((((var_7 + var_7) ? 16284519583719084709 : var_9))) ? (arr_2 [1]) : (max((min((arr_2 [1]), 18237566647113345168)), 1))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 ^= ((((((arr_5 [i_1]) / var_0))) ? (arr_5 [i_1]) : (((arr_5 [i_1]) ? var_10 : (arr_5 [i_1])))));
        arr_6 [i_1] = var_7;
    }
    var_16 = (min((((min(var_4, var_7)))), ((~((min(var_5, 0)))))));
    #pragma endscop
}
