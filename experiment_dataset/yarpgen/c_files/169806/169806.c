/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 -= ((var_7 ? var_0 : var_4));
        arr_2 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = ((var_8 ? (!var_7) : (var_8 << var_9)));
        var_14 = (min(((((var_9 ? var_1 : var_6)) | (var_6 != var_3))), -var_3));
        var_15 = (!var_2);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_16 = (min(var_16, -var_4));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_4] = var_8;
                    var_17 = (!var_0);
                }
            }
        }
        arr_16 [i_2] = var_5;
    }
    var_18 -= var_2;
    var_19 ^= var_3;
    #pragma endscop
}
