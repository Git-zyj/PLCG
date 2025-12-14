/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 += (((var_18 - (arr_0 [i_0 - 3] [i_1]))));
                arr_6 [i_0] = (min((51792 % var_13), (~var_4)));
                arr_7 [i_0] = var_15;
                arr_8 [i_0] [i_0] = (arr_1 [i_0 + 1] [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_20 &= 60378;
        arr_11 [i_2] &= -124;
        var_21 = arr_2 [i_2] [i_2];
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] = 3670863139;
        var_22 ^= (!-8394272947317320163);
        arr_15 [2] &= (min(((57840 ? (arr_12 [i_3]) : var_1)), 16054532464520336240));
    }
    #pragma endscop
}
