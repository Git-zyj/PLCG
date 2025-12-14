/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0] = 252;
        arr_3 [18] &= (((arr_1 [i_0]) || ((min((126 || 0), ((var_14 ? 4 : 4)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= (((arr_4 [i_1]) ? -120 : (arr_1 [i_1])));
        var_15 = (((arr_1 [i_1]) ? (~7217080734393116556) : (((87905449 ? (arr_0 [7] [i_1]) : var_1)))));
        arr_8 [i_1] = (((((var_9 ? -5251209072343652346 : (arr_5 [i_1])))) ? ((0 ? 72 : var_14)) : (14400 | 1057)));
        arr_9 [i_1] = (((arr_1 [i_1]) ? ((var_0 ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1]))) : (((6621983008792310670 ? -32 : 2965907930)))));
        arr_10 [i_1] [8] = (-127 - 1);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_16 = (max(var_16, ((var_9 ? ((-1967343260 ? 1696040971 : 103)) : 31))));
        arr_13 [i_2] [i_2 - 3] = (((arr_11 [i_2 - 4] [i_2]) | 67));
        var_17 = (min(var_17, (((22800716 ? 252 : (arr_1 [i_2 + 1]))))));
        var_18 = (max(var_18, ((((arr_12 [i_2 - 1]) / (arr_12 [i_2 - 1]))))));
    }
    var_19 = var_7;
    var_20 = ((268435456 ? var_11 : ((((max(124, 225))) ? var_5 : ((var_11 ? -5913028719040771714 : 0))))));
    #pragma endscop
}
