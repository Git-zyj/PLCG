/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 64;
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 4294967289;
        var_13 = ((((max(var_7, 127))) ? (((var_3 ? var_1 : var_8))) : (((127 ? var_8 : var_1)))));
        var_14 *= ((3794715129 / var_8) / -14829);
        var_15 = ((-((3166016796 ? var_8 : var_10))));
    }
    #pragma endscop
}
