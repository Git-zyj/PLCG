/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((var_6 ? var_7 : var_0))));
    var_11 = ((var_2 ? ((var_6 ? var_2 : ((var_6 ? var_8 : var_8)))) : ((var_3 ? var_7 : (!var_8)))));
    var_12 &= var_9;
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((!(arr_0 [i_0])));
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) ? ((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        arr_8 [i_1] = ((~(arr_4 [i_1])));
        var_15 &= ((~(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((-(((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (((arr_9 [i_2]) ? (arr_0 [i_2]) : (arr_4 [i_2])))))));
        arr_12 [i_2] [i_2] = ((-(((!(arr_4 [i_2]))))));
    }
    #pragma endscop
}
