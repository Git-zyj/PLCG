/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (~132);
    var_12 *= 132;
    var_13 = ((((118 ? var_1 : var_5))));
    var_14 = ((3814946824 ? var_10 : (var_9 - var_5)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 ^= var_6;
        arr_3 [i_0] [i_0] = var_9;
        var_16 = var_4;
    }
    #pragma endscop
}
