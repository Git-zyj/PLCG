/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_10 = (min((arr_0 [i_0 - 2]), ((~(arr_1 [i_0 + 2])))));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_11 = (min(var_11, (((((max(((11899 ? (arr_1 [i_0 + 3]) : 602686676)), (((32512 / (arr_0 [i_0]))))))) ? (max(32539, 6759706302508603392)) : (!-2505693723960652107))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    var_12 = (arr_5 [i_2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_13 |= 3765107739510265176;
                                var_14 = (max(var_14, (arr_5 [i_4])));
                                var_15 |= 5813;
                            }
                        }
                    }
                    arr_15 [i_1] |= (arr_13 [i_1] [i_2 + 1] [2] [i_3] [i_3]);
                    arr_16 [i_2] [i_2] [i_2] [i_3] = 2378;
                }
            }
        }
        arr_17 [i_1] [i_1] = var_3;
        var_16 |= max(var_0, (((16777215 ? var_5 : ((var_2 ? (arr_11 [i_1] [i_1] [i_1] [4] [i_1]) : var_3))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_17 = (max(((((arr_8 [i_6] [i_6] [i_6] [i_6]) & (arr_8 [i_6] [i_6] [i_6] [i_6])))), (min((((arr_4 [i_6] [i_6]) ? (arr_5 [i_6]) : var_7)), (arr_19 [i_6] [i_6])))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_18 = (arr_10 [i_6] [i_7] [7]);
            var_19 |= (arr_10 [i_6] [9] [i_6]);
        }
        var_20 = (max(var_20, -32512));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_21 |= ((((arr_30 [i_6]) | (arr_30 [i_8 - 1]))));
                        var_22 = (max((max(-14039945281304868255, var_3)), -31030));
                        var_23 = 1;
                    }
                }
            }
        }
    }
    var_24 = min((var_5 * var_9), var_7);

    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_25 = (arr_7 [i_11] [i_11]);
        arr_35 [0] |= ((((arr_12 [2]) ? var_6 : var_6)));

        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((arr_3 [i_13 - 1]) ? (arr_14 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2]) : 3765107739510265169)))));
                        var_27 = (max(var_27, var_8));
                    }
                }
            }

            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                arr_48 [i_11] [i_11] [i_12] |= ((1575250652 && (((-30756 ? 17439027178176489742 : 5468190559621034507)))));
                var_28 = ((33554431 ? 2505693723960652096 : (arr_33 [i_11])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_54 [i_11] [i_12 + 1] [i_16] [8] [i_16] |= (arr_28 [i_12 + 1] [i_12 + 1] [i_11] [i_11]);
                            arr_55 [i_17] [i_11] [i_15] [i_15] [i_11] [i_11] = -1;
                            var_29 = 1413;
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
            {
                var_30 = (arr_7 [i_11] [i_11]);
                var_31 |= (arr_24 [i_12 - 2]);

                for (int i_19 = 3; i_19 < 12;i_19 += 1)
                {

                    for (int i_20 = 1; i_20 < 9;i_20 += 1)
                    {
                        var_32 = ((var_8 ? var_8 : (arr_51 [i_18] [i_19 - 2] [i_19] [i_19] [i_20 - 1] [i_18])));
                        var_33 = (((arr_49 [i_20 + 3] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_11]) > var_9));
                    }
                    var_34 = (min(var_34, 21));
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    var_35 = (((-5813 != var_2) ? (((-(arr_34 [i_21])))) : (arr_61 [i_12] [i_12] [i_11] [i_12] [i_12] [i_12] [i_12 - 1])));
                    arr_67 [i_11] [i_11] = (((arr_26 [i_12 - 2] [i_12 - 1]) != (arr_43 [i_12 + 1] [i_11])));
                    var_36 = var_1;
                }
                for (int i_22 = 0; i_22 < 13;i_22 += 1)
                {
                    var_37 |= 1826772114;
                    arr_71 [i_11] [7] [i_11] [i_11] = ((var_0 ? (((-(arr_50 [i_11])))) : ((949052314 ? (arr_46 [i_11] [i_12] [i_12] [i_11]) : 18446744073675997168))));
                    arr_72 [i_12] |= var_9;
                }
                for (int i_23 = 2; i_23 < 10;i_23 += 1)
                {
                    arr_77 [i_11] [i_12] [i_23] [i_18] [i_23] [i_23 - 2] |= (arr_53 [i_12] [i_12 - 1] [i_23 + 3] [i_23] [i_23] [i_23 + 2]);
                    var_38 |= -var_8;
                    var_39 = var_5;
                }

                for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
                {
                    arr_80 [i_11] [i_12] [i_11] [i_24] [i_24] [i_24] = -var_3;
                    arr_81 [i_12] [i_12] [i_12] [i_12] |= (((arr_25 [i_12 - 1] [i_12 + 1]) / var_2));
                    var_40 |= var_2;
                }
                for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
                {
                    var_41 = ((22 ? 2719716663 : -7904));
                    var_42 = (max(var_42, (arr_82 [i_11] [i_11] [i_18] [i_25])));
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 9;i_27 += 1)
                    {
                        {
                            arr_90 [i_11] [i_11] [i_11] [2] [i_12] [i_11] [i_11] |= ((var_8 || (arr_61 [i_11] [i_27 + 4] [i_12] [i_11] [i_27 + 4] [i_12] [i_27])));
                            var_43 |= 10128635388148988576;
                        }
                    }
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 24;i_28 += 1)
    {
        arr_93 [15] = var_7;
        var_44 = (max(var_44, var_7));
    }
    #pragma endscop
}
