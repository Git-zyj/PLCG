/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = ((((2048 + (arr_1 [i_0 - 2]))) > ((4237048756 ? var_0 : (arr_1 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 *= ((2034 + (max(-1911917453, ((1 ? (arr_0 [i_1] [i_1]) : -124))))));
            var_13 = ((((((2049 ? 2065 : 1969082002)) >= var_4)) ? ((((max(var_1, -24)) + var_3))) : (1 & 1207278261953644649)));
        }
        var_14 = ((((max(1274057499, (min(1776061787, 199547166))))) == (max(2130989138, 7582732631360237605))));
    }
    var_15 = ((((((2051 ? 15760 : -2063)) < -24936)) ? 1 : var_10));
    #pragma endscop
}
