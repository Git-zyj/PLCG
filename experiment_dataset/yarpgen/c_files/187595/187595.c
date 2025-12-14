/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 % var_3);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((((2032970089337166018 ? var_5 : var_1)) >= 212)));
        var_11 = 3453033167;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 -= 841934152;
        var_13 = (max(var_13, (((((max(841934129, var_2))) ? (-12 - 3453033167) : ((-53 ? 3453033167 : -8997026677169046586)))))));
    }
    var_14 = (max(var_14, 2147483647));
    #pragma endscop
}
