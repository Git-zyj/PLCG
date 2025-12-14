/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = var_12;
                    arr_8 [1] [i_1] [i_2] [1] = (arr_7 [i_2 + 2] [i_2 + 2] [i_2]);
                    var_20 -= (11853795978304937313 * -28831);
                    arr_9 [1] [1] [i_2] [1] = -28842;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_21 ^= ((28841 ? 5043 : -5044));
        var_22 -= var_9;
        arr_13 [i_3 - 1] = (13933390183525422483 - ((5038 ? (arr_1 [i_3] [i_3 - 1]) : (arr_4 [i_3 - 1] [i_3 - 1]))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] = ((((((arr_19 [i_4] [i_5] [i_6]) ? (arr_22 [i_5] [i_5] [i_6] [16] [i_7] [i_7]) : (!-5038)))) ? ((((1051403701530002768 && (((23361 ? (arr_14 [i_4]) : (arr_19 [i_4] [i_5] [i_6])))))))) : 6544803477581988092));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_23 = (arr_28 [i_4] [i_5] [i_6] [i_4] [i_7] [i_8] [i_8]);
                                var_24 = (28830 ? -32764 : 0);
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                arr_31 [i_9] [i_4] [i_6] [i_4] [i_4] = -28838;
                                var_25 ^= 5038;
                            }

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                var_26 = arr_14 [i_4];
                                var_27 = var_3;
                                var_28 = ((23362 ? 32754 : 32754));
                                var_29 &= ((0 ? -28831 : 3187057343129105430));
                                var_30 = ((6555838490822843495 ? 18056 : 1));
                            }
                            var_31 = (((arr_17 [i_4]) ? (((arr_30 [i_4] [i_6] [i_5] [i_4]) ? (arr_30 [i_4] [i_5] [i_6] [i_7]) : (arr_30 [i_6] [i_6] [i_6] [7]))) : 1));
                            var_32 = (((1 * 0) - (arr_32 [i_4] [i_5] [i_5] [22] [i_7])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_33 = (min(var_33, -28831));
                    var_34 = (((((0 - (arr_20 [i_4] [i_5] [i_4])))) ? 1 : (arr_38 [i_4] [i_5] [1] [i_4])));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            arr_43 [i_4] [i_5] [i_4] [i_13] = ((1 ? (281474976710144 && -23361) : (arr_15 [i_4] [i_4])));
                            arr_44 [i_4] [i_4] [i_12] [i_13] = ((var_9 ? -32754 : (arr_38 [i_4] [i_4] [i_4] [i_4])));

                            for (int i_14 = 0; i_14 < 25;i_14 += 1)
                            {
                                var_35 = (((((var_2 ? var_12 : 11890905582886708120))) ? ((-28831 ? -19620 : 0)) : (((var_12 && (arr_38 [i_4] [i_13] [i_12] [i_4]))))));
                                arr_49 [i_4] [i_5] [i_12] [i_12] [i_4] [i_5] = 1;
                            }
                            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                            {
                                arr_53 [i_4] [i_5] [i_12] [20] [i_13] [i_5] [i_5] &= var_4;
                                var_36 &= (((((var_17 - (((arr_18 [i_4] [i_13]) - var_3))))) * 7076342800397067414));
                                arr_54 [i_4] [i_5] [i_5] [i_4] [i_15] = 1289;
                            }
                            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                            {
                                var_37 *= (((arr_17 [i_13]) ? (arr_27 [i_4] [i_5] [i_12] [i_13] [i_16]) : 896518659083566703));
                                arr_59 [i_16] [i_4] [i_12] [i_4] [i_4] = ((32754 ? (arr_22 [i_4] [i_5] [i_5] [i_12] [i_13] [13]) : 32754));
                                var_38 = ((1 ? ((var_9 ? (arr_50 [i_4] [i_5] [16] [i_12] [i_12] [i_13] [i_16]) : 7961419705277652055)) : (((var_13 ? (arr_16 [i_4]) : (arr_50 [i_4] [i_5] [i_5] [i_12] [i_12] [0] [i_16]))))));
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                            {
                                var_39 = (max(var_39, var_5));
                                arr_62 [i_4] [i_4] [i_4] [i_4] = var_1;
                                arr_63 [i_4] [i_5] [i_4] [i_17] = arr_21 [i_4] [i_5] [i_13] [i_17];
                            }
                        }
                    }
                }
                var_40 = 1;

                /* vectorizable */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 23;i_20 += 1)
                        {
                            {
                                arr_71 [i_4] = var_15;
                                var_41 = arr_19 [i_5] [i_20 - 1] [i_19];
                                var_42 = ((-32755 ? 30655 : 21355));
                                var_43 = arr_39 [i_4];
                                var_44 = (arr_48 [i_20] [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_20 + 1] [8]);
                            }
                        }
                    }
                    var_45 = (min(var_45, (arr_24 [i_4] [i_4] [i_5] [i_5] [i_18] [i_18])));
                    var_46 -= (((arr_51 [i_4]) ? var_7 : var_14));
                }
            }
        }
    }
    var_47 = var_8;
    #pragma endscop
}
