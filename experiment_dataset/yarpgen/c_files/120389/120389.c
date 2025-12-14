/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_20 = (((var_3 - var_15) ? (min(var_18, var_15)) : (var_8 % var_7)));
        arr_3 [i_0 + 2] |= -8087297432352051687;
        var_21 = (min(var_21, var_18));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_22 = ((0 ? 12777 : -2959151653706186736));
                        var_23 |= 5550352360883218200;
                    }
                }
            }
        }
        var_24 = 100;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_20 [i_1] [i_5] [i_6] = ((12777 ? var_8 : (1 & 1)));
                    var_25 = (var_5 ? (((-13050 ? var_8 : var_9))) : (var_2 / var_13));
                    arr_21 [i_1] [6] [i_5] [i_6] = var_4;
                }
            }
        }
        var_26 = (min(var_26, var_8));
    }
    var_27 = var_18;
    var_28 = ((((max(((var_6 ? var_14 : var_15)), var_8))) ? var_7 : ((-var_10 ? (11560 - 2337182005) : -var_15))));
    var_29 = ((var_11 ? 8646282692171893652 : (((51904 >> (var_4 - 650))))));
    #pragma endscop
}
