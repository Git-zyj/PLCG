/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) ? var_9 : ((5112 ? var_12 : (arr_3 [i_0])))));
        arr_5 [i_0] = (((arr_1 [i_0] [i_0]) < (-32767 - 1)));
        var_18 = (arr_0 [i_0] [i_0]);
    }
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {

                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_2] [i_4] [i_3] = (max((((!(arr_14 [i_3 + 1] [13] [i_3 + 2] [i_4 - 1])))), (((arr_14 [i_3 + 1] [0] [i_3 + 2] [i_4 - 1]) ? 286857759 : (arr_12 [i_3 + 1] [i_3] [i_3 + 2])))));
                        arr_18 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] &= (arr_2 [i_2]);
                        arr_19 [i_1] [i_2] [i_3 - 1] [i_4] = -23508;
                        var_20 = (arr_11 [i_3 + 2] [i_3 + 2] [i_4 - 2]);
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_2] [i_6] = (max(((((max(var_4, var_13)) <= ((var_9 ? 112 : var_17))))), (arr_8 [i_3 + 1])));
                            var_21 = (((arr_22 [i_1] [i_3 + 1] [i_3] [i_3 + 2]) ? var_4 : var_4));
                            arr_26 [i_6] = ((((var_11 != (min(-38, var_15)))) ? var_14 : var_7));
                        }
                        var_22 = ((+(((arr_9 [i_3 + 1] [i_3 + 1]) % 4294967279))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_23 = var_15;
                            var_24 = (max(var_24, (arr_16 [i_1] [i_2] [i_7] [15] [i_3 + 1])));
                            arr_29 [i_1] [i_2] [i_2] [i_5] [7] = (var_15 - var_7);
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_25 = 16384;
                            var_26 |= (arr_12 [i_1] [i_1] [i_1]);
                            var_27 = ((min(4294967295, 24558)));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_37 [i_1] [i_2] &= 4294967273;
                            arr_38 [i_1] [i_2] [i_3] [i_2] [i_9] = ((!((((var_8 + 9223372036854775807) << (2685049554 - 2685049554))))));
                            arr_39 [i_1] [i_2] [i_3 + 1] = (min((((!((max((-9223372036854775807 - 1), (arr_12 [i_1] [10] [i_3]))))))), (arr_34 [i_1] [i_2] [i_3] [i_9])));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_28 += var_13;
                        var_29 = var_8;
                    }
                    var_30 = ((min((arr_15 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1]), var_4)));
                }
                arr_42 [i_1] [14] = ((((max((min((arr_30 [6] [i_2] [6] [i_2] [9]), var_7)), 1334877029))) ? (min(((max((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]), var_6))), (min((arr_8 [i_1]), 44584)))) : (max((arr_20 [i_1] [i_1] [i_2] [i_2]), ((var_10 ? var_0 : var_16))))));

                for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    var_31 = var_11;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_53 [i_11] [3] [i_11] [i_13] = max(var_5, ((((arr_24 [1] [1] [i_11 + 2] [i_11 - 1] [1]) ? (arr_40 [i_1] [i_12] [i_11] [12] [i_11 + 1] [i_11 + 1]) : (arr_24 [i_11] [12] [i_11 + 1] [i_11 + 1] [i_11])))));
                                arr_54 [i_1] [i_11] = (arr_34 [i_13] [i_13 - 1] [i_13] [i_13 - 1]);
                                var_32 = (max(var_32, 2959551858));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    arr_57 [i_2] = ((var_17 << (((arr_12 [i_14 + 3] [i_14 + 1] [i_2]) - 1213671929))));
                    arr_58 [i_14] [i_2] [i_14] [i_1] = ((var_9 ? var_5 : (((2231197217 ? var_12 : 1334877029)))));
                    arr_59 [i_1] [i_1] [1] [i_1] = (((arr_14 [i_2] [i_14 + 1] [i_14 + 1] [i_14 - 1]) ? (arr_14 [i_2] [i_14 + 1] [i_14] [i_14 - 1]) : (arr_14 [5] [i_14 + 1] [i_14] [i_14 - 1])));
                    var_33 = (40977 + var_14);
                }
            }
        }
    }
    #pragma endscop
}
