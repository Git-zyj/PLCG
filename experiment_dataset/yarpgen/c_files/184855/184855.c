/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min((!var_0), ((var_4 ? var_11 : var_7))));
                                var_15 &= 4123224335;
                                var_16 = (((var_8 == var_4) ? var_10 : (!var_2)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [18] = (((var_0 >= var_4) >= (max(((var_9 ? var_13 : var_5)), (0 - 98287421)))));
                            var_17 = (var_7 <= var_3);
                            var_18 = (max(var_18, 70));
                            arr_19 [i_0] [i_0] [i_6] = (!var_2);
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] = (!var_2);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_7] [0] [i_2] [i_1] [i_1] [i_0] [i_0] = (((~(~var_6))));
                            var_19 = ((max(var_9, -var_10)));
                            var_20 = (((((var_4 / ((min(var_12, var_3)))))) ? var_1 : var_9));
                            var_21 = (!var_7);
                        }
                        var_22 = (((var_5 ? var_3 : var_0)));
                        arr_26 [i_5] [i_2 - 2] [i_1] [11] [i_0] [i_0] = ((-(max(-var_3, var_0))));
                        var_23 |= (((var_11 + var_7) - ((var_11 ? var_0 : var_5))));
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] |= (((var_7 > var_13) ? ((var_12 ? var_10 : var_5)) : (!var_11)));
                        var_24 ^= (min((!var_8), var_12));
                        var_25 = (min(var_25, (((-(var_9 - var_9))))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_26 = ((!((((!var_1) ? var_1 : var_2)))));
                        var_27 = var_9;
                        var_28 &= (min((!var_12), (var_3 * var_8)));
                        arr_34 [i_0] [i_0] [11] = (((var_12 > var_7) ? var_10 : (((((0 ? 4123224335 : -78))) ? var_0 : var_3))));
                        arr_35 [i_0] [i_1] [i_1] [i_2] [i_9] = var_12;
                    }
                    arr_36 [i_2 - 1] [i_1] [i_0] = (max(-var_8, var_1));
                }
            }
        }
    }
    var_29 = ((~(~var_13)));
    var_30 = (max(2889839227, 2889839244));
    var_31 = var_3;
    #pragma endscop
}
