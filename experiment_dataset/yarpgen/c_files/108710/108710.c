/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_11);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (min(-var_12, (arr_2 [i_0] [i_0])));
        var_18 = (((((-(arr_0 [i_0])))) ? (min(var_6, 3099709114)) : ((min(var_2, var_0)))));
        var_19 = ((min((max(var_1, var_13), 127))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = -122;
        var_21 += var_3;
    }
    var_22 = ((var_1 >= ((min(118, var_10)))));
    var_23 = ((((((min(var_0, -127))) | (17 | var_12))) & (((~(min(var_14, var_0)))))));
    var_24 = var_15;
    #pragma endscop
}
