/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = var_8;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_21 = (arr_2 [i_0] [i_1]);
                arr_6 [i_2] = var_8;
                var_22 = var_10;
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_23 += ((2147483647 ? -32755 : (-32767 - 1)));
                    arr_12 [i_0] [i_1] [i_3] [i_3] = var_11;
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    arr_16 [i_3] [i_1] [i_5] = (var_16 != var_11);
                    var_24 = (max(var_24, var_6));
                }
                var_25 = ((var_1 ? var_19 : var_12));

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_26 = var_2;
                    var_27 = (arr_15 [i_0] [i_0] [i_0] [17]);
                }
                var_28 -= var_5;
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                arr_22 [i_0] [i_0] [i_7] [i_0] = (~var_0);
                var_29 = (min(var_29, (((var_7 ? ((((arr_7 [i_0] [i_1] [i_7] [i_7]) || var_5))) : (!var_3))))));
                var_30 = (min(var_30, var_7));
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_31 = var_7;
                var_32 ^= arr_25 [i_0] [i_1] [i_8];
            }
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    var_33 &= (((32767 <= 18446744073709551595) % var_9));
                    var_34 = (max(var_34, ((max(((((arr_10 [i_10] [i_10] [i_10] [i_11]) << (var_4 - 7348)))), (max((max(var_1, (arr_13 [i_0] [i_11] [i_10] [i_11]))), (arr_29 [i_0] [i_0] [i_0] [i_0]))))))));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_35 = ((-((16320 ? var_10 : var_18))));
                        arr_37 [i_0] [i_9] [i_10] [i_0] [1] = var_17;
                    }
                    var_36 = (arr_13 [i_11 - 1] [18] [i_10] [18]);

                    for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_37 = (min(((((min(var_13, var_15))) ? -var_1 : (var_1 - var_9))), (4294967295 - -32738)));
                        arr_42 [i_10] [i_10] [i_10] [i_13] [21] = (18446744073709551615 - 6144);
                    }
                    for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_9] [i_9] [i_9] [16] [i_14] [i_0] [i_14 + 1] = (((((arr_0 [i_0]) - -32)) >= ((min((min(var_16, var_12)), var_15)))));
                        var_38 = var_13;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_39 = (min(var_39, var_11));
                        arr_49 [i_15] [i_11] [i_11 - 2] [i_0] [i_15] [i_0] [i_11] &= var_7;
                        var_40 = (arr_0 [1]);
                    }
                }
                for (int i_16 = 2; i_16 < 21;i_16 += 1)
                {
                    var_41 = (min(var_41, ((((max(((var_7 || (arr_19 [2] [i_10] [16]))), ((var_16 != (arr_13 [i_0] [i_9] [i_10] [i_16 - 2]))))) ? ((min(var_12, (min((arr_24 [i_0] [13] [i_10] [i_16 - 1]), var_11))))) : (var_14 & var_4))))));
                    var_42 = arr_41 [i_0] [17] [17] [i_0] [1] [i_0] [i_16];
                    var_43 = var_9;
                    var_44 = (max(var_17, (arr_28 [i_0] [i_16])));
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    var_45 = (max(var_45, (!var_11)));
                    arr_54 [i_0] [i_0] [i_10] [16] [i_17] [i_17] = ((((((((arr_3 [i_10] [i_9]) + 2147483647)) >> (((min(var_16, var_9)) + 834344995))))) | (arr_10 [i_17] [i_10] [i_9] [i_17])));
                }
                var_46 = (arr_20 [i_9] [i_10] [i_9] [i_0]);
                var_47 = (arr_14 [i_0] [i_0] [i_0] [1] [i_0] [i_0]);

                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_48 |= (((max(var_15, var_9))) / ((min(var_0, (min(var_16, var_13))))));

                    for (int i_19 = 1; i_19 < 18;i_19 += 1)
                    {
                        arr_60 [i_19] [0] [3] = (((((-((max(var_17, var_0)))))) ? var_12 : (arr_52 [i_0] [i_0] [12] [i_0] [i_0] [i_0])));
                        arr_61 [i_19] = var_0;
                    }
                    var_49 = var_11;
                    var_50 = (min(var_50, var_12));

                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        var_51 = (max(var_51, var_4));
                        var_52 = ((-var_12 ? var_15 : (min(1073610752, (((-(arr_56 [i_0] [i_0] [i_10]))))))));
                    }
                }
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    arr_67 [i_0] &= (min((max(var_8, (arr_55 [i_9] [i_9] [i_9] [i_21]))), ((max(var_17, (min((arr_50 [i_10] [i_10]), var_9)))))));
                    var_53 -= var_6;
                }
            }
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                arr_72 [i_0] [i_9] [i_22] [i_22] = (min(var_2, ((max((arr_55 [i_0] [i_0] [i_22] [i_22]), var_11)))));
                var_54 -= ((((max(var_11, (((arr_9 [i_22] [i_9] [i_0]) * var_2))))) ? (arr_2 [i_22] [i_0]) : ((((min(var_14, (arr_57 [i_0] [i_9] [i_9] [i_22] [3] [i_22]))) != var_10)))));
                arr_73 [i_0] [i_9] [i_22] [2] = ((var_12 - ((min(var_3, (arr_11 [i_0] [i_0] [i_0] [i_0]))))));

                /* vectorizable */
                for (int i_23 = 3; i_23 < 19;i_23 += 1)
                {
                    arr_76 [i_0] [i_9] = (((var_9 <= var_7) >= (arr_69 [i_23] [i_22] [i_9] [i_0])));
                    arr_77 [1] [i_9] [i_22] [i_23 + 1] = (var_12 & var_19);
                }
                var_55 = (max(var_55, (((((((arr_39 [10] [i_9] [i_9] [i_9] [i_0] [i_9]) ? var_15 : var_16))) ? (max((arr_62 [i_9] [i_22]), (var_16 ^ var_15))) : (max((~var_0), var_0)))))));
            }
            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    var_56 = (min((arr_5 [i_9] [i_9] [i_24] [1]), ((min(var_17, var_19)))));
                    arr_84 [i_0] [i_24] [i_0] [i_25] = min((min((arr_75 [i_0] [i_9] [i_9] [i_24] [i_24] [i_25]), (arr_75 [i_0] [1] [1] [i_24] [i_25] [i_25]))), (min((arr_31 [i_0] [i_0] [17] [i_0] [17]), var_19)));
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 22;i_27 += 1)
                    {
                        {
                            var_57 += (max((max(((max(var_4, var_18))), var_18)), (((arr_74 [i_0] [i_0] [i_9] [i_24] [i_26] [i_27]) ? (var_11 <= var_15) : var_12))));
                            var_58 = (min(var_58, (((max(var_14, (arr_23 [i_0])))))));
                        }
                    }
                }

                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {
                    var_59 = (~var_0);
                    arr_93 [i_0] [i_0] [i_0] [i_0] [i_24] = (arr_0 [i_24]);

                    for (int i_29 = 0; i_29 < 22;i_29 += 1) /* same iter space */
                    {
                        var_60 = (min(var_60, (arr_74 [i_0] [i_9] [1] [1] [i_0] [i_0])));
                        var_61 &= var_11;
                        var_62 = (min(var_62, var_18));
                        var_63 -= (max((-22 == -8), (((arr_40 [i_0] [i_28] [i_24] [i_0] [i_24]) != var_11))));
                    }
                    for (int i_30 = 0; i_30 < 22;i_30 += 1) /* same iter space */
                    {
                        arr_99 [i_24] [i_9] [i_9] [i_24] [i_9] = (((((var_14 >> (var_8 + 1780182719)))) ? (min(var_15, (min(var_2, (arr_65 [i_28] [i_0]))))) : (~var_18)));
                        var_64 = (min(var_64, var_7));
                    }

                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 22;i_31 += 1) /* same iter space */
                    {
                        var_65 = var_0;
                        var_66 = var_0;
                        var_67 = (max(var_67, -32765));
                    }
                    for (int i_32 = 0; i_32 < 22;i_32 += 1) /* same iter space */
                    {
                        var_68 = ((!((max((arr_68 [i_9] [i_24]), (~504))))));
                        var_69 = (arr_28 [i_0] [i_0]);
                        var_70 = (min(var_70, ((max((var_15 % var_3), ((((((var_2 - (arr_43 [i_0] [i_9] [i_24] [i_24] [i_28] [i_32])))) || (arr_58 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        var_71 = (max(var_71, ((max(var_17, var_13)))));
                    }
                }
                for (int i_33 = 0; i_33 < 22;i_33 += 1)
                {
                    var_72 = (max(var_72, var_8));
                    var_73 = var_11;
                    var_74 = (((((!(((~(arr_10 [i_24] [i_9] [i_9] [11]))))))) >> (((((var_17 - (arr_105 [i_24] [i_24] [i_9] [i_9] [i_24] [i_33])))) ? (arr_100 [2] [i_9] [i_9] [2] [i_9] [19]) : var_11))));
                }

                for (int i_34 = 0; i_34 < 22;i_34 += 1)
                {
                    var_75 = (min(var_75, ((max((max((var_2 != 62), ((31 / (arr_87 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), var_15)))));
                    var_76 = var_13;
                }
                var_77 = (min(var_77, (((((~(min(67104768, 32767))))) ? var_18 : (var_3 != var_9)))));
            }
            var_78 = ((var_2 != (arr_85 [i_9] [i_9] [i_9] [i_9])));
            var_79 = ((((-(arr_32 [i_0]))) - (arr_109 [16] [16] [i_0] [i_9])));
        }
        for (int i_35 = 0; i_35 < 22;i_35 += 1)
        {
            var_80 = (min(var_80, var_16));
            var_81 -= (var_16 | var_6);
            var_82 = var_10;
            var_83 = ((!((max((arr_3 [i_0] [i_35]), var_2)))));
        }
        for (int i_36 = 0; i_36 < 22;i_36 += 1)
        {
            var_84 = (min(var_84, (((arr_10 [i_36] [i_36] [i_36] [i_36]) * (min((arr_10 [i_0] [i_0] [i_36] [i_36]), var_2))))));

            for (int i_37 = 0; i_37 < 22;i_37 += 1)
            {
                arr_117 [i_37] [i_37] |= var_8;
                var_85 = ((1 ? -32750 : -32));
                var_86 = (arr_58 [i_37] [14] [1] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_38 = 2; i_38 < 21;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 22;i_39 += 1)
                    {
                        {
                            var_87 = (max(var_87, ((min(var_1, (((arr_24 [i_38] [i_38] [i_38 - 1] [i_38 - 1]) - (arr_17 [i_36] [i_0] [i_38 - 1] [i_38] [i_36]))))))));
                            var_88 = (max(var_16, (max((arr_10 [i_0] [i_38 + 1] [i_38 + 1] [18]), (arr_10 [i_0] [i_38] [i_38 - 1] [i_38])))));
                        }
                    }
                }
                var_89 = ((var_11 << (((arr_14 [i_0] [i_0] [i_36] [i_0] [i_0] [i_0]) ? var_0 : var_19))));
            }
        }
        var_90 = ((((var_7 ? var_14 : ((max(-106, 8))))) + (min(var_0, (var_18 + var_17)))));
    }
    for (int i_40 = 2; i_40 < 11;i_40 += 1)
    {
        arr_125 [i_40] |= (((arr_48 [i_40] [i_40 + 1] [10] [i_40 + 1] [i_40]) != ((var_8 ? (min(var_8, var_11)) : (arr_13 [i_40] [i_40 - 2] [i_40 + 1] [i_40])))));
        var_91 = max((arr_7 [i_40] [i_40] [3] [i_40 + 2]), (((var_11 <= (35 > -67104756)))));
    }
    var_92 = (min(-67104768, 1));
    var_93 = var_17;
    var_94 = (min((min(var_16, var_0)), (((max(var_2, var_5))))));
    #pragma endscop
}
