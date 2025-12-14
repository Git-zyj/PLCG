/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-(((((var_10 ? 5996513995209968576 : var_8)) >= 119142217))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (!(((var_4 ? 1 : -3621967533887541179))));
        var_12 = (((arr_1 [9] [9]) ? (~-60) : (((arr_1 [1] [i_0]) ^ (arr_1 [i_0] [i_0])))));
        var_13 = ((var_1 ? ((-22960 ? 3621967533887541204 : -9)) : ((var_4 ? -4787878576384118693 : (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, (!var_3)));
        var_15 ^= ((((!(arr_3 [i_1]))) || (arr_4 [9] [i_1])));
    }
    var_16 = ((((((1 * 15) * 1))) >= (((var_5 / var_8) ? (min((-9223372036854775807 - 1), 1)) : (((var_1 ? var_5 : var_0)))))));
    #pragma endscop
}
