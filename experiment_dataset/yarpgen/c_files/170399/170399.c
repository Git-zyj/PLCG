/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 -= (((arr_1 [1]) ? ((157542853296749989 ? var_2 : (arr_1 [i_0]))) : 54590));
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 2071277750));
        var_11 = ((10917 != (arr_1 [i_0])));
        var_12 = (((arr_0 [i_0]) > (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (((var_9 ? (arr_3 [9]) : (arr_3 [i_1]))));
        var_14 = ((arr_0 [i_1]) ? (arr_0 [i_1]) : 54577);
    }
    var_15 = (max(var_15, var_9));
    #pragma endscop
}
