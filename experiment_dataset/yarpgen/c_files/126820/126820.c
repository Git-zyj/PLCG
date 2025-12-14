/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_19 = (min(((8217 ? 60532 : -26987)), 26972));
        var_20 = var_15;
        arr_3 [i_0] = ((var_2 | (((min(var_13, 6897173107975937807)) * (((var_5 ? (arr_2 [i_0 + 1]) : 8209)))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_21 = 11368288164373734797;
        var_22 = (max(var_22, (((((arr_4 [i_1] [i_1 - 3]) || (arr_4 [i_1 - 2] [i_1]))) ? ((max((((arr_5 [i_1] [i_1]) ? -1699510384 : var_6)), 8199))) : 690095420))));
    }
    var_23 = (min(var_23, ((((~var_4) == var_5)))));
    #pragma endscop
}
