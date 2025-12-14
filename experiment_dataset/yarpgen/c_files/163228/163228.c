/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (((((var_10 ? var_7 : var_10))) ? ((64 ? 50 : 70)) : var_4));
                    var_13 &= (~70368744177663);
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_14 = (min(var_14, (~-63)));
        var_15 = max(((min(var_2, ((var_0 ? var_1 : var_2))))), (((max(1527049512547026505, 6919667615044671030)) ^ ((max(var_1, var_6))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_16 = ((((((min(var_1, var_6))) ? (var_0 / var_5) : var_9)) * (1 < var_4)));
                        var_17 = ((-(max((max(17528054571113480458, var_3)), var_0))));
                    }
                }
            }
        }
        var_18 = (max(var_18, (((((((var_4 ? var_10 : var_5)) ? ((-75 ? -63 : 63)) : (!var_8))))))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_21 [i_8] [i_8] = var_2;
        var_19 = (max(var_19, ((min(57, -63)))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                {
                    var_20 = ((61 ? ((max((~var_1), (~-64)))) : ((~(-52 ^ 4092)))));
                    var_21 = var_10;
                    var_22 = ((((min((((1 ? 813 : 57))), -6506213366939089378))) || ((!((max(var_9, var_6)))))));
                }
            }
        }
        var_23 = (max(var_23, (~var_10)));
        var_24 = (max(var_24, (((((max(16875, ((min(64, -61)))))) ? (((((var_7 ? var_7 : var_0))) ? (((max(var_0, var_4)))) : (max(var_6, var_2)))) : var_8)))));
    }
    var_25 = (((((!(!var_6)))) < ((~(var_4 / var_4)))));
    var_26 = (((~((var_3 ? var_6 : var_6)))));
    var_27 = ((var_3 ? var_0 : var_10));
    #pragma endscop
}
