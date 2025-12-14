/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_10 = var_9;
        var_11 = (((((arr_1 [i_0] [0]) ? var_1 : var_9)) * (!var_3)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = var_1;
        var_13 = ((~(arr_1 [i_1] [i_1])));
        var_14 = (max(((var_6 ? (arr_0 [i_1] [i_1]) : (!var_5))), (arr_0 [i_1] [i_1])));
        var_15 |= ((!(((var_3 ^ (arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 = (arr_5 [i_2]);
        var_17 = (arr_4 [i_2]);
        var_18 -= ((var_3 ? (((var_6 || (arr_5 [i_2])))) : (arr_4 [i_2])));
        var_19 = (min(var_19, (((var_7 ? (arr_4 [i_2]) : (arr_4 [i_2]))))));
    }
    var_20 = 1;
    #pragma endscop
}
