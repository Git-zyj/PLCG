/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [14] = (921021488 && 1);
        var_17 = (~var_11);
        var_18 -= (((max(-2059543338000605200, 127)) * 1));
        arr_3 [i_0] = ((134 ? 65402 : ((((var_11 && -2062297144) && var_13)))));
        var_19 &= (~8191);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = var_6;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_21 ^= 15032;
                            arr_18 [18] [2] [i_3] [i_3] [i_4] = var_14;
                        }
                        for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_4] [i_4] = var_13;
                            var_22 -= ((var_0 ? ((var_6 ? 3964259193268499790 : 65426)) : (912 / var_6)));
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_4] [i_4] = ((48425 << ((((24600 ? 157 : (arr_11 [i_1] [i_1]))) - 153))));
                            arr_25 [10] [i_2] [i_4] = (((var_11 ? 253 : 65386)));
                            arr_26 [18] [i_4] [i_3] [i_4] [18] = var_8;
                        }
                        arr_27 [i_1] [i_2] [i_2] [i_4] = var_16;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_23 = (min(var_23, var_1));
                        arr_31 [1] [i_3] = ((-1 ? (((var_12 ? 162 : -15))) : var_6));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = ((-(226 * var_14)));
                        arr_35 [i_1] [i_1] [i_1 - 1] [i_1] = var_15;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_40 [7] [7] [i_3] [i_10] = ((var_7 ? (((0 >> (var_0 - 53)))) : (((var_9 + 9223372036854775807) << (var_12 - 82)))));
                        arr_41 [18] [i_2] [i_2] [i_2] [18] [i_2 + 1] = 172;
                    }
                    arr_42 [i_1] [i_2 - 2] [i_3] = ((var_15 >> (((~65409) + 65464))));
                    var_25 = -var_0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                {
                    arr_49 [i_1] [i_11] [i_12] [10] = ((arr_36 [i_1 + 1] [i_11 + 1] [i_12]) ? 536870912 : var_2);
                    arr_50 [i_11] [i_11 - 3] [i_12] [i_12] = (arr_13 [i_1]);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_26 = var_2;
                                arr_58 [i_1] [i_11 - 1] [i_12] [i_13] [i_14] = 2917336020;
                                arr_59 [i_1] [i_1] [i_1] [i_1] [i_12] [i_1] = 2585613137;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                arr_67 [i_1] [i_12] [i_12] [i_12] [i_16] = ((var_10 ? (arr_15 [i_1 + 1] [i_15] [8] [i_12 - 1] [0]) : var_3));
                                arr_68 [14] [14] [i_11] [i_12] [i_11 - 1] [1] [i_11 - 1] = 106;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 22;i_18 += 1)
                        {
                            {
                                arr_74 [i_12] = var_7;
                                var_27 = (((var_11 ? var_3 : -4212812684600361272)));
                            }
                        }
                    }
                }
            }
        }
        arr_75 [i_1 - 3] = 5993447530722983271;
    }
    for (int i_19 = 4; i_19 < 22;i_19 += 1) /* same iter space */
    {
        var_28 = ((30 | (var_1 ^ var_10)));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    arr_83 [i_20] [i_20] &= (((2489730383 && (var_4 || 7048))));
                    arr_84 [i_21] [i_20] [i_19] = ((-42546 - ((var_15 ? (var_15 - var_2) : var_11))));
                }
            }
        }
        arr_85 [i_19] = (255 | (((0 ? var_14 : var_0))));
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 21;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 22;i_23 += 1)
            {
                {
                    var_29 = var_14;
                    var_30 = 6251359344124934660;
                    var_31 = var_6;
                    arr_92 [i_22] [i_23 - 2] = var_9;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_24 = 4; i_24 < 22;i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 23;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                {
                    var_32 = (((arr_13 [i_24 - 4]) ? var_8 : var_8));
                    arr_100 [i_24] [i_24] = var_9;

                    for (int i_27 = 2; i_27 < 20;i_27 += 1)
                    {
                        arr_104 [i_24] [i_24] [i_25] [i_24] = 252;
                        arr_105 [i_27] [i_24] [i_24] [i_24] = (8589803520 / var_9);
                        var_33 ^= (((((0 ? var_16 : 30))) ? (var_0 / var_14) : 1267));
                    }
                    for (int i_28 = 4; i_28 < 22;i_28 += 1)
                    {
                        var_34 = (arr_64 [i_25] [20] [i_25] [13] [i_25]);
                        arr_108 [i_25] [i_26] [i_25] [i_25] &= -var_16;
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 23;i_30 += 1)
                        {
                            {
                                var_35 = var_16;
                                arr_115 [i_24] [i_25] [i_26] [i_24] [i_30] = (!7959894415108166653);
                                var_36 -= ((-864691128455135232 ? ((576460683583946752 ? 17095 : 0)) : 65535));
                                var_37 = -var_13;
                            }
                        }
                    }
                }
            }
        }
        var_38 = var_2;
        var_39 ^= 17079;
    }
    var_40 = var_6;
    #pragma endscop
}
