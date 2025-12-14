/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = 243;
        var_20 = ((!(arr_1 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = ((((((arr_3 [i_1] [0]) ? 12 : (~174)))) ? ((var_2 ? ((96 ? (arr_2 [i_1]) : (arr_5 [i_1]))) : (arr_3 [i_1 + 1] [i_1 + 2]))) : (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_22 = min(97, 243);
            var_23 = arr_5 [i_1];
            var_24 = ((((min(var_18, (arr_3 [i_1 + 2] [i_1 - 1])))) ? (((!(arr_4 [i_1 - 1])))) : (((!(arr_5 [i_1 + 2]))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_25 = (!255);
                var_26 = ((!(arr_0 [i_4])));
                var_27 = ((255 + ((min((arr_1 [1]), (arr_12 [i_3]))))));
                arr_13 [i_4] [i_3] [i_1] = arr_1 [i_1 + 1];
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_28 = arr_3 [i_1] [i_1];
                arr_17 [i_3] [i_3] [i_5] [i_5] = (((arr_15 [i_3] [i_3]) ? (arr_16 [i_1] [i_3] [i_3] [i_5]) : ((min((min(12, 96)), (arr_4 [i_5]))))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_29 = min((arr_11 [i_1]), (arr_15 [i_1] [i_3]));
                var_30 = (arr_1 [i_1 - 1]);
            }
            arr_20 [10] [i_3] [i_3] = (((((var_10 ? var_9 : (arr_4 [i_1 - 1])))) ? ((((arr_0 [i_1 + 1]) != (arr_7 [i_1 + 1])))) : (((arr_12 [i_1 - 1]) ? (!var_3) : 186))));
            arr_21 [i_3] [i_3] = var_6;
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            arr_24 [i_1] [i_7] = (min((min((arr_16 [i_1] [i_7] [i_1] [i_1]), (~var_9))), (arr_22 [i_1])));

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_31 = 181;
                var_32 = (((arr_15 [i_1] [i_1]) ? ((-(((arr_27 [i_1] [i_8]) ? (arr_18 [6]) : (arr_2 [i_1]))))) : (((!((min(255, (arr_11 [i_1])))))))));
            }
            /* vectorizable */
            for (int i_9 = 4; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_30 [7] [i_1] [0] [i_1] = arr_11 [i_7 + 2];
                arr_31 [i_1 + 2] [i_7] [i_9] = var_4;
                var_33 = (!255);
                var_34 = (((arr_8 [i_1] [0] [i_9 - 3]) >> (((arr_8 [i_1 + 2] [4] [4]) - 63))));
            }
            for (int i_10 = 4; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_35 = arr_10 [i_1] [i_10];
                var_36 = min((((!((max((arr_6 [i_10] [i_7] [i_1]), var_3)))))), 81);
            }
            for (int i_11 = 4; i_11 < 11;i_11 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_37 = -255;
                    var_38 = ((128 / (arr_11 [i_1])));
                    var_39 = ((0 >= (arr_12 [i_1])));

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_45 [i_1] [i_7] [i_12] [i_12] [i_13] = arr_22 [i_13];
                        arr_46 [i_1] [i_12] [i_11] [i_11] [i_11] = arr_33 [i_1] [i_1];
                    }
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_40 = (max((~var_5), (((min(var_7, 99))))));
                    var_41 = (max(((0 ? var_0 : ((min(var_2, (arr_12 [i_14])))))), (arr_22 [i_14])));
                    var_42 = ((~(arr_50 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])));
                    var_43 = arr_28 [i_11];
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    arr_53 [2] [i_1] [i_1] [i_7] [2] [i_15] = (arr_22 [i_7 + 1]);

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_44 = (((arr_6 [i_7 + 3] [i_7] [i_7 + 3]) ? ((var_9 ? (arr_52 [i_1]) : var_9)) : (arr_33 [i_1] [i_1 - 1])));
                        var_45 = 134;
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_46 = var_4;
                        arr_60 [i_1] [i_7] = (arr_22 [i_1 - 1]);
                        arr_61 [9] [i_7] [9] [i_15] [i_17] [9] [i_1] = (((arr_12 [i_15]) && (((19 ? (arr_15 [7] [i_1 + 2]) : (arr_9 [i_1] [i_1]))))));
                    }
                }
                var_47 = min((min((arr_6 [i_1 - 1] [i_7 + 2] [i_11 + 3]), (arr_26 [i_11 - 2] [i_11] [i_7 + 3] [11]))), (arr_2 [i_1]));
                var_48 = arr_59 [i_1] [i_1 - 1] [i_1 - 1] [10] [i_11];
            }
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 4; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 12;i_20 += 1)
                {
                    {
                        var_49 = (~var_0);
                        var_50 = ((!(arr_59 [i_1 + 2] [i_19] [i_1 + 2] [i_19 - 1] [12])));
                        var_51 = (min((((arr_44 [i_1 - 1] [i_1 + 1] [i_19 - 3] [i_20] [i_1 - 1] [i_20] [i_20]) ? (arr_28 [i_1]) : (arr_44 [i_1] [i_1 + 1] [i_19 - 2] [i_20] [10] [i_20] [i_1]))), (arr_29 [i_20 + 1] [i_19] [9])));
                    }
                }
            }
            var_52 = arr_32 [i_1];
        }
        arr_70 [i_1] [i_1] = (max(((((((arr_67 [i_1 - 1] [i_1]) + (arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [12])))) ? (arr_29 [i_1] [i_1] [i_1]) : (arr_1 [i_1 + 2]))), ((~(arr_69 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
    }
    var_53 = var_4;

    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {

        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {

            for (int i_23 = 2; i_23 < 19;i_23 += 1)
            {
                var_54 = arr_71 [i_23 + 2];

                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        var_55 = (arr_71 [i_21]);
                        var_56 = arr_81 [i_25] [i_24] [12] [12];
                    }
                    var_57 = min((max((arr_76 [i_23 - 2] [i_23 - 2]), (arr_76 [i_23 + 2] [i_23 + 2]))), (arr_76 [i_23 + 2] [i_23 - 2]));
                    arr_83 [i_21] [i_22] [i_21] = arr_77 [i_21] [12] [i_23];
                    var_58 = (((((-(arr_78 [i_21]))))));

                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        arr_88 [i_26] [i_22] [i_22] = (max(var_2, ((~(arr_71 [i_23])))));
                        var_59 = (min((((arr_79 [i_23] [i_23] [i_23 + 2] [i_23 + 2] [i_23] [i_23]) ? var_16 : (arr_73 [i_21] [i_21]))), ((255 ? var_10 : (arr_72 [i_23 - 2])))));
                        var_60 = 188;
                    }
                    for (int i_27 = 0; i_27 < 21;i_27 += 1)
                    {
                        var_61 = ((-(arr_77 [i_23 + 1] [i_23] [i_23 + 1])));
                        var_62 = arr_84 [i_21] [i_22] [i_23] [i_24] [i_27];
                    }
                    for (int i_28 = 0; i_28 < 21;i_28 += 1)
                    {
                        var_63 = (arr_89 [i_21] [i_22] [i_23] [i_22] [i_24] [i_28]);
                        arr_93 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = var_9;
                        arr_94 [i_21] [i_28] [i_23 - 2] [i_24] [1] [1] = arr_72 [i_22];
                    }
                }
                var_64 = (min((arr_72 [i_22]), (min((arr_81 [i_21] [i_22] [i_23] [13]), (arr_92 [i_21] [i_21] [i_21] [i_22] [i_21])))));
            }
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 21;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 21;i_30 += 1)
                {
                    {
                        var_65 = -var_11;
                        var_66 = (~var_13);
                        arr_99 [i_21] [i_21] [i_29] [i_30] = max(var_11, 113);
                    }
                }
            }
            var_67 = min((arr_76 [i_22] [i_22]), (min(135, (arr_76 [i_21] [i_22]))));
            arr_100 [i_21] [i_22] = min((arr_78 [i_21]), (arr_78 [3]));
            var_68 = arr_95 [i_21];
        }
        for (int i_31 = 0; i_31 < 21;i_31 += 1)
        {
            var_69 = 234;
            var_70 = arr_87 [i_21] [i_21] [6] [i_21] [i_31];
        }
        for (int i_32 = 3; i_32 < 20;i_32 += 1)
        {
            var_71 = arr_86 [i_21] [i_21];
            var_72 = arr_96 [i_32] [i_32] [i_32] [i_32];
            var_73 = arr_103 [i_21] [i_21] [i_21];
            arr_106 [i_21] [i_32] = ((var_18 >= (arr_96 [i_21] [i_21] [i_21] [i_32])));
            var_74 = ((!(~168)));
        }
        for (int i_33 = 0; i_33 < 21;i_33 += 1)
        {
            var_75 = ((((((65 / (arr_95 [i_21])) == ((-(arr_81 [i_21] [i_33] [i_21] [i_33]))))))));
            var_76 = max(var_17, (arr_87 [i_21] [i_21] [20] [i_21] [i_33]));
        }
        var_77 = (((((max(74, 245)))) < (((arr_107 [i_21]) ? (arr_107 [i_21]) : (arr_107 [i_21])))));
    }
    /* vectorizable */
    for (int i_34 = 3; i_34 < 23;i_34 += 1)
    {
        var_78 = (~251);
        var_79 = ((var_15 ? (arr_109 [i_34 - 3]) : (arr_110 [i_34] [i_34])));
        /* LoopNest 3 */
        for (int i_35 = 3; i_35 < 23;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 24;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 24;i_37 += 1)
                {
                    {
                        var_80 = (((arr_115 [i_34] [i_34 + 1] [i_35 - 1] [i_37]) ? (arr_115 [i_34] [i_34 - 1] [i_35 - 3] [i_34 - 1]) : (arr_114 [i_35])));
                        var_81 = (((arr_113 [i_34 - 1] [i_34 - 3] [i_35 - 3]) ? (arr_113 [i_34 - 3] [i_34 - 2] [i_35 + 1]) : (arr_113 [i_34 - 1] [i_34 - 2] [i_35 + 1])));
                        var_82 = arr_112 [i_34] [i_34];
                        var_83 = (var_16 < var_2);
                    }
                }
            }
        }
        var_84 = (arr_116 [i_34] [i_34] [i_34]);
    }
    var_85 = ((var_2 % ((max(var_16, var_4)))));
    #pragma endscop
}
