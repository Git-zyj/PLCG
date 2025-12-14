/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [6] [i_0]), ((-(min((arr_1 [i_0]), var_11))))));
        var_14 = (min(var_14, (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((((var_6 ? var_9 : var_10))) | ((var_0 ? (arr_1 [i_1]) : var_11))));
        arr_6 [i_1 + 1] = ((-(arr_3 [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = var_4;
        var_15 = (arr_3 [i_2 + 1]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = var_3;
                    arr_17 [i_2] [i_2] [i_2] = ((var_7 ? (arr_15 [i_2 - 1] [i_3] [i_4] [i_2]) : (arr_11 [i_2 - 1] [i_3] [i_3])));
                    arr_18 [i_2] [i_2] [i_2] = (!-9183);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = var_5;
                                var_17 ^= (~0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_2 - 1] [i_7] [i_2] [i_2] [i_3] [i_2 - 1] = (arr_27 [i_8] [i_7] [i_2] [i_2] [i_2]);
                                var_18 = (!var_5);
                            }
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            arr_32 [i_2] = var_2;
            var_19 = (max(var_19, (((!(arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_20 ^= ((-(arr_26 [i_2] [i_2] [i_2] [i_2] [i_10])));
            arr_36 [i_2] = ((var_5 ? (9338 / 890886053) : (((~(arr_29 [i_2] [18] [i_10]))))));
            arr_37 [i_2] [i_2] = ((-(arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
            var_21 = -var_2;
        }
        arr_38 [16] |= ((-((1647145230 ? 15816928388478615563 : 3021681461))));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_45 [i_12] = (arr_42 [i_11] [i_12] [i_12]);

            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                arr_48 [i_13] [i_11] [i_12] [i_13] |= ((-(arr_44 [i_11])));
                var_22 ^= ((var_9 >= (arr_20 [i_12])));
                arr_49 [i_11] [i_12] = (((arr_42 [i_12] [i_12] [i_11]) ? 1 : 0));
                arr_50 [i_12] = ((!(arr_14 [i_11])));
                var_23 = var_10;
            }
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_58 [i_12] [i_16] [i_15] [i_15 - 4] [i_14] [i_12] [i_12] = ((var_1 ? (arr_34 [i_12]) : (arr_34 [i_12])));
                            arr_59 [i_12] = var_4;
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, ((((arr_53 [i_11] [i_17] [i_18] [i_11] [i_20]) + (arr_53 [i_11] [i_17] [i_17] [i_19] [i_20]))))));
                            arr_71 [i_18] = (204 <= 26363);
                        }
                        for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
                        {
                            arr_74 [i_11] [i_11] [i_18] [3] [11] [3] = ((~(arr_64 [i_11] [i_11] [i_11] [i_11])));
                            var_25 = (min(var_25, (((!(arr_21 [i_11] [i_17] [i_18] [i_19] [i_21] [i_18]))))));
                            arr_75 [i_11] [i_17] [i_18] [i_11] [i_21] = (arr_8 [i_11] [i_11]);
                            var_26 = (((((var_5 ? var_8 : var_5))) ? (arr_60 [i_17]) : var_3));
                            var_27 = ((var_4 ? ((var_0 ? (arr_65 [i_17] [6]) : var_0)) : (arr_47 [i_17] [i_19])));
                        }
                        var_28 -= (((var_2 >= var_11) & var_9));
                    }
                }
            }
            var_29 = ((var_11 >= (arr_60 [i_11])));
            var_30 *= 1;
        }
        arr_76 [i_11] = arr_44 [i_11];
    }
    for (int i_22 = 0; i_22 < 22;i_22 += 1)
    {
        var_31 = (min(((var_0 / (arr_78 [i_22]))), var_3));
        arr_80 [i_22] = (arr_0 [i_22] [i_22]);
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    {
                        var_32 = (arr_77 [i_24] [i_25]);
                        arr_87 [i_25] [i_22] = ((+((((arr_81 [i_23] [i_22]) < (max((arr_81 [i_22] [i_22]), var_6)))))));
                        var_33 = (min(var_6, (arr_79 [i_22] [i_24])));

                        for (int i_26 = 0; i_26 < 22;i_26 += 1) /* same iter space */
                        {
                            arr_90 [i_26] [i_26] = (max((((-((min(var_12, var_1)))))), (max((((arr_82 [i_24] [i_22]) ? (arr_85 [i_22] [i_22] [i_25]) : var_11)), (arr_84 [i_23] [i_25])))));
                            arr_91 [i_26] = (((((((arr_77 [i_26] [i_25]) ? var_0 : var_0)) >> (((max((arr_78 [i_23]), var_4)) - 3110726076)))) <= ((((max(33900, 31636))) ? ((min(9963, 33235))) : -var_4))));
                        }
                        for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
                        {
                            var_34 = (((((var_0 ? (arr_93 [i_27] [i_23] [i_24] [i_25] [i_27]) : (arr_88 [i_22] [i_25])))) ? (arr_95 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]) : (((arr_95 [i_22] [i_23] [i_24] [i_24] [i_25] [i_27]) ? var_6 : var_5))));
                            arr_96 [i_22] [i_23] [i_24] [i_25] [i_27] |= (((arr_93 [i_25] [i_23] [i_23] [i_23] [i_27]) <= ((((!(arr_93 [i_24] [i_23] [i_24] [i_25] [i_24])))))));
                            arr_97 [i_23] [i_27] [i_27] [i_27] [i_22] [i_23] [i_22] = (max((((((~(arr_81 [i_27] [i_24])))) ? (((arr_79 [i_23] [i_23]) ? var_4 : var_4)) : (arr_0 [i_23] [i_23]))), ((min((var_8 && var_4), (max(var_6, var_0)))))));
                            arr_98 [i_27] [i_27] [i_27] [i_22] [i_22] = var_12;
                            arr_99 [i_22] [i_24] [i_24] [i_27] [i_24] = (min((((!(((var_2 ? var_12 : (arr_0 [i_24] [i_23]))))))), var_6));
                        }
                        for (int i_28 = 0; i_28 < 22;i_28 += 1) /* same iter space */
                        {
                            var_35 = var_11;
                            arr_102 [i_22] [i_23] [i_23] [i_25] [i_28] = var_10;
                        }
                        arr_103 [i_22] [i_22] [9] [i_25] |= (((-32767 - 1) ? 1760792897000924189 : 3404081243));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 21;i_29 += 1)
    {
        arr_106 [i_29] = (((arr_78 [i_29]) ? var_11 : (arr_86 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])));
        arr_107 [i_29] |= (((arr_104 [i_29]) ? var_12 : var_2));
    }
    #pragma endscop
}
