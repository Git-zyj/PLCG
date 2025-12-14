/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 = arr_0 [i_0];
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (((((var_5 ? (arr_0 [5]) : var_4))) ? (arr_0 [i_0 - 2]) : (((arr_0 [i_0]) ? 255 : (arr_0 [i_0])))));
    }

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (max(((var_16 ? var_1 : (arr_6 [i_1 + 1]))), (((var_15 ? 37984 : (arr_4 [i_1 + 3] [i_1 - 1]))))));
        var_18 = var_15;
        var_19 = (max(((var_6 ? ((max((arr_4 [i_1] [i_1]), var_13))) : (34932 / var_8))), (((!((min(-15705, var_2))))))));
    }
    var_20 = (min(var_7, ((min(8191, ((var_14 ? var_5 : var_7)))))));
    var_21 = var_7;
    #pragma endscop
}
