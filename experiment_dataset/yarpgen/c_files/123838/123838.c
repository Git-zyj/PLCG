/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 *= ((-((-(min(var_0, var_11))))));
                    arr_9 [i_1] = var_7;
                }
            }
        }
    }
    var_15 *= ((~((((max(var_10, var_9))) ? ((var_5 ? var_4 : var_0)) : (!var_3)))));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_6] [i_5 - 1] [i_5] = (min(var_2, (((~var_13) ? (((var_10 ? var_9 : var_9))) : var_8))));
                        var_16 |= (!((((var_5 ? var_2 : var_11)))));
                        var_17 = var_9;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, (~var_6)));
                        var_19 *= ((-((var_5 ? var_10 : var_5))));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_20 = (max(var_20, ((((~var_0) ? (~var_1) : -var_7)))));
                            arr_25 [i_8] [i_4 - 1] [i_5] [i_7] [5] = ((1869672767 ? -163611519920661153 : 63714));
                        }

                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, ((((((var_7 ? var_3 : var_6))) ? (!var_7) : ((var_9 ? var_0 : var_2)))))));
                            arr_29 [i_3 + 2] [8] [i_5] [i_5] [i_9] = var_0;
                            var_22 = ((-((var_1 ? var_6 : var_6))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, -var_6));
                            var_24 = ((-(!var_11)));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_25 = (~var_10);
                            var_26 = (max(var_26, (~var_8)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_27 = ((!((max(((~(-2147483647 - 1))), (~var_5))))));
                                arr_40 [i_3] [i_4] [i_12] [i_12] [i_13] |= (max(((var_2 ? ((var_12 ? var_12 : var_8)) : var_3)), (((~(!var_13))))));
                                var_28 |= ((!((((!var_3) ? (~var_2) : (~var_5))))));
                                var_29 |= ((-((~((var_10 ? var_8 : var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, ((var_5 ? ((((!((min(var_4, var_6))))))) : (((((var_7 ? var_1 : var_4))) ? var_11 : (!var_1)))))));
    var_31 *= ((((!(!var_3))) ? (((((var_6 ? var_8 : var_10))) ? var_6 : ((var_0 ? var_5 : var_8)))) : (max((min(var_2, var_5)), var_5))));
    #pragma endscop
}
