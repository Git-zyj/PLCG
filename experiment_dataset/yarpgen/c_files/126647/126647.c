/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((!var_10) ^ 23136);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_2] [i_0] [i_0] = var_0;
                    arr_7 [i_0] [i_0] [8] [i_0] = (var_13 > var_11);
                    var_20 = (!var_2);
                    var_21 = (min(var_21, (var_9 ^ 76)));
                    var_22 = (31 * var_2);
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    var_23 -= -1628576556;
                    var_24 += var_5;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [10] [10] [i_4] [i_4] |= ((var_4 < ((((var_1 ? var_4 : 426855507)) - (((var_14 ? var_10 : var_16)))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_25 = (min(var_25, 1));
                        var_26 &= var_7;

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_4] [11] [6] = 1628576556;
                            var_27 = (var_9 / var_14);
                            arr_23 [1] [0] [i_0] = (-1628576556 / 18051);
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [10] [6] [i_7] = var_4;
                            var_28 |= var_13;
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_29 |= ((var_17 ? var_8 : 1628576546));
                            arr_29 [i_1] [i_0] [i_0] [i_1] [i_8] = ((var_11 ? var_3 : (var_8 + 0)));
                        }
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            arr_34 [i_0] [9] [i_4] [i_1] [i_0] = (((var_5 < 28) * var_4));
                            var_30 = (var_12 <= 1628576567);
                            arr_35 [i_4] [i_4] [i_4] [4] [i_0] = ((var_4 >> (-1628576567 + 1628576592)));
                            var_31 -= ((var_16 || (var_17 && 31)));
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_32 = var_4;
                            arr_38 [8] [i_1 - 2] [8] [i_9] |= (((!-1628576556) ? var_8 : var_12));
                        }
                        var_33 = (max(var_33, (((min((max(var_6, 214378260)), var_17))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [1] [i_4] [i_0] [3] [i_4] = 30823;
                        arr_44 [i_0] [i_4] [i_0] [i_0] [i_0] = var_15;
                        var_34 = (max(var_34, 251));
                    }
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        arr_48 [3] [i_0] [i_0] [11] = (((!var_13) || (1 && 23100)));
                        arr_49 [i_0] [14] [14] [14] = var_10;
                        var_35 = var_8;
                        var_36 = (var_1 * var_8);
                        var_37 = (var_3 != var_0);
                    }
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_38 += var_3;
                    var_39 = (min(1, 255));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 16;i_16 += 1)
                        {
                            {
                                arr_61 [i_0 + 1] [i_0] [i_0] = ((-126 ? ((((var_8 ^ var_15) > (var_2 / 58)))) : (((((min(2147483647, var_6))) > ((var_10 ? var_13 : var_13)))))));
                                var_40 *= -var_16;
                                arr_62 [i_0] [i_0] [i_0] [i_15] [i_16 - 1] [i_0] [4] = var_11;
                                var_41 = (-747021709 & var_12);
                                arr_63 [i_0] = (max(((var_16 % ((var_16 ? 30811 : var_7)))), ((-4218276497984311013 ? var_3 : var_2))));
                            }
                        }
                    }
                }
                arr_64 [i_0 - 2] [0] |= var_15;
            }
        }
    }
    var_42 = var_0;
    #pragma endscop
}
