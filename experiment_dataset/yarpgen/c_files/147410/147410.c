/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = ((((min((arr_3 [i_0] [i_0]), ((318577586867749741 ? var_5 : 1))))) ? (max(((var_13 ? var_16 : var_17)), var_18)) : (((-(~var_7))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_19 |= ((9697 ? (-8391 > 5) : 9683));
                        var_20 = (((((arr_0 [i_1]) / var_7)) << ((((8891725219683913483 ? var_8 : 1)) - 29725))));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((~(-4580 <= var_3)));
                            var_21 = 22339;
                            var_22 = (--9706);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_23 |= (((arr_11 [i_3 - 2]) ? (arr_17 [1] [i_1] [5] [i_1] [i_3 + 1] [i_1]) : 0));
                            var_24 = (((var_0 & -9706) | -22337));
                        }
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [i_6] = (~var_5);
                            var_25 = ((~(~var_14)));
                        }
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            arr_24 [i_0] [12] [i_3 + 1] [4] = var_0;
                            var_26 = ((((var_13 ? var_13 : -8332983883355972530)) + var_1));
                            arr_25 [8] [8] [i_2] [i_2] [12] [i_2] = (arr_19 [i_0] [i_2] [i_3 + 1] [i_3] [i_7] [i_3] [i_7 + 1]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_27 += (((((((((-22000 ? -5495889922312280360 : 0)) + 9223372036854775807)) << ((14315 ? var_12 : -26583))))) ? (min(-8784968834997785936, (arr_18 [i_1] [6] [i_8] [i_9]))) : (((((12715 ? 0 : -13)) << (6899 - 6861))))));
                            var_28 -= 65524;
                        }
                        var_29 |= max((((max((arr_12 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0] [i_8]), (arr_6 [i_8]))) >> (22342 - 22294))), ((min((arr_0 [i_2]), 24477))));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = (max(((-(max(0, -5495889922312280353)))), ((((~var_3) & var_8)))));
                        var_31 = ((-((var_4 ? var_7 : 23783))));
                        arr_33 [i_10] [i_10] = ((~(((((min(-37, 2481175100147549361))) || 6377611980330155086)))));
                    }
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_32 = (min(((max(-26683, 0))), (((arr_23 [i_1] [i_11 + 1]) ? -5495889922312280334 : -var_1))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_33 = 0;
                                var_34 |= var_7;
                                var_35 -= -14389;
                            }
                        }
                    }
                }

                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    arr_43 [i_0] [i_14] [i_0] [i_14] = ((arr_11 [i_1]) & ((-(arr_35 [i_0] [i_14 - 1] [i_14 + 1]))));
                    arr_44 [2] [14] [i_1] [i_0] = 18771;
                }
            }
        }
    }
    var_36 = var_11;
    var_37 ^= 7407328854366481843;
    var_38 = 24625;
    #pragma endscop
}
