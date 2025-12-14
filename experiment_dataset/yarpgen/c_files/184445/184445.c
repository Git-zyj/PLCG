/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = arr_1 [i_0] [i_0];
        var_17 = (max(((((((251 ? 2147483647 : (arr_2 [i_0] [i_0])))) ? -2147483647 : (((!(arr_2 [18] [i_0]))))))), (max(4, (-9223372036854775807 - 1)))));
        var_18 = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 98))) ? (((arr_2 [i_0] [i_0]) & (arr_0 [i_0]))) : (max((arr_2 [i_0] [i_0]), (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = 2147483646;
        var_20 -= ((((255 < (arr_2 [i_1] [i_1]))) ? (arr_4 [i_1] [i_1]) : 5210578180319435403));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 ^= (((arr_6 [i_2]) << (arr_6 [i_2])));
        arr_7 [i_2] = ((127 ? -1 : 67));
    }
    var_22 += (((((var_1 ? var_7 : var_13)))) ? (((((var_4 ? var_11 : var_10)) | (!var_1)))) : (max(var_2, var_2)));
    var_23 = (((((((-2147483647 ? var_7 : var_14)) <= var_14))) | var_0));
    #pragma endscop
}
