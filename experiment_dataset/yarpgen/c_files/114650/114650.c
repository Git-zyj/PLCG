/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_17 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (~1);
        var_19 = ((((var_7 ? (arr_4 [i_1]) : (arr_4 [i_1]))) <= (arr_3 [i_1])));
        var_20 = 883495559;
        var_21 = var_13;
    }
    var_22 = (min(var_22, ((((((~4194303) | (~var_12)))) ? var_10 : (~4194315)))));
    #pragma endscop
}
