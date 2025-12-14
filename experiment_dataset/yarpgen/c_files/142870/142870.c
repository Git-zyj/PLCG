/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = ((-var_4 ? 207 : (max(189, var_3))));
    var_13 = var_8;
    var_14 = (((min(var_0, var_7)) >> var_1));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 *= -2015642233397750484;
        var_16 ^= 206;
        var_17 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (-4294967277 - 2015642233397750503);
        arr_3 [i_0] = (max((arr_1 [i_0]), var_9));
    }
    #pragma endscop
}
