/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_18 ? var_6 : var_8))) ? var_12 : var_7))) ? var_5 : (((((var_16 ? var_4 : var_10))) ? var_0 : var_16))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= ((((((((var_5 ? var_0 : var_1))) ? var_13 : (((var_2 ? var_9 : var_12)))))) ? ((var_3 ? ((var_17 ? var_18 : var_1)) : var_1)) : ((((((var_3 ? var_16 : var_16))) ? var_17 : var_2)))));
                arr_6 [6] [i_1] = var_16;
                arr_7 [i_0] [i_0] [0] = var_14;
                arr_8 [i_0] [i_0] = (((((var_4 ? var_7 : var_7))) ? (((var_10 ? var_12 : var_14))) : (((((var_11 ? var_4 : var_10))) ? ((var_13 ? var_15 : var_1)) : ((var_9 ? var_18 : var_18))))));
            }
        }
    }
    var_21 = var_11;

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [8] [i_2] = var_11;
        var_22 -= ((var_7 ? var_9 : ((var_10 ? ((var_13 ? var_9 : var_17)) : var_16))));
        var_23 = var_3;
    }
    #pragma endscop
}
