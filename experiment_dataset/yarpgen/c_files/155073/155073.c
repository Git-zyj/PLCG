/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0 + 1] [i_0 + 1]) ^ -2240856876936152370));
        arr_4 [i_0] [i_0] = (!var_11);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = (!var_2);
        arr_9 [i_1] = 14271658351538803049;
        arr_10 [i_1] = ((-(arr_7 [i_1 + 3])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_3] [i_2 + 1] [i_1] = ((279411162176600919 >= (arr_15 [i_2 - 1] [i_1] [5] [i_4])));
                        arr_20 [i_1] [i_1] [i_1] = 21145;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_25 [i_1] = ((-(arr_22 [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2] [i_1])));
                            var_13 = var_6;
                            var_14 += -31246;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_38 [i_10] [i_6] [i_6] [i_6] = (((((4017034841 ? 13015667650659118634 : 2394786380))) ? -1373210893 : ((var_2 ? var_4 : 2394786380))));
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = 1900180916;
                                var_15 = -8;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_16 *= -4505876920345247621;
                        var_17 = 1;
                        var_18 = -224;
                        var_19 = (arr_34 [i_6] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            arr_48 [i_6] [i_7 + 1] [i_8] [i_7] [i_6] = 127;
                            var_20 += ((~((3554210625 ? 21143 : var_1))));
                        }
                        var_21 = (((arr_46 [i_6 + 1] [i_6 + 1] [i_6 - 4] [i_6] [i_6]) / (arr_46 [i_6 - 4] [i_7] [i_7] [i_6] [i_6 - 4])));
                        arr_49 [i_6] [i_6] [i_6] [i_6] = (!var_2);
                        var_22 = -3963208382;
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_6] [i_7] [i_7] [i_8] [i_6] [i_14] = (var_10 & 16256);
                        var_23 = var_9;
                        var_24 = (min(var_24, (((-(arr_35 [i_6] [i_7] [i_8] [3] [i_14]))))));
                    }
                    var_25 += (((~var_10) ? var_7 : 4294967295));
                }
            }
        }

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            arr_57 [i_6] = (arr_41 [i_6] [i_6] [i_6] [i_15]);

            for (int i_16 = 1; i_16 < 23;i_16 += 1)
            {
                arr_60 [i_6] = (((((2394786380 ? var_4 : 21158))) ? ((-31246 ? 4294951040 : 18446744073709551615)) : 3963189403272026671));
                arr_61 [i_6] [i_15] [i_6] = (((arr_34 [i_16 + 2] [18] [i_6 + 3] [1] [21] [1]) ? var_2 : (arr_34 [i_16 - 1] [i_16] [i_6 + 2] [i_6] [i_6] [i_6])));
            }
        }
        for (int i_17 = 2; i_17 < 23;i_17 += 1)
        {
            var_26 = (max(var_26, var_4));
            arr_66 [i_6] [i_6] = (((arr_40 [i_6]) - (arr_47 [i_17] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_17 - 1])));
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 24;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    {
                        arr_71 [i_6 - 1] [i_17] [i_6] [i_19] = (((arr_36 [i_19] [i_17] [i_17 + 1]) ? 21152 : 120));
                        var_27 -= (((arr_51 [i_6 - 1]) ? -1828119319 : (-2147483647 - 1)));
                        arr_72 [i_6] = ((65535 ? 18167332911532950697 : (arr_63 [i_17 + 1])));
                        var_28 = (((arr_70 [i_6] [i_6] [12] [i_6]) >> (((arr_37 [i_17 - 1] [i_18 + 1]) + 121))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 1; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 22;i_22 += 1)
                {
                    {
                        var_29 = (min(var_29, (((279411162176600907 ? ((255 ? var_8 : var_10)) : (var_2 & var_5))))));
                        var_30 = (((arr_36 [i_22 + 2] [i_20 - 1] [i_6 + 2]) ? (arr_36 [i_22 + 2] [i_20 + 2] [i_6 + 1]) : var_11));
                        var_31 = (min(var_31, 31263));
                        arr_80 [i_22 - 2] [i_22 - 2] [i_22] [i_22] [i_6] = 31246;
                        var_32 = var_5;
                    }
                }
            }
        }
        arr_81 [i_6] = (((arr_67 [i_6] [i_6] [i_6 - 1] [i_6 - 3]) ? (arr_67 [i_6] [i_6] [i_6 + 2] [i_6]) : var_5));
    }

    /* vectorizable */
    for (int i_23 = 1; i_23 < 10;i_23 += 1)
    {
        var_33 = (~4294951040);
        arr_84 [i_23 + 1] [i_23] = var_1;
        arr_85 [i_23] [i_23] = -4337;
        arr_86 [i_23] = -52;
    }
    #pragma endscop
}
