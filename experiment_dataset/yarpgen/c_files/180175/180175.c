/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
        var_17 = -19902;
        var_18 *= var_11;
        var_19 = 27930;
        var_20 = ((-2 ? 36060 : (-127 - 1)));
    }
    var_21 &= (((-120 ? 0 : 1)) << (var_13 - 14090));
    var_22 = ((((((max(var_15, 1))) * var_5)) - ((var_11 ? -99 : var_15))));
    #pragma endscop
}
