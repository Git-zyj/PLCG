/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((max(var_16, (((var_6 >> (var_15 + 1668731080))))))) ? (max((~18446744073709551615), var_17)) : ((-((var_12 ? var_15 : 23))))));
    var_20 &= var_18;

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 &= (max((((((max(var_0, 44242))) / var_14))), ((var_13 ? 1 : ((((arr_0 [i_0]) ? 41141 : var_3)))))));
        var_22 = (min(var_22, (((((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 2])))) ? ((((arr_0 [i_0 - 1]) > var_13))) : ((var_0 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))))))));
        arr_3 [i_0 - 1] [i_0 - 1] &= ((-((1238602340 / (arr_0 [i_0 + 2])))));
        var_23 = (max(var_23, ((((0 + 1) - -255)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_24 -= (arr_1 [i_1 - 1]);
        var_25 ^= ((6938429480802883521 ? var_14 : (arr_4 [i_1 + 2])));
    }
    #pragma endscop
}
