/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((!16571501665143265193) * ((var_4 ? var_13 : var_0))))) ? (((max((var_7 < var_1), (!var_3))))) : (var_4 / 3302348613)));
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, 66));
        var_18 ^= (arr_0 [i_0]);
    }
    var_19 = (((~var_7) ? (((((var_6 ? var_5 : var_8))) ? ((var_2 ? var_5 : var_13)) : ((var_8 ? var_1 : var_14)))) : (var_5 | var_5)));
    #pragma endscop
}
