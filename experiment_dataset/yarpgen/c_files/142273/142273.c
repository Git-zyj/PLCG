/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_0 ? -21299 : var_0))) ? (((48407 ? var_9 : -11255))) : ((var_3 ? 1183410877 : var_8)))) - 31));
    var_20 += var_6;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 *= ((((48412 / (((min(var_6, var_5)))))) <= ((((min((arr_0 [i_0]), var_12))) ? (min((arr_0 [i_0]), 11254)) : 866349169))));
        var_22 = -14710;
        var_23 -= (((((arr_1 [i_0 - 1]) / var_9)) & ((((!(arr_1 [i_0 + 1])))))));
    }
    #pragma endscop
}
