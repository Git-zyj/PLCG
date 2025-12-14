/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_14 >> (((var_0 + -2) + 21))))) != var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 203071454;
        var_18 = (~2147483647);
        var_19 = ((((var_3 ? 203071424 : var_10)) * (var_0 / 203071424)));
        var_20 = (149 / (min((arr_0 [6] [i_0]), var_3)));
    }
    var_21 = (min(var_10, var_5));
    var_22 = (min(var_22, ((((155 + var_12) ? (min((1 & var_14), (min(var_6, 124)))) : var_15)))));
    var_23 = ((var_13 != (((var_4 ? (507377730735216140 != var_15) : ((var_5 ? var_11 : var_7)))))));
    #pragma endscop
}
