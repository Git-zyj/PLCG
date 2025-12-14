/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 ^= (((~5325150980532239803) ? (((var_2 >= (arr_0 [i_0])))) : ((var_2 ? 1 : var_5))));
        var_20 ^= (4294967295 == 18153);
        var_21 = var_11;
        var_22 |= var_11;
        var_23 = var_0;
    }
    var_24 = ((((max((min(240, 4294967287)), 121))) == 15555696929044830550));
    var_25 = ((0 & (((((max(var_16, var_13))) ? var_7 : -var_13)))));
    #pragma endscop
}
