/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_9;
        var_12 = ((((arr_0 [i_0] [i_0]) ? var_9 : var_4)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (min(var_13, var_9));
        arr_5 [1] [1] = ((517786148270391878 ? (~1) : (arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_14 = 2204508518;
        var_15 = -7731713604210267207;
        var_16 = ((!((((arr_7 [i_2] [i_2]) + var_8)))));
    }
    var_17 = min(var_0, var_2);
    #pragma endscop
}
