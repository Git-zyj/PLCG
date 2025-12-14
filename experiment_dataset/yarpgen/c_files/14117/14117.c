/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((((((((var_4 ? var_8 : var_2))) ? -1 : (((var_9 + 2147483647) << (((-34 + 65) - 31))))))) ? 1446256803 : 1446256803));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = (((-9223372036854775807 - 1) ? (arr_1 [i_0 - 2]) : -1165918716));
        var_13 = (var_1 ? (arr_0 [i_0]) : (arr_2 [i_0 + 2]));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_14 = ((4100074734 ? (((-(arr_1 [i_1])))) : ((-26485 ? -1 : (arr_3 [i_1 - 1] [i_1])))));
        var_15 -= ((((1 ? (1 < 6967106925295306215) : 1)) * ((((max(2626321365, (arr_5 [i_1 - 1]))) >= ((var_5 | (arr_1 [i_1]))))))));
        var_16 = ((-((((max((arr_1 [i_1]), var_9))) ? ((-(arr_5 [i_1]))) : (arr_1 [i_1 + 1])))));
    }
    var_17 = var_1;
    #pragma endscop
}
