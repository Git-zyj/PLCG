/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_7;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((~(arr_1 [i_0 + 1])))) ? (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : var_7)) : (((arr_1 [i_0 - 2]) ? var_4 : (arr_1 [i_0 + 1]))));
        arr_2 [i_0] = ((!((((~1) / 1)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] &= (218 ? 173 : -1073741824);
        arr_6 [i_1] = ((((((((1850901177950534947 ? 48 : 1183044251))) ? (0 == var_2) : ((48 << (var_2 + 32707)))))) ? (((~(arr_0 [i_1])))) : (((var_4 ? var_3 : var_5)))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_12 = (max(var_12, (arr_9 [i_2])));
        var_13 = (max(var_13, (((((min(7, -1))) ? ((-(var_8 / 9223372036854775807))) : ((min((arr_9 [0]), var_0))))))));
        var_14 = (min(var_14, ((min(var_8, (((16595842895759016668 | 917504) | (arr_7 [0]))))))));
    }
    var_15 = ((var_8 ? ((((((var_7 - var_8) + 2147483647)) << var_1))) : var_3));
    var_16 = ((var_0 ? ((((35 || var_0) || (((48 ? 995924654 : 0)))))) : var_2));
    #pragma endscop
}
