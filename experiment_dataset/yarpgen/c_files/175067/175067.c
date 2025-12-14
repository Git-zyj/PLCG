/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        var_13 = var_0;
        var_14 ^= (((((var_7 ? var_10 : var_12))) ? var_12 : (((max((1 && 1), (var_11 && 1)))))));
        arr_3 [i_0] = ((!(((var_6 ? var_5 : var_4)))));
        var_15 = min(((4912783819562525235 ? var_8 : -9351)), (1 * var_1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [1] = -var_11;
        arr_7 [i_1] = (~1);
        var_16 ^= var_5;
        var_17 = var_10;
        arr_8 [i_1] = ((var_2 ? ((var_5 ? var_7 : var_1)) : var_6));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 ^= ((var_12 & (~1973)));

        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_19 = ((-1 ? var_6 : ((var_11 ? var_12 : 1))));
            var_20 ^= ((var_12 ? ((var_9 ? var_10 : 0)) : var_11));
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_21 = var_7;
            var_22 = var_0;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_23 = (var_0 - var_3);
            arr_19 [i_2] = (~var_7);
        }
    }
    var_24 = ((0 ? (min(1, ((var_5 ? var_10 : var_3)))) : var_12));
    #pragma endscop
}
