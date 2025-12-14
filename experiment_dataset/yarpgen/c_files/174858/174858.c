/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((0 ? (-1 / var_10) : var_4)), ((0 ? 19092 : 65535)));
    var_14 = var_12;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((((~(((arr_2 [15] [i_0]) ? var_9 : (arr_0 [i_0] [i_0])))))) ? (((~(arr_1 [i_0] [i_0 - 1])))) : (((arr_2 [i_0] [20]) ? (max((arr_2 [i_0 + 1] [i_0]), -461091664773163724)) : 4)));
        arr_5 [i_0] = ((+(((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) | var_0))));
        arr_6 [i_0] = max((((!(((123 ? 169 : (-127 - 1))))))), ((((((arr_2 [1] [i_0 - 2]) < (arr_1 [1] [i_0])))) ^ (arr_1 [i_0] [i_0 - 2]))));
        var_15 = (((((((-5617567730300958320 & (arr_2 [i_0 - 4] [i_0 - 2]))) / (arr_0 [1] [16])))) ? (max(54, -32757)) : ((var_6 ? ((1 ? (arr_0 [i_0] [14]) : (arr_0 [i_0] [16]))) : (arr_1 [9] [i_0])))));
    }
    #pragma endscop
}
