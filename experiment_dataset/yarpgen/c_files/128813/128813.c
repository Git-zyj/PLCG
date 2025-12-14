/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((!(var_2 % var_10)))), (((0 == var_5) >> (-2822155210455505279 != -795544746124528027)))));
    var_20 = (max(var_17, var_11));
    var_21 = var_1;
    var_22 -= ((1593 ? (63943 == var_10) : (max(((var_14 ? var_1 : var_4)), var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_16;
        arr_3 [i_0] [i_0] = 0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 -= (((arr_4 [i_1]) ? var_10 : 224));
        arr_6 [i_1] = (((arr_4 [i_1]) ? (arr_4 [16]) : 0));
        var_24 = ((arr_5 [i_1]) ? (arr_5 [i_1]) : 4294967295);
    }
    #pragma endscop
}
