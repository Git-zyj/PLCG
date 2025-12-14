/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = ((!(((4978064475050029529 ? -15420 : 689502209842691519)))));
        var_21 = ((21454 & ((var_6 ? (arr_1 [i_0 - 1]) : var_5))));
        var_22 = (((((1 & ((var_14 ? (arr_1 [i_0]) : var_17))))) == (((((689502209842691492 ? var_6 : (arr_0 [i_0 - 2] [i_0])))) ? (((14877 << (((arr_1 [i_0]) - 31226))))) : ((var_5 ? var_7 : var_14))))));
    }
    var_23 = var_4;
    var_24 -= (((-2545 / var_0) / ((max(((min(1, -2016718887))), (var_13 * var_4))))));
    #pragma endscop
}
