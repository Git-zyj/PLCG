/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 = var_7;
        arr_2 [i_0] |= var_10;
        var_13 = var_1;
        var_14 = var_10;
        var_15 = var_4;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = var_10;
        arr_5 [12] &= var_7;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_17 = var_11;
            var_18 = (min(var_18, var_11));
            var_19 = var_8;
        }
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_20 = var_0;
        var_21 = var_0;
        var_22 = var_3;
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_23 = var_2;
        var_24 = var_2;
        var_25 = var_10;
    }
    var_26 = var_8;
    var_27 = var_4;
    var_28 = var_1;
    var_29 = var_7;
    #pragma endscop
}
