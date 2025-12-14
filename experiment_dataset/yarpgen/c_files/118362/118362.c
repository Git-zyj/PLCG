/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_4;
        var_15 = min((max((((arr_1 [5]) + (arr_3 [3]))), ((var_2 ? (arr_0 [i_0]) : var_2)))), (min((var_6 / var_1), (arr_2 [i_0]))));
        var_16 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((((-(arr_4 [5]))) / var_8));
        arr_8 [i_1 + 1] [i_1] = ((((-(arr_4 [i_1 + 1]))) << (((((arr_5 [i_1 - 1]) + 274926098)) - 22))));
        var_17 = (((arr_4 [i_1]) | (((arr_5 [i_1]) ? var_10 : -16384))));
        var_18 = (arr_6 [i_1 + 1] [i_1 - 1]);
        arr_9 [i_1 + 1] = 1503680121;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 = -67076096;
        arr_14 [i_2] [18] = ((min(((min((arr_11 [i_2 + 2] [i_2]), (arr_11 [i_2] [1])))), 1503680128)));
    }
    var_20 = 0;
    var_21 = (min(var_2, var_1));
    #pragma endscop
}
