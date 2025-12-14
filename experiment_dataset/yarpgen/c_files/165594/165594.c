/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_2 [i_0] [i_0];
                    var_17 = (max(var_17, ((max(-1, ((~(var_16 | -70))))))));
                    var_18 = var_6;

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [5] [i_1] [i_1] [i_3] [i_3] = (((min(-var_12, 2147483647))) || var_7);
                        var_19 = var_0;
                    }
                }
                for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_20 += ((+(((arr_6 [i_4] [i_4]) ? (arr_6 [i_4] [i_4]) : var_3))));
                    arr_15 [i_0] [i_1] [i_1] [i_0] = var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = 0;
                                arr_21 [i_1] [i_1] [i_4] [i_4] [i_1] [i_5] [i_6] = var_6;
                            }
                        }
                    }
                    var_22 = (max(var_16, ((min((-231757058 >= var_16), -2396872838289839592)))));
                }

                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    var_23 *= var_15;

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_7] [i_7] [i_8] = (var_11 ^ var_13);
                        var_24 = (min(var_24, var_11));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_25 = (((max((arr_25 [i_0 - 2] [i_1] [i_8] [i_9]), 655428177)) + 123));
                            var_26 |= var_10;
                        }
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_27 = (((var_8 ? var_8 : var_1)));
                        arr_33 [i_0] [i_1] [i_7 + 2] = ((((((var_13 ? var_11 : var_9))) / ((~(arr_1 [i_0]))))));

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_28 |= (((arr_23 [i_0 - 2]) ? (arr_23 [i_0 - 1]) : (((arr_4 [i_0 - 2] [i_10] [i_7 + 2]) ? (arr_23 [i_0 - 1]) : (arr_23 [i_0 - 1])))));
                            var_29 |= (min(var_5, (arr_13 [i_7] [i_0 + 1] [i_7 - 1])));
                            var_30 = (min(var_30, (arr_12 [i_0] [16] [i_10] [i_11])));
                        }
                        arr_36 [i_0] [i_0] [i_1] [i_7] [i_10] = ((-(arr_32 [i_10] [i_7 + 2] [i_7])));
                        var_31 |= ((-(((!((max(var_7, 0))))))));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_32 = (max(var_32, ((min(((0 ? (arr_38 [i_12] [i_0 - 2]) : var_13)), (arr_31 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_7 + 1]))))));
                            var_33 = ((-(((arr_0 [i_0 - 1] [i_0 + 1]) % (arr_0 [i_0 - 2] [i_0 + 1])))));
                            arr_42 [12] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_14;
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_34 = (~59044);
                            var_35 = ((((arr_1 [i_0]) ? var_8 : var_11)));
                            var_36 = ((-(max(var_5, var_12))));
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            arr_47 [i_0 - 1] [i_1] [i_7] [i_12] [i_15] = var_6;
                            var_37 = (min(var_37, var_15));
                            var_38 = max(16587004513331792231, (max((arr_1 [i_0 - 2]), var_5)));
                            arr_48 [i_0] [i_0] [i_1] [i_7 + 2] [i_12] [i_15] [i_15] = (max(655428177, ((~((var_1 ? var_10 : (arr_1 [i_0])))))));
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            arr_52 [i_0] [i_1] [i_1] [i_12] [i_1] = ((var_15 != (((max(var_0, var_2)) << (((((arr_20 [i_0] [3] [13] [i_12] [i_16]) | var_5)) - 1042349994))))));
                            var_39 *= (max(-var_3, ((1 ? 928124732 : 6508340793039839088))));
                        }
                        var_40 = var_1;
                        var_41 += max((max(var_1, var_3)), (max(var_3, (((arr_4 [i_0 - 1] [i_12] [0]) | var_0)))));
                    }
                    arr_53 [i_0] [i_0] [i_1] [i_1] = ((!((max(-21687, -5158510835906659806)))));
                }
                var_42 = (arr_13 [i_1] [i_0] [i_0 - 2]);
            }
        }
    }

    for (int i_17 = 2; i_17 < 23;i_17 += 1)
    {
        arr_56 [i_17] = ((var_0 ? ((5158510835906659809 ^ (arr_55 [i_17]))) : var_14));
        var_43 = (max(((min(141, 65535))), -5377476957389344787));
        arr_57 [i_17] = ((var_16 ? (~-2252899934506762136) : var_12));
    }
    for (int i_18 = 1; i_18 < 16;i_18 += 1)
    {
        arr_61 [i_18] = (--19);
        var_44 = (((min(var_16, (arr_54 [i_18 - 1]))) >= ((((arr_60 [i_18 + 2]) ? var_4 : (arr_60 [i_18 + 2]))))));

        /* vectorizable */
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            arr_66 [i_18] [i_19] [i_18] = ((((((arr_63 [i_18] [i_18] [i_19]) ^ (arr_62 [1] [i_18 + 2] [i_19])))) ? (var_9 >= var_0) : (arr_62 [i_18] [i_18] [i_18 - 1])));
            arr_67 [i_18] [i_19] = ((-2147483619 ^ ((var_13 >> (var_0 + 3521)))));
            arr_68 [i_19] = (((arr_58 [i_18 - 1] [i_18 - 1]) % (arr_58 [i_19] [i_19])));
            var_45 *= ((~(arr_62 [i_18 + 1] [i_19] [5])));
        }

        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            arr_72 [i_20] [i_18] [i_18 + 2] = ((~((var_16 ? var_5 : var_3))));
            var_46 = var_14;
            arr_73 [i_18] [i_18] = var_8;
            arr_74 [i_18 - 1] [i_20] = (arr_71 [i_20]);
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            arr_78 [i_18] = ((((((!(arr_76 [i_18] [i_18] [i_21]))))) / ((var_10 ? var_6 : 634602639))));
            var_47 = (max(var_47, var_14));
            var_48 = ((arr_75 [i_18 - 1] [i_18 + 1]) ? var_10 : var_8);
        }
    }
    for (int i_22 = 0; i_22 < 20;i_22 += 1)
    {
        var_49 = ((-5377476957389344787 ? (((-3200916328397153046 ? 1097 : 127)) : var_12)));
        arr_81 [0] &= (~var_1);
    }
    var_50 = (max((!var_2), var_0));

    for (int i_23 = 3; i_23 < 11;i_23 += 1)
    {
        arr_84 [10] |= var_0;
        var_51 = (arr_13 [i_23] [i_23] [i_23]);
    }
    #pragma endscop
}
