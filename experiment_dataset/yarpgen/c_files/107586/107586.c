/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_21, ((961511541 ? -29 : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = var_11;
    }
    var_22 = ((((var_9 ? var_11 : ((var_19 ? -1635566443 : var_13)))) / 961511541));
    var_23 = var_13;
    #pragma endscop
}
