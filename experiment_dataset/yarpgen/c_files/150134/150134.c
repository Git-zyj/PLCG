/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-72, ((var_9 ? (var_4 - var_8) : (0 / var_5)))));
    var_13 = var_3;
    var_14 = (max(var_14, (((((max(((min(var_3, var_1))), var_4))) ? var_3 : (((var_9 != (0 + var_2)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [0] [9] = (var_2 && 1);
        arr_3 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [12] &= (arr_4 [10]);
        var_15 = (((((arr_1 [i_1]) || (arr_5 [i_1]))) ? (arr_0 [i_1]) : (((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_0 [i_1])))));
        arr_7 [12] &= (arr_5 [7]);
    }
    #pragma endscop
}
