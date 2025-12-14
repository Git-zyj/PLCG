/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (min((arr_0 [6]), ((((3 + 18) || 134)))));
        var_10 *= (max((min((arr_1 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0]))), (arr_0 [i_0])));
        var_11 = var_2;
        var_12 = (min(var_12, (((-111 + (min((((arr_0 [14]) ? (arr_0 [i_0]) : var_4)), (((var_0 - (arr_1 [6] [6])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = (min(var_13, (arr_3 [i_1] [9])));
        arr_6 [i_1] [i_1] = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (((arr_5 [i_1] [10]) - var_8))));
    }
    var_14 = var_1;
    #pragma endscop
}
