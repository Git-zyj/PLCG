/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= (((((arr_0 [i_0] [i_0]) + (arr_1 [i_0]))) << (((arr_1 [i_0]) - 69))));
        var_19 = (arr_0 [i_0] [i_0]);
        var_20 |= 60012;
    }
    var_21 = 60008;
    var_22 = (((var_15 ? var_9 : (min(-5820266712715489299, -3934614044580517002)))));
    #pragma endscop
}
