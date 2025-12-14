/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_14));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ? ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? ((255 ? 12883322215646547792 : -566766961)) : var_4)) : (((0 ? ((min((arr_1 [i_0] [5]), 255))) : var_4)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = var_7;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_21 = (arr_1 [i_0] [i_0]);
                            var_22 = (max(var_22, var_17));
                        }
                    }
                }
            }
            var_23 = (min(var_23, ((((arr_8 [i_0] [i_1]) ? (arr_8 [i_0] [i_1]) : var_9)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_15 [i_0] [i_0] [i_0] = var_6;
            var_24 += -2032300042;
            var_25 = (max(var_25, 2947953806141606215));
            var_26 = var_18;
            arr_16 [i_0] = 1793391076636271255;
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_27 = ((var_14 ? (arr_18 [i_0] [i_6] [i_6]) : var_17));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_28 = (((arr_6 [i_8]) ? (arr_1 [i_0] [i_6]) : (arr_6 [i_8])));
                        var_29 -= ((var_1 ? (arr_17 [i_0] [i_0] [i_0]) : (arr_17 [i_8] [i_6] [i_0])));
                        var_30 = (((((142 ? var_9 : (arr_1 [i_7] [i_7])))) ? 16599915347874950101 : (arr_13 [i_6])));
                        var_31 = var_6;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_32 = ((11911488683653674254 ? 651562565770924562 : 26335102));

                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    arr_36 [i_0] = var_13;
                    arr_37 [i_9] = var_5;
                    var_33 = (((arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3]) ? (arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3]) : (arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3])));
                    var_34 = (max(var_34, var_11));
                }
                var_35 = var_12;
            }

            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                arr_40 [i_12] [i_12 - 1] = var_2;
                arr_41 [i_0] [i_9] [i_12] = (min(6535255390055877361, ((20437 ? 1846828725834601515 : 6535255390055877362))));
                var_36 = ((((((arr_11 [i_12] [4] [i_12 - 1] [i_12 - 3]) ? (arr_24 [i_12 - 2] [i_12 - 3] [i_12 - 1] [i_12 - 3] [i_12 - 2]) : var_16))) ? ((max((arr_4 [i_12] [i_12] [i_12 - 1]), var_8))) : (((arr_4 [i_12 - 3] [i_12 - 3] [i_12 - 2]) ? var_4 : (arr_4 [i_12] [i_12] [i_12 - 1])))));
                var_37 = ((var_3 ? 0 : (arr_0 [i_0])));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                arr_45 [5] [13] [i_13] = var_7;

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_38 += ((var_4 ? (arr_43 [i_0] [i_0] [i_15 + 1] [i_15 + 3]) : var_15));
                        arr_50 [i_0] [i_9] [i_9] [i_14] [14] [14] [i_9] = (arr_12 [i_9] [i_0]);
                        var_39 = ((var_13 ? var_6 : var_18));
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_40 = var_16;
                        var_41 = 1;
                    }
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        var_42 &= var_11;
                        arr_56 [i_17] [i_17] [i_14] [0] [i_9] [i_0] &= var_15;
                        var_43 = (((((var_6 ? (arr_8 [i_0] [i_13]) : (arr_38 [i_0] [i_9] [14] [i_17])))) ? (arr_46 [i_0] [i_9] [i_0] [i_9]) : (arr_18 [i_14] [i_14] [i_13])));
                        arr_57 [i_0] [i_9] [i_9] [i_0] [i_17] = 1;
                    }
                    var_44 = var_2;
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        arr_66 [i_0] [1] [i_13] [i_13] [i_18] [i_19] = (arr_33 [i_0] [1] [i_13] [i_0] [8] [i_19]);
                        var_45 += (((arr_23 [i_9] [i_0]) ? var_9 : var_1));
                        var_46 = (arr_5 [i_0]);
                        var_47 = (max(var_47, var_14));
                        var_48 = var_16;
                    }
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        var_49 = var_0;
                        var_50 = 0;
                        var_51 = var_17;
                    }
                    arr_70 [i_0] [i_9] = 0;
                    var_52 = (arr_10 [i_0] [i_9] [i_9] [i_18]);
                }
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        var_53 -= (((((114 ? -26105 : -2947953806141606215))) ? var_8 : var_4));
                        var_54 = (((arr_13 [i_0]) ? (arr_73 [i_0] [i_21] [i_22] [i_22] [i_21]) : var_3));
                        arr_76 [i_22] [i_13] [i_22] = (arr_6 [i_0]);
                    }
                    for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
                    {
                        var_55 += (((var_13 ? 0 : var_9)));
                        var_56 = (arr_31 [i_9] [i_9] [i_23]);
                    }
                    for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                    {
                        var_57 = (max(var_57, (arr_73 [i_9] [i_0] [i_24] [i_21] [i_24])));
                        var_58 *= var_11;
                        var_59 += (arr_5 [i_21]);
                    }
                    for (int i_25 = 0; i_25 < 16;i_25 += 1)
                    {
                        var_60 = var_6;
                        arr_84 [i_21] [i_21] [i_21] [i_21] [i_21] = (arr_82 [i_0] [i_9] [i_9] [i_13]);
                        var_61 = ((1513847256 ? (arr_79 [i_25]) : 2749816963));
                        var_62 += var_11;
                        var_63 = ((var_18 ? ((var_8 ? var_3 : var_10)) : var_1));
                    }

                    for (int i_26 = 0; i_26 < 16;i_26 += 1)
                    {
                        var_64 = 0;
                        arr_87 [i_0] [i_9] [i_13] [i_21] [i_26] = (((arr_8 [i_9] [15]) ? (arr_9 [i_0] [i_13] [i_21] [i_26]) : -651562565770924562));
                    }
                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        var_65 = (arr_49 [i_0] [i_0] [i_21] [i_27]);
                        var_66 = (((arr_9 [i_0] [i_0] [i_13] [i_0]) ? (arr_72 [i_0] [i_0]) : (((862541547 ? 191 : -63)))));
                    }
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {
                        var_67 = (((arr_4 [i_0] [i_9] [i_13]) ? (arr_4 [i_0] [i_9] [i_13]) : 24936));
                        var_68 = (((arr_39 [i_9] [i_13] [i_28]) ? (arr_28 [i_0]) : var_10));
                        var_69 -= arr_47 [i_0] [i_9] [i_13] [1] [i_28];
                    }
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_95 [i_9] [i_9] [i_9] [i_21] [1] [i_21] [i_13] = (arr_67 [i_0] [i_13] [i_21] [i_29]);
                        var_70 = (min(var_70, var_7));
                    }
                    var_71 = ((1 ? (arr_29 [i_0] [i_9] [i_13]) : var_17));
                }

                for (int i_30 = 0; i_30 < 16;i_30 += 1) /* same iter space */
                {
                    arr_99 [13] [i_13] [i_13] [i_13] [i_13] = ((var_12 ? ((var_17 ? (arr_23 [i_13] [i_13]) : var_17)) : var_6));
                    arr_100 [i_9] [13] = (arr_43 [i_0] [i_13] [i_13] [i_9]);
                    var_72 = (min(var_72, (arr_85 [i_0] [i_9] [i_30] [i_9] [i_0])));
                    var_73 = 0;
                }
                for (int i_31 = 0; i_31 < 16;i_31 += 1) /* same iter space */
                {
                    var_74 += (arr_89 [10] [i_0] [i_0] [i_0] [i_31]);
                    var_75 = (arr_93 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_103 [i_31] [1] [i_0] [i_9] [i_0] = var_16;
                    var_76 -= (arr_46 [i_0] [i_9] [i_13] [i_31]);
                }
                for (int i_32 = 0; i_32 < 16;i_32 += 1) /* same iter space */
                {
                    var_77 = (arr_0 [i_0]);
                    var_78 = var_1;
                }
                arr_107 [i_0] [i_9] [2] = var_8;
            }
            /* vectorizable */
            for (int i_33 = 0; i_33 < 16;i_33 += 1)
            {
                arr_111 [i_0] [i_9] [i_0] [i_33] = ((var_17 ? var_17 : var_10));
                var_79 = (arr_4 [i_0] [i_9] [i_9]);
                arr_112 [i_9] [i_9] [i_33] = (((arr_105 [i_33] [i_0] [i_0] [i_0] [i_0]) ? (arr_105 [i_0] [i_33] [i_33] [i_0] [i_33]) : var_18));
                var_80 = (min(var_80, var_3));
                var_81 = (arr_19 [i_9]);
            }
        }
    }
    var_82 = var_17;
    #pragma endscop
}
