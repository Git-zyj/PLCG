/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = -23096;
        arr_5 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (~var_6);
        var_14 ^= (((-23089 ? var_0 : 65535)));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_15 = var_0;
        var_16 = ((-var_6 ? (var_0 <= var_4) : (((-(arr_7 [i_2 + 1] [1]))))));
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_17 = (((((((arr_7 [i_3] [i_3]) ? 43427 : var_9))) ? ((((arr_6 [i_3] [17]) ? var_1 : var_2))) : -var_4)));
        var_18 ^= var_3;

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_3] [i_3] = var_6;
            var_19 ^= 22118;
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_20 = (((((arr_15 [i_3]) ? 22127 : 2017))) ? ((var_8 / (arr_18 [i_3]))) : (arr_18 [i_3]));
            arr_20 [2] [i_5] [i_5] &= var_2;
            arr_21 [i_3] = (arr_14 [1] [i_5]);
        }
        var_21 = (max(var_21, (((((max(var_2, var_0))) ? (arr_11 [i_3]) : var_6)))));
    }
    #pragma endscop
}
