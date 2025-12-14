/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_12 *= ((((min((var_6 < var_0), -53))) ? 133 : (((!(((-(arr_0 [i_0 + 1] [i_0 - 2])))))))));
        arr_2 [i_0] = 127;
    }
    var_13 &= var_5;
    var_14 = ((var_8 ? (max(var_2, var_4)) : (((var_1 ? -var_7 : -var_2)))));
    var_15 = var_9;
    #pragma endscop
}
