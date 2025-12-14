/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [3])));
        var_18 ^= (((-127 - 1) ? (-127 - 1) : 1));
        arr_3 [i_0] = min((arr_1 [i_0]), (((var_14 || var_1) ? (var_1 != 1710318206) : -440252290)));
        arr_4 [i_0] = (min(((((~-742931322) ? (var_11 >= var_3) : 18126))), var_0));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = var_0;
        var_19 = var_8;
    }
    var_20 = (((-((52505 ? var_12 : var_5)))));
    var_21 = var_15;
    var_22 = (((((min((~1), var_11)) + 9223372036854775807)) >> (((~61440) + 61500))));
    #pragma endscop
}
