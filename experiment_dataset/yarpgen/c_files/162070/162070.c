/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 622004450;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = var_5;
                arr_7 [i_1] [i_1] [i_0] = var_10;
                arr_8 [i_1] [i_1] = 65531;
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_20 = var_13;
        var_21 = var_2;
        var_22 = var_11;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = var_1;
        var_24 = var_6;
        arr_15 [i_3] [i_3] = ((-3334830923634453332 / 2) * (var_8 / var_0));
    }
    #pragma endscop
}
