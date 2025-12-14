/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 += var_3;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 &= (var_3 || var_8);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_0 - 1] [i_1] [i_1] [i_0] [i_4] = ((241 ? (arr_9 [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 4] [i_0]) : (arr_9 [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 4] [i_0])));
                            var_16 = arr_4 [i_0 + 1] [i_0] [i_3];
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_17 = ((!(arr_10 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0 + 3])));
                            var_18 -= (!238);
                            arr_19 [i_0 + 4] [i_1] [i_2] [i_3] [i_5] [i_0] = var_6;
                        }
                        var_19 = (1 > (arr_0 [i_0]));
                    }
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    var_20 &= var_13;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 4] = (max((((arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6 - 1] [i_6 + 1] [i_0 + 4]) ? ((82 ? var_10 : (arr_15 [i_7] [i_0 + 1] [i_0 + 3] [i_6 + 1] [i_8 - 1] [i_1] [i_7]))) : (arr_1 [i_0]))), (var_13 + 105463392931848362)));
                                var_21 -= (((((!var_1) + (min(var_5, var_9)))) + var_0));
                                var_22 = 0;
                                var_23 = -22;
                            }
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    var_24 *= (((~var_2) >= var_3));
                    arr_33 [i_0 + 2] [i_0] [i_9 + 1] = ((30 & ((min(var_5, (arr_20 [i_9 - 2] [i_1] [i_9 + 2]))))));
                    var_25 = ((((min(178, (arr_2 [i_0])))) | var_11));
                }
                arr_34 [i_0 + 1] [i_0] = ((((min(var_3, (((var_1 ? var_10 : (arr_13 [i_1] [i_0 + 3]))))))) ? ((max((arr_4 [i_0 + 1] [i_0] [i_0 - 1]), (arr_4 [i_0 + 2] [i_0] [i_0 + 4])))) : (max(231, (((arr_23 [i_0 - 1]) * 1))))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_26 = (((((max((arr_26 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_11 + 2] [i_0 + 2] [i_0 + 4]), (arr_26 [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_12 + 1] [i_12 + 1]))))) ^ (((arr_40 [i_0] [i_10] [i_10] [i_11 + 2] [i_12 + 1] [i_0 - 1]) & var_11))));
                                arr_43 [i_0] [i_11 - 1] [i_10] [i_1] [i_0] = arr_0 [i_0];
                                var_27 += (arr_40 [i_11] [i_1] [i_10] [i_1] [i_11 - 2] [i_12 + 2]);
                                var_28 = (min(var_28, var_13));
                            }
                        }
                    }
                }
                var_29 = (max((((!((var_6 || (arr_11 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])))))), (((arr_26 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 4]) ? ((max(var_3, var_7))) : 22))));
            }
        }
    }
    var_30 = var_12;
    var_31 = var_5;
    #pragma endscop
}
