/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_0);
    var_16 = (max((((var_11 + var_1) ? (var_6 - -8642) : var_0)), -var_2));
    var_17 = ((var_1 ? (-2147483647 - 1) : ((((11 / 17818) || var_6)))));
    var_18 = ((~(-28083 / 32763)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 *= (!7997050609958422698);
        var_20 = -8648;
        arr_2 [i_0] [i_0] = (~2147483647);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (max(var_21, (((((var_6 ? -1 : (arr_4 [i_1] [i_1]))) * ((511 ? 132 : -30680)))))));
        var_22 = (((-35 ? (arr_3 [i_1]) : ((min(var_8, 50729))))));
        var_23 = (arr_0 [23] [i_1]);
        var_24 = (min(var_24, (((+((((!123) && ((((arr_1 [i_1]) ? 29816 : (arr_5 [12]))))))))))));
    }
    #pragma endscop
}
