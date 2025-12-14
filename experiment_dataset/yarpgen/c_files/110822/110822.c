/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((((min(-576460752303423488, var_6))) ? var_1 : (414929906113377204 % 1289583491)))) ? (min(((min(-30639, 1))), var_4)) : (1276142426 || 2351177741))))));
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_11;
        var_15 = (max(var_15, (((((var_0 ? (arr_1 [9]) : (arr_1 [i_0]))) <= var_1)))));
    }
    #pragma endscop
}
