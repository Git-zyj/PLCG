/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 227;
    var_18 = (((((var_5 & var_16) ? var_16 : var_2)) ^ (((~var_12) ? var_15 : var_15))));
    var_19 = (min(var_19, ((min(((((min(var_13, var_5)) ? (((-32767 - 1) ? 0 : var_4)) : var_2))), ((var_2 ? (min(var_7, 63)) : ((55613761 ? var_7 : 55613775)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) + (var_3 & var_0)));
        arr_3 [i_0] = ((((min(var_6, (arr_0 [i_0])))) >= (((!((((arr_1 [i_0]) ? var_1 : var_13))))))));
    }
    var_20 = ((!((((((var_16 ? var_12 : 0))) ? (var_9 || 15) : ((798442109 ? var_14 : 45)))))));
    #pragma endscop
}
