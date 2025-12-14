/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [1] [2])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])))) ? ((65535 ? -10 : 56234)) : (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))));
        var_14 -= (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))) ? (arr_1 [i_0] [9]) : (((arr_0 [14]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        var_15 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = (arr_3 [i_1] [i_1]);
        arr_4 [0] [0] |= ((((((arr_2 [10]) ? (((arr_1 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))) : (((arr_3 [i_1] [5]) ? (arr_3 [i_1] [i_1]) : (arr_0 [i_1])))))) ? ((((((arr_3 [i_1] [i_1]) ? (arr_2 [4]) : (arr_2 [8])))) ? (((arr_3 [9] [i_1]) ? (arr_0 [i_1]) : (arr_0 [5]))) : (((arr_0 [i_1]) ? (arr_2 [14]) : (arr_1 [i_1] [i_1]))))) : (arr_2 [6])));
        var_17 = (max(var_17, ((((arr_3 [i_1] [i_1]) ? ((((((arr_2 [12]) ? (arr_2 [2]) : (arr_0 [i_1])))) ? (arr_1 [i_1] [i_1]) : (((arr_3 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_2 [2]))))) : (arr_2 [10]))))));
    }
    var_18 |= var_8;

    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_19 = (arr_7 [i_2]);
        arr_8 [i_2 - 1] [i_2 - 1] |= ((((((arr_6 [i_2] [1]) ? (arr_2 [12]) : (arr_0 [i_2 - 1])))) ? (arr_1 [12] [i_2 + 1]) : (arr_5 [i_2 + 1])));
    }
    var_20 = (min(var_20, (((var_9 ? var_8 : ((var_11 ? var_5 : var_4)))))));
    var_21 = (min(var_21, ((((((var_12 ? var_1 : ((var_10 ? var_5 : var_10))))) ? ((var_6 ? var_1 : ((var_7 ? var_8 : var_9)))) : (((((var_2 ? var_1 : var_1))) ? var_6 : var_0)))))));
    #pragma endscop
}
