/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) & 4091160671830023478));
        var_14 |= (min((max((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))), (((arr_0 [2] [i_0]) | (arr_1 [i_0])))));
    }
    var_15 = var_5;

    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = 255;
        arr_8 [i_1 - 1] &= (((arr_6 [21]) >= (arr_0 [9] [i_1])));
        var_16 = (((arr_0 [i_1] [i_1 + 1]) ? var_12 : var_2));
    }
    #pragma endscop
}
