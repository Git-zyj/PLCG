/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_11 = var_4;
                        arr_13 [i_0] [i_2] [i_0] [i_1] [i_0] = var_8;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_12 = (!-var_2);
                            var_13 = (-(max(var_5, var_3)));
                            var_14 = (var_9 / (((max(var_0, var_9)) - var_0)));
                            var_15 = (max(var_15, (max((!var_7), (~var_3)))));
                            var_16 = (~(var_6 == var_5));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_17 = -var_2;
                            var_18 |= var_8;
                            var_19 = -var_1;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_20 = ((var_2 && (!var_2)));
                            arr_25 [i_0] [i_0] = (-(!var_0));
                            var_21 = ((var_9 ? var_8 : var_3));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_1] [1] [i_1] = (((~var_7) ? ((~((var_3 ? var_2 : var_4)))) : var_0));
                            arr_29 [i_0] [i_1] [i_1] [i_1] [i_0] = max(((var_8 ? var_1 : var_2)), ((var_8 ? var_5 : var_3)));
                            var_22 = ((min(var_5, var_4)));
                        }
                        arr_30 [i_0] = max(((var_8 ? var_8 : var_7)), var_1);
                        var_23 = min(((var_5 & (var_7 ^ var_3))), ((var_5 ? var_2 : var_8)));
                        var_24 = ((-var_2 ? (max(((var_3 ? var_0 : var_5)), -var_8)) : ((((((var_4 ? var_3 : var_2))) || (((var_4 ? var_8 : var_6))))))));
                        arr_31 [i_0] = ((!((((((var_2 ? var_2 : var_1))) ? ((var_7 ? var_7 : var_3)) : var_9)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_25 = var_8;
                        var_26 = ((var_8 ? var_8 : var_4));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_1;
                        var_28 = ((var_6 ? var_9 : var_0));
                        arr_37 [i_0] [i_0] [i_2] [20] = -var_1;
                    }
                    arr_38 [i_0] [i_0] = ((((~var_9) ? ((var_6 ? var_4 : var_6)) : var_0)));
                }
            }
        }
    }
    #pragma endscop
}
