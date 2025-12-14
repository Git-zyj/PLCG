/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) & (((arr_1 [i_0] [i_0]) ? var_14 : (-127 - 1)))));
        var_18 = max(((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))), ((max((max((arr_0 [5]), var_13)), (((var_15 / (arr_1 [i_0] [i_0]))))))));
        var_19 = var_2;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (max(var_20, ((((arr_1 [i_1] [i_1]) ? 24 : ((~((-40 ? var_11 : (arr_1 [i_1] [i_1]))))))))));
        arr_5 [i_1] = (max((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), ((((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (125 + var_4))))));
        var_21 = ((min((!42), ((var_4 ? var_1 : var_15)))));
        var_22 = (min(var_22, (arr_1 [i_1] [i_1])));
        var_23 = ((((((-6081204469138491989 == (arr_3 [i_1] [0]))))) ^ var_12));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 = ((-(arr_4 [i_2] [i_2])));
        var_25 = (arr_4 [i_2] [i_2]);
        var_26 = (arr_6 [i_2] [i_2]);
        var_27 = (((10 ? var_13 : (arr_6 [i_2] [i_2]))));
    }
    #pragma endscop
}
