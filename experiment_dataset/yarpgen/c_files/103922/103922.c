/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103922
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

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = var_9;
                    var_17 = (min(var_17, (((var_13 <= (arr_7 [i_0] [14]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_0] [i_1] [i_3] [i_3] = ((!(!-6856744379661006014)));
                                var_18 = (min(var_18, ((((!var_5) ? (((186272237184906237 ? var_12 : var_4))) : var_7)))));
                                var_19 = (max(var_19, ((0 ? var_0 : 8117120153739819807))));
                            }
                        }
                    }
                    var_20 = ((443938017 ? (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2]) : (((var_12 ? var_1 : 103)))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = var_14;

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_21 = (min(var_21, (arr_18 [i_5 + 2] [i_5 + 1] [12])));
                        var_22 = (var_8 ? var_4 : var_2);

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_23 = (max(var_23, 129));
                            var_24 += (((var_3 ? var_6 : 10)));
                        }
                        var_25 = ((var_14 >> (var_2 - 236)));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_26 = -126;
                        arr_26 [i_0] [i_0] = ((((((arr_2 [7] [0] [0]) << (var_5 - 9794518615793548871)))) ? (arr_9 [i_0] [i_8] [i_5 + 2] [i_8]) : 4423904161765893988));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_27 -= ((21138 ? (arr_21 [i_0] [i_9] [i_5] [i_9]) : var_14));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [10] [i_0] = var_10;
                            var_28 ^= (((((var_5 ? var_7 : (arr_27 [i_10] [i_9] [i_5 + 1] [i_1] [i_0])))) ? var_1 : (var_1 >= 1116980227)));
                            var_29 = (var_8 != 39);
                        }
                        arr_32 [i_0] [i_1] [i_5] [11] = var_13;
                    }
                    arr_33 [i_0] [i_0] [i_0] = (((arr_21 [i_5 + 2] [i_0] [i_0] [i_5 + 2]) & var_15));
                    arr_34 [i_0] [i_1] [i_0] [i_1] = -var_4;
                }
                var_30 = (((max(var_4, (((10881211015283954240 ? var_6 : var_1))))) > (arr_7 [i_0] [i_0])));

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_31 += ((max(var_12, (!var_4))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_43 [i_0] [i_1] [i_1] [i_11] [i_0] [i_1] = (-8117120153739819784 ? -4166 : -4423904161765893988);
                                var_32 = (max((0 | 44408), var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_33 = ((var_15 ? (-9223372036854775807 - 1) : (min(var_4, var_10))));
                                var_34 -= (((((var_1 + (arr_35 [i_0] [i_0] [i_0] [i_14])))) <= var_5));
                                arr_50 [i_0] [i_0] = (max(((min(-1, var_12))), 2265797864340270565));
                            }
                        }
                    }
                }
                for (int i_16 = 4; i_16 < 15;i_16 += 1)
                {
                    arr_53 [i_0] [i_1] [i_0] = (min(9223372036854775796, var_4));
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                arr_59 [i_18] [i_18] [6] [6] [6] &= (max(var_6, var_13));
                                var_35 = var_6;
                            }
                        }
                    }
                }
                var_36 = 4423904161765894001;
            }
        }
    }
    var_37 = (((max(-4423904161765894004, 21115)) != (((((4 ? -9223372036854775796 : 8117120153739819807)))))));
    #pragma endscop
}
