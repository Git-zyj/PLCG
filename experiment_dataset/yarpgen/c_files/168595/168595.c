/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_14 = (((((-(arr_0 [i_0])))) ? -0 : ((min(0, var_7)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = min(((((4 ? var_1 : (arr_6 [i_1]))) | (arr_5 [i_1]))), var_6);
        arr_8 [i_1] = (((arr_4 [i_1]) ? ((-762892402 ? 0 : (arr_4 [i_1]))) : 81));
        var_15 -= 0;
        var_16 = (~var_2);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_17 = 24154;
            arr_14 [i_3] [i_3] = ((5 ? -141432636 : -1));
            var_18 = var_13;
            arr_15 [i_3] = var_5;
        }
        var_19 &= (((-2147483647 - 1) ? 0 : (arr_9 [i_2])));
        var_20 *= (~var_3);
        var_21 &= ((-6 ? var_6 : ((var_3 ? var_6 : (arr_13 [10] [10])))));
    }
    var_22 = var_5;
    var_23 = ((-3 ? (min(var_2, var_10)) : (min(var_10, (0 || var_2)))));
    #pragma endscop
}
