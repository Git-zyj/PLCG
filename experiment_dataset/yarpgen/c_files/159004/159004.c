/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0 + 1]);
        var_20 -= ((((arr_0 [11] [i_0]) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0] [i_0 - 2]))));
        arr_3 [i_0 + 1] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (max(var_21, ((((var_9 ? 14 : var_14))))));
        var_22 = ((((((-80 || (arr_4 [i_1] [i_1]))))) & (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [10] [10])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_23 = (min(var_23, var_8));
                    var_24 = ((235 ? (((arr_5 [i_1] [i_2 - 1]) | var_1)) : (arr_0 [i_1] [16])));
                    arr_15 [i_1] = (arr_5 [4] [i_2]);
                }
            }
        }
    }
    var_25 ^= ((var_19 ^ ((var_8 ? var_13 : var_12))));
    var_26 = (min(var_26, ((((((1 != var_0) < (var_19 | var_9))) ? ((17033303410010816123 ? var_15 : 12286)) : var_7)))));
    var_27 = var_1;
    #pragma endscop
}
