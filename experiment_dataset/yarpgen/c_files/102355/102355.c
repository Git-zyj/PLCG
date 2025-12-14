/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (arr_0 [i_0]);
        var_15 = (min(((1 ? 1 : 1)), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_16 -= ((arr_6 [i_1] [i_1]) <= var_7);
        var_17 = (min(var_17, var_3));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 -= ((1 ? var_12 : var_10));
        var_19 |= (max(((((var_2 < (arr_4 [0] [i_2]))) ? 1 : ((max((arr_7 [1] [i_2]), 1))))), (arr_4 [2] [i_2])));
        arr_10 [i_2] = (arr_6 [i_2] [i_2]);
    }
    var_20 = (((((var_2 ? ((var_3 ? var_7 : var_12)) : 1))) ? (max((min(var_5, var_1)), var_9)) : 1));
    #pragma endscop
}
