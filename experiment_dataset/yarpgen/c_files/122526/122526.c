/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_10 = var_0;
        var_11 ^= ((var_6 ? ((var_7 ? var_5 : var_6)) : (arr_2 [11])));
        var_12 -= (((((-7668434548910085143 ? var_2 : var_7))) ? (arr_2 [i_0]) : (arr_1 [i_0 - 1])));
        var_13 *= ((9 >> (((arr_2 [i_0 - 2]) - 52351))));
        arr_3 [i_0] = (((arr_2 [i_0]) & (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((((((4362862139015168 ? 255 : 1)))) ? ((((-5513101900920628143 ? 0 : 2047)))) : var_9));
        var_14 = (max(var_14, var_5));
        var_15 = (min((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))), ((var_6 - (arr_4 [i_1])))));
    }
    var_16 = (min((max(((1 ? 4 : 5513101900920628161)), ((max(var_5, var_9))))), -126));
    #pragma endscop
}
