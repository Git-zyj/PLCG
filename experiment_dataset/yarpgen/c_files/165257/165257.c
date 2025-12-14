/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((((var_3 >= var_6) >= (min(var_1, 252)))) ? var_5 : ((~(-24695 || var_8)))));
    var_14 = (min(var_14, (((9159 ? 24 : ((min(var_9, 255))))))));
    var_15 = ((var_6 ? ((16 ? 1782996630 : ((var_11 ? 248 : var_2)))) : var_8));
    var_16 = (((var_12 & 385531059) ? ((var_8 ? ((-43 ? 248 : var_6)) : var_10)) : var_2));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_2 [i_0 + 4])));
        var_17 -= ((0 * (arr_0 [i_0])));
    }
    #pragma endscop
}
