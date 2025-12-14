/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_13, var_13)) - var_12)) & ((max(var_17, var_3)))));
    var_20 -= (max(-var_16, ((min(var_10, var_7)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_21 *= (arr_0 [22]);

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            var_22 = (arr_3 [i_0] [i_1 - 1]);
            var_23 += (arr_2 [i_0] [12]);
            var_24 = (arr_3 [16] [i_0 + 1]);
            var_25 = var_8;
        }
        var_26 = (arr_2 [i_0] [i_0]);
        var_27 = var_3;
    }
    var_28 &= var_6;
    #pragma endscop
}
