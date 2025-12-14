/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((~(~var_9)));
        var_18 = (max(var_18, ((((((var_8 ? var_11 : -var_14))) ? var_7 : (((~var_13) ? var_7 : var_4)))))));
        arr_2 [i_0] [i_0] = var_8;
        var_19 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_20 = var_6;
                    arr_11 [i_1] [i_1] [i_1] = var_11;
                }
            }
        }
        var_21 = ((var_4 ? var_13 : var_15));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        arr_15 [i_4 - 1] [i_4 - 1] &= (~var_2);
        var_22 = ((var_13 ? var_3 : var_11));
        arr_16 [i_4 - 1] [i_4 + 2] |= ((var_12 ? var_8 : var_5));
    }
    var_23 = ((((((((var_0 ? var_14 : var_11))) ? var_3 : var_0))) ? (~var_12) : var_12));
    var_24 = var_8;

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_25 = ((-var_1 ? var_2 : var_4));

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_26 = (((((var_0 ? var_5 : var_15))) ? (~var_10) : ((var_4 ? var_16 : var_11))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_27 = ((-((var_9 ? ((var_16 ? var_5 : var_4)) : var_3))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_28 = ((var_4 ? ((var_3 ? var_9 : var_6)) : var_15));
                            arr_28 [i_5] [i_5] [i_6] [i_7] [i_5] [i_5] [i_9] = -var_14;
                            var_29 = (((((~((var_10 ? var_15 : var_11))))) ? ((var_6 ? var_5 : var_6)) : (~var_2)));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_30 = (~var_13);
                            var_31 = var_0;
                            var_32 = var_2;
                        }
                        var_33 = ((!(!var_14)));
                    }
                }
            }
        }
        arr_31 [i_5] = ((var_11 ? (~var_9) : ((var_3 ? var_11 : var_4))));
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1)
    {
        arr_36 [i_11] = (((((var_0 ? var_7 : var_8))) ? ((var_9 ? var_10 : var_9)) : ((var_3 ? var_7 : var_2))));
        var_34 = var_6;
        arr_37 [1] = var_6;
    }
    #pragma endscop
}
