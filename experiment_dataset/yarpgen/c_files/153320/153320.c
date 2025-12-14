/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_5;
        var_13 ^= (((((var_0 * (var_12 * var_2)))) ? var_0 : var_5));
        arr_3 [i_0] [i_0] = var_6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = (max(var_14, (9 / 18446744073709551606)));
            var_15 = var_7;
        }
    }
    var_16 |= (((-2095887194822791429 / var_6) & ((((var_5 ^ var_7) ? var_10 : var_8)))));
    var_17 += ((((((((var_5 ? var_2 : var_6))) ? (var_4 - var_2) : ((var_10 ? var_7 : var_9))))) / ((((18446744073709551615 ? 18 : 18446744073709551594)) - (((var_7 ? var_10 : var_1)))))));
    #pragma endscop
}
