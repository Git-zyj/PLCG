/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_7 << ((((((max(8388604, 3413871126))) ? (((max(63327, var_6)))) : var_2)) - 63320))));
    var_12 = (min(var_12, (((-(((var_2 == 65517) ? ((var_4 ? var_6 : -65)) : (var_6 < -65))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, (((((843564331 << (1671046157 - 1671046137))) * var_3)))));
        var_14 &= 1283890173;
        arr_2 [i_0] [11] = ((~(arr_1 [i_0] [i_0])));
        var_15 ^= (((((var_9 & (arr_1 [i_0] [i_0])))) % (arr_0 [13] [i_0])));
    }
    var_16 = (1879823015 << 1);
    #pragma endscop
}
