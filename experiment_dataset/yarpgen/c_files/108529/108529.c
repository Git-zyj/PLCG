/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 ^= 15425;
        arr_3 [i_0] [i_0] = -705608986370200549;
        var_18 = (max((arr_0 [2]), (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (--15425);
        var_20 = (var_9 && 306279737);
        arr_6 [i_1] = (((arr_4 [i_1]) << (((arr_4 [i_1]) - 118))));
    }
    var_21 = ((var_1 ? var_16 : var_9));
    var_22 *= (var_7 | var_0);
    var_23 &= var_5;
    var_24 = 705608986370200549;
    #pragma endscop
}
