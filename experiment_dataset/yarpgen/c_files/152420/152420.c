/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_17) ? (((-((50 >> (var_12 + 22850)))))) : ((8815158804474731749 << ((((max(48, var_12))) - 48))))));
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (((((var_2 + ((var_18 ? (arr_1 [i_0]) : var_12))))) ? (((var_10 > ((((arr_0 [i_0]) || var_12)))))) : ((((0 / var_16) < (arr_0 [i_0]))))));
        var_22 = arr_0 [i_0];
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_4 [i_1] = var_11;
        arr_5 [i_1] = var_0;
        arr_6 [i_1] = ((55119 ? 49 : 127));
        var_23 = (~var_12);
    }
    var_24 = (((((0 >> ((((-60 ? var_8 : var_11)) - 2326))))) || (((-((var_10 ? var_1 : var_13)))))));
    #pragma endscop
}
