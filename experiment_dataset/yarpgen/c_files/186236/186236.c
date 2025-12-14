/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_18 ^= (((((var_4 ? var_7 : 3105845770))) / ((var_0 ? ((4557220698674013018 ? -65 : var_2)) : (((1189121526 ? 49152 : 167748982)))))));
                        var_19 ^= var_7;
                        var_20 = (max(3105845770, 1189121526));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] = ((var_16 ? var_4 : var_4));
                        var_21 -= ((var_12 ? (max(var_1, (max(18446744073709551615, var_5)))) : (((min(15548, 2047))))));

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_0] = (((((min(1073741823, 0)) ? var_4 : (!1)))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [9] [i_4] [i_5] = (min((~var_3), (min(1, 12861995212989967298))));
                            var_22 = ((22 ? 1 : 9711390274137493844));
                            var_23 = ((~((max(var_8, var_16)))));
                        }
                        var_24 = -var_14;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_0] [i_6] [i_6] [6] [1] [0] [12] = (!var_16);
                            arr_23 [i_2] [i_0] [i_2] [i_2 + 1] [i_0] [i_1] [i_0] = (max(var_14, (max((var_8 & var_4), var_6))));
                            var_25 = var_15;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 = (min(var_26, 1));
                            var_27 = (max(var_27, (~-var_4)));
                        }
                    }

                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_28 -= (max((((((var_10 ? 1 : 9711390274137493844))) ? var_14 : (var_5 >= var_1))), ((((((min(-80, var_14)))) > ((var_8 ? 3105845770 : var_4)))))));
                        var_29 = (max(var_29, -51));
                        var_30 = (((((var_14 ? -60 : 18446744073709551615))) ? (min(((var_8 ? -91 : (-2147483647 - 1))), (var_1 >= var_13))) : var_10));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_31 = var_5;
                            arr_33 [i_0 - 2] [i_8 + 1] [i_0] [i_8 - 1] [i_9] [i_9] [i_8 + 1] = min(-1637139516, ((718389365 ? var_17 : var_2)));
                            var_32 = (min(var_32, (((((((!1) ? (~10623996992955801508) : 4294967295))) ? 2947092676449246457 : (~9))))));
                            arr_34 [i_0] = ((((((var_3 == 2537592442) ? ((1 ? var_9 : var_17)) : (var_13 / 48571)))) ? 18446744073709551615 : ((var_15 / (18446744073709551606 - var_1)))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_33 = ((1 * (var_13 == var_7)));
                            arr_38 [i_0] [i_10] = 30;
                            var_34 = ((!((min(30, var_2)))));
                            var_35 = (((-127 - 1) ? ((max(var_5, 0))) : ((1 ? -5 : -124))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_36 -= var_12;
                            var_37 = (min(var_37, 1));
                        }
                    }
                    arr_42 [i_2 + 1] [i_2 + 1] [i_2] [i_0] = (((((((3660315381 ? -2147483647 : var_16))) ? var_7 : (((var_16 ? var_5 : 95))))) & var_12));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_58 [i_13] [i_15] [i_14] [11] [i_13] = (max(var_2, (max(28465, 37))));
                                var_38 = (min(var_4, 0));
                            }
                        }
                    }
                }
                arr_59 [i_13] = 8628611080135301660;
                var_39 = (((21097 == (-127 - 1))));
            }
        }
    }
    #pragma endscop
}
