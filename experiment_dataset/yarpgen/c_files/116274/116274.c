/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (((0 - 0) ? 64118 : 96));
        arr_4 [5] = (((((((arr_1 [i_0]) | (arr_0 [i_0]))))) ? (arr_0 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max(((var_1 ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 + 1]))), (((arr_6 [i_1 + 1]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 + 1])))));
        arr_8 [12] [i_1] = ((var_3 ? (((arr_5 [i_1 + 1]) / (((arr_6 [2]) ? (arr_6 [1]) : var_2)))) : (((((((arr_6 [i_1]) - (arr_6 [i_1])))) ? (arr_6 [i_1 - 1]) : ((var_5 ? (arr_5 [i_1 - 1]) : (arr_5 [i_1]))))))));
        var_12 = (((((((((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1 + 1])))) ? (((max(var_0, (arr_5 [1]))))) : (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_9))))) ? (arr_6 [i_1 + 2]) : ((-((max((arr_5 [i_1 - 1]), (arr_6 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = (i_2 % 2 == 0) ? ((min((arr_9 [i_2] [i_2]), ((((arr_10 [4] [i_2]) << (((arr_12 [i_2]) - 741399192)))))))) : ((min((arr_9 [i_2] [i_2]), ((((arr_10 [4] [i_2]) << (((((arr_12 [i_2]) - 741399192)) - 122772100))))))));
        var_13 = ((((((((arr_10 [i_2] [i_2]) ? (arr_12 [i_2]) : (arr_12 [i_2]))) % var_8))) ? var_6 : ((((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [i_2]) - 25199)))))));
        var_14 = ((!(arr_12 [i_2])));
        arr_14 [i_2] = var_10;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_15 = (arr_15 [i_3] [3]);
        var_16 = ((+((((arr_15 [i_3] [i_3]) <= (arr_15 [i_3] [i_3]))))));
    }
    var_17 = var_4;
    #pragma endscop
}
