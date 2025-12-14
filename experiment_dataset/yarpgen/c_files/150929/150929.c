/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = var_12;
        var_14 = ((((min((min((arr_2 [i_0] [i_0]), var_8)), 12))) ? ((((-(arr_0 [i_0] [i_0]))) / (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
        arr_3 [4] |= ((((((min(29222, 244))) / (var_9 != var_10))) <= var_11));
        arr_4 [i_0] = ((((((((~(arr_2 [i_0] [i_0])))) | (163 ^ var_1)))) <= ((498535114 - (((arr_0 [i_0] [i_0]) + var_1))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [0] = var_1;
        var_15 -= ((var_12 ? ((29222 ? 11969627477864878562 : (~var_12))) : (arr_5 [i_1])));
        var_16 += 19949;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [i_2] = ((((((arr_6 [i_3]) | var_12))) ? var_0 : var_10));
                    arr_15 [i_3] = (((((((max((arr_11 [i_1] [i_2] [i_1] [i_1]), var_5))) << (48 - 31)))) - (min(var_1, (arr_9 [i_1])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_17 = ((((var_12 - var_11) ? (max(var_1, var_11)) : ((((arr_5 [i_4]) ? var_3 : (arr_11 [i_4] [i_4] [i_4] [i_4])))))));
        var_18 = ((((~1936330504) ^ ((~(arr_6 [i_4]))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (((((var_7 ? var_9 : (arr_9 [i_4])))) ? (180 / var_7) : -var_6));
            var_20 = (max(var_20, (((36313 ? var_7 : (~var_8))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_21 = 2147483647;
                        arr_25 [4] [10] [i_6] [4] [4] = ((~((var_9 ? var_11 : (arr_9 [i_7])))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_33 [i_10] [i_8] [i_9] [i_9] = ((45587 ? ((25 ? 83 : 0)) : ((min(25, 14715)))));
                        arr_34 [i_10] [i_8] [i_9] [i_8] [i_8] [i_4] = (arr_19 [i_10] [i_10] [i_9 - 1]);
                        arr_35 [1] [i_8] [i_9] [i_8] = ((~(min((~var_9), -693612738))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_39 [i_8] [i_8] [i_9 - 1] [i_10] [i_11] = (min(var_6, (((((arr_29 [i_4] [i_4] [i_9 - 1] [i_9 - 1]) ? (arr_18 [i_8] [i_11]) : var_8))))));
                            arr_40 [i_8] = ((((var_6 & (arr_32 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) == 19939));
                            var_22 = 805306368;
                            var_23 = ((((((((arr_0 [11] [i_4]) & var_4)) != var_2))) < ((min((arr_32 [i_11] [i_4] [i_9] [i_8] [i_4] [i_4]), var_3)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_24 = ((var_1 ? (arr_9 [i_4]) : var_10));
                            var_25 = (min(var_25, ((((arr_20 [i_9 - 1] [i_12 + 1] [i_9]) / 1936330486)))));
                            var_26 *= (((0 ^ 604173594) << (2 - 2)));
                        }
                    }
                }
            }
            var_27 = var_3;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_28 = ((~(((!(arr_45 [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        arr_50 [i_4] [i_14] [i_15] = (arr_23 [i_4] [i_4] [i_13] [i_4] [i_4]);
                        arr_51 [i_4] [i_15] = ((-var_7 == (arr_31 [10] [i_15 + 2] [i_14] [i_15])));

                        for (int i_16 = 2; i_16 < 10;i_16 += 1)
                        {
                            arr_54 [i_15] [i_13] = var_1;
                            var_29 = var_6;
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_30 = (max(var_30, ((max((-17569 * 244), ((max(var_6, (arr_11 [i_4] [i_17] [i_4] [i_4])))))))));

            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {
                arr_61 [i_17] [i_17] = max((~var_11), ((~((var_6 ? var_8 : 805306369)))));
                var_31 = ((((var_4 ? ((1936330504 ? var_6 : (arr_36 [i_18] [i_18] [i_17] [i_18] [i_18]))) : var_9))) ? (arr_41 [i_4] [i_4] [4] [i_4] [8] [i_17] [i_4]) : (arr_22 [i_4] [i_17]));

                for (int i_19 = 2; i_19 < 11;i_19 += 1)
                {
                    var_32 += 36283;
                    var_33 = ((var_12 / (var_7 - 23037)));
                }
                for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                {
                    arr_66 [i_4] = (min(((~(min(-1936330517, (arr_65 [i_4] [i_4] [i_4] [i_4] [1]))))), (((-(arr_19 [i_18] [i_17] [i_4]))))));
                    var_34 = (~var_5);
                }
                for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                {
                    arr_70 [i_17] [i_17] = var_12;
                    var_35 += ((+((((21 >> (((arr_48 [i_21] [i_21] [i_21] [i_21] [i_21]) - 35515)))) >> (((((arr_56 [i_4] [i_4] [i_18]) ? var_11 : var_7)) + 7822498240277350415))))));
                    arr_71 [10] [i_17] [8] [i_17] [i_17] [i_21] = ((arr_12 [i_4]) ? var_1 : (((max((arr_12 [i_4]), (arr_12 [i_4]))))));
                }
                var_36 += ((((-(arr_41 [i_4] [i_17] [i_18] [i_17] [i_4] [i_17] [i_17]))) ^ (var_12 && var_7)));

                /* vectorizable */
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    arr_74 [i_22] [i_22] = ((-(arr_27 [i_4] [i_17] [i_22])));
                    var_37 = (min(var_37, (5 || var_1)));
                }
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    var_38 = (max(var_38, (arr_43 [9])));
                    var_39 = var_12;
                }
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    var_40 = (max(var_40, (45587 ^ 805306369)));
                    arr_80 [i_18] [i_17] [1] [i_24] = (arr_63 [i_4] [i_4] [i_4] [i_4]);
                    arr_81 [i_4] [i_17] [i_4] [i_24] [i_18] = var_4;
                    var_41 = (min(var_41, (((((((((arr_79 [i_4] [i_4] [i_24]) ? var_0 : var_0))) ? (((arr_57 [i_4] [i_18] [i_18]) ? var_4 : 4694989571136047136)) : (arr_72 [i_4] [i_17] [i_4]))) * (23 & 45602))))));
                    var_42 *= 240;
                }
            }
            for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
            {
                var_43 = (max((arr_11 [i_25] [10] [10] [i_4]), ((~(arr_42 [i_4] [i_4] [i_4] [i_4] [i_4])))));
                arr_84 [i_4] [i_4] [i_25] [i_25] = (max(((max(var_12, 19939))), var_2));
            }
            for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 14;i_28 += 1)
                    {
                        {
                            var_44 *= ((~(((arr_46 [i_28] [7] [i_4] [i_4]) << ((-(arr_18 [i_4] [i_4])))))));
                            var_45 = ((var_3 ? 24 : var_10));
                            arr_93 [i_26] [i_17] [i_26] [i_27] = (((min(var_2, (((arr_18 [i_4] [i_4]) ? (arr_36 [i_4] [i_4] [i_26] [i_4] [i_4]) : 1)))) * (((arr_24 [1] [i_17] [i_17]) ? (((arr_73 [i_4] [12]) ? 1936330504 : (arr_88 [i_27] [i_27]))) : (((arr_13 [6] [i_17] [9]) / 19949))))));
                            arr_94 [i_26] = (~84);
                        }
                    }
                }
                var_46 = 244;
                var_47 = ((var_3 - ((max((arr_2 [i_4] [i_17]), (arr_2 [i_4] [i_26]))))));
                var_48 = (max(var_48, var_0));
                arr_95 [i_26] [i_17] = ((((min(var_6, 23))) ? (((13751754502573504480 ? 75 : -70))) : (255 - 30)));
            }
            var_49 = (min((!4294967295), (((~-12) <= ((min(23, var_9)))))));
            var_50 *= (arr_59 [i_17] [5] [5]);
        }
    }
    var_51 = (max((((var_1 | 1) ^ (var_2 | var_3))), ((min(var_6, var_8)))));
    #pragma endscop
}
