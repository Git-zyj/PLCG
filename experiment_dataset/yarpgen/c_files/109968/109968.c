/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_13 *= -0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_14 = (((-3020284964959539127 & var_2) != (arr_5 [i_1])));
        var_15 = (min(var_15, -29882));
    }
    var_16 ^= (max(var_0, (((((min(286, -79))) < var_5)))));
    #pragma endscop
}
