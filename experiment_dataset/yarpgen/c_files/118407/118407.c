/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((min(var_8, (max(-2544447654114019006, (arr_2 [i_0] [i_0])))))) ? (min(((((arr_2 [i_0] [i_0]) > -5))), (min((arr_0 [i_0]), 7)))) : ((((((7 ? var_12 : (arr_0 [i_0])))) ? ((var_0 ? (arr_1 [i_0]) : 117)) : var_12))));
        var_15 ^= min(7276858351100493062, var_1);
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = ((~(((arr_4 [i_1] [2]) ? ((min(var_2, 7))) : ((var_9 ? var_10 : var_0))))));
        var_17 = ((max(var_4, (arr_4 [i_1] [i_1]))) / (((((min(var_1, 5585292399143871302))) ? (arr_4 [i_1] [i_1]) : (0 || -7276858351100493062)))));
        var_18 &= ((((((arr_4 [i_1] [i_1]) ? var_7 : (arr_4 [i_1] [i_1])))) ? var_4 : (((((1 ? var_1 : 199))) ? ((max(7276858351100493062, var_10))) : 6364173167283841588))));
    }
    #pragma endscop
}
