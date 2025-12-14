/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 &= ((((max(var_0, var_11))) || ((((((~(arr_0 [i_0])))) ? (min(29623, var_9)) : ((((arr_1 [i_0] [i_0]) ? var_5 : (arr_0 [i_0])))))))));
        var_17 = ((arr_0 [i_0]) ? (min(var_12, (((arr_1 [i_0] [i_0]) % var_11)))) : ((((((11 ? var_14 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : var_2))));
        var_18 = (~(((((((arr_0 [i_0]) / var_8))) && ((max(var_9, 4294967277)))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_19 = (((((1 >> ((((4294967284 ? (arr_4 [i_1]) : (arr_4 [i_1 + 1]))) - 607264639))))) ? (((((var_1 | (arr_2 [i_1] [i_1])))))) : (((min(var_10, var_1)) - (((0 ? (arr_2 [i_1 + 1] [i_1 + 1]) : (arr_2 [i_1] [i_1]))))))));
        var_20 = arr_4 [i_1];
        arr_5 [i_1] [i_1 + 1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_21 = (((arr_7 [i_2] [i_2]) <= (arr_2 [i_2] [i_2])));
        var_22 = ((0 && 293152929) >> (((arr_3 [i_2 + 1]) - 6985)));
        var_23 = (((((~(arr_6 [i_2] [i_2])))) ^ (((arr_7 [i_2] [i_2]) ? 15053246202656517671 : (arr_8 [i_2])))));
    }
    var_24 = var_7;
    var_25 = var_4;
    #pragma endscop
}
