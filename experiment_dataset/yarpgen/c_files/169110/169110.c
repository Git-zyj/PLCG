/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((2635 ? (arr_2 [i_0]) : ((((((281474976710648 ? var_0 : (arr_2 [i_0])))) ? ((((arr_0 [i_0]) || var_2))) : ((min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_4 [i_0] = (min((((((max(var_13, (arr_0 [i_0])))) ? 2645 : ((min(1449, (arr_0 [i_0]))))))), ((-1 ? (arr_2 [i_0]) : 67043328))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1 + 1] = (max(((max(var_8, var_6))), (((arr_5 [i_1 + 1]) ? (arr_5 [i_1 - 1]) : (arr_2 [i_1 - 1])))));
        arr_8 [i_1 + 1] [i_1 + 1] = (arr_1 [i_1 + 1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] = (min((((arr_5 [i_2 + 1]) ? 17442502176927435446 : (max(var_4, (arr_6 [i_2] [i_2 - 1]))))), (((arr_0 [i_2]) * (((arr_11 [i_2]) ? (arr_12 [i_2 + 2] [i_2 + 2]) : (arr_11 [i_2 + 2])))))));
        arr_14 [i_2] [12] = (((arr_12 [i_2] [7]) ? (((min((max(-1449, var_14)), (arr_10 [i_2 + 1]))))) : (arr_12 [9] [i_2 + 2])));
    }
    #pragma endscop
}
