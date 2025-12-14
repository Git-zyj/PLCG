/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -288230376151711743;
    var_14 = var_8;
    var_15 = (((max((((var_2 ? var_2 : var_6))), ((var_11 ? 2934342826804952443 : 2934342826804952443)))) <= ((((var_5 ? 1619088302 : var_1))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_1 [i_0] [15]) & 2934342826804952432))));
        var_16 = ((-14241265246635678741 ? (((((var_12 ? -1664665686386058176 : var_3))) ? (min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : var_1)) : (max((4253615525284364869 > 18446744073709551611), (min((arr_0 [i_0] [i_0]), 8828889493117840526))))));
    }
    #pragma endscop
}
