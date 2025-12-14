/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [1] = -3;
        var_19 = ((((((18446744073709551610 ? var_1 : var_2)))) >= (max(-5, (max(2065664026034290690, 39602))))));
    }
    var_20 = (min((-2065664026034290683 || -32755), var_14));
    var_21 = var_4;
    #pragma endscop
}
