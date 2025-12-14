/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~19996), -60));
    var_15 ^= ((~((~((max(39038, 14515)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, (!58720256)));
        var_17 = ((-((var_12 ? var_5 : (arr_0 [i_0])))));
        var_18 = 15023;
        var_19 = (((arr_1 [i_0]) ? 52762 : (arr_1 [i_0])));
    }
    var_20 = (((~var_2) ? (max(var_7, var_2)) : var_1));
    var_21 = (((((!((max(-1856802943, 39057)))))) | var_3));
    #pragma endscop
}
