/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (112 <= -6660354841854541729);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((min(0, 667745202)) == (arr_1 [i_0] [i_0])));
        var_19 &= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 -= (arr_2 [i_1]);
        arr_4 [i_1] = (arr_3 [i_1]);
        var_21 = 1;
        var_22 ^= ((!(arr_2 [i_1])));
    }
    #pragma endscop
}
