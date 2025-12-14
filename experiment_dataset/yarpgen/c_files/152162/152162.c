/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_8;
        arr_4 [i_0] [i_0] = -23690;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = (arr_5 [15] [i_1]);
        var_16 = var_12;
        arr_8 [9] = (((((arr_1 [i_1] [1]) ^ var_1))) ? var_10 : (arr_3 [i_1] [i_1]));
        var_17 = ((var_2 / (arr_0 [12])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 += ((((((var_13 ? var_7 : var_8))) ? (((var_9 ? -23697 : var_7))) : ((var_1 | (arr_9 [4]))))));
        arr_11 [i_2] [i_2] = ((~((((var_2 ? (arr_9 [1]) : 3412960590433695741)) / var_12))));
    }
    var_19 = (min(var_19, var_1));
    var_20 = var_13;
    #pragma endscop
}
