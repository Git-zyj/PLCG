/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (~0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0] [i_0])));
        var_15 = 62926;
        arr_2 [i_0] = ((var_5 ? (arr_1 [i_0 + 1]) : var_7));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (min((--1519324791), ((0 ? (arr_5 [i_1]) : (((arr_5 [i_1]) ? 127 : var_6))))));
        var_17 = (arr_4 [20]);
        arr_7 [i_1] = arr_6 [i_1] [i_1];

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_18 = var_1;
            arr_10 [i_1] [i_1] [i_1] = ((((((~var_2) + 2147483647)) >> (((arr_4 [i_2 + 1]) + 88)))));
            arr_11 [i_2] [i_1] = 31205;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((!(1 / var_8)));
                        arr_19 [i_5] [i_4] [i_3] [i_1] = (min((arr_14 [i_1] [i_3]), 1));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_13 [i_1] [i_3])));
                            var_20 = (((-(!var_8))));
                        }
                    }
                }
            }
            var_21 += (((arr_20 [i_1] [20] [i_3] [i_3]) - -var_8));
            var_22 = (max(var_22, ((((max(var_1, (max(0, 4)))) | ((((arr_6 [i_3] [i_3]) ? -var_10 : (((10 >= (arr_21 [2] [i_3] [i_1]))))))))))));
            arr_28 [2] [i_1] = (~1);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            arr_31 [i_1] = (min(var_12, var_5));
            arr_32 [i_1] = var_5;
        }
    }
    for (int i_10 = 1; i_10 < 14;i_10 += 1)
    {
        var_23 = (min((((var_2 >= ((max((arr_14 [i_10] [i_10]), 15)))))), (max((arr_16 [i_10] [i_10] [i_10] [i_10]), (~var_7)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                {

                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        var_24 = (min(var_24, 1));
                        var_25 += 0;
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_26 = (min(var_26, -1));
                        var_27 *= max((!var_2), 2);
                    }

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_28 = ((-((~(((arr_33 [i_10] [i_15]) ? 1057739701 : (arr_34 [i_10])))))));
                        arr_48 [i_10 - 1] [i_10] = (min(var_9, 3));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_16 = 1; i_16 < 16;i_16 += 1)
    {
        arr_51 [i_16] = (~var_7);
        var_29 = -1;
        var_30 = 0;
    }
    for (int i_17 = 4; i_17 < 17;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            var_31 = (((arr_23 [i_17] [i_18]) ? 0 : (var_9 || var_3)));
            arr_58 [i_17] [i_18] = ((~(arr_9 [i_17])));
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 17;i_20 += 1)
                {
                    {
                        var_32 = (min(62, 0));
                        arr_63 [i_17] [10] [i_19 + 1] = ((((min((!var_4), (arr_13 [i_17] [i_18])))) || ((max((!var_7), 38420)))));
                    }
                }
            }
            arr_64 [i_17] [i_17] = (max(((((var_4 <= -70) >= ((max((arr_21 [i_18] [i_18] [i_18]), var_12)))))), var_8));
            var_33 = (((min(6051957995254640563, 1))));
        }
        for (int i_21 = 2; i_21 < 17;i_21 += 1)
        {

            /* vectorizable */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 18;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        {
                            arr_75 [i_17] [i_17] = (arr_56 [7]);
                            var_34 = (!var_7);
                            arr_76 [i_17 + 1] [i_17] [i_17] = (!var_7);
                        }
                    }
                }

                for (int i_25 = 1; i_25 < 17;i_25 += 1)
                {
                    var_35 = 0;
                    var_36 += 0;
                    var_37 = ((18446744073709551612 || (~var_3)));
                }
            }
            var_38 = (min(var_38, (((+(((arr_49 [i_21] [i_21]) ? (arr_52 [2] [8]) : var_6)))))));
        }

        for (int i_26 = 0; i_26 < 19;i_26 += 1)
        {
            /* LoopNest 2 */
            for (int i_27 = 2; i_27 < 17;i_27 += 1)
            {
                for (int i_28 = 3; i_28 < 18;i_28 += 1)
                {
                    {
                        var_39 = max((arr_81 [i_17] [i_26]), ((((var_9 == var_12) == ((var_10 ? (arr_73 [i_17] [18] [i_27] [i_28] [18]) : 58))))));
                        arr_88 [i_17 - 3] [i_17] [i_27] [i_27] = (min(123, (((max(45, var_9)) ^ (4055001447 ^ 86)))));
                        var_40 = (min(var_40, 0));

                        for (int i_29 = 3; i_29 < 18;i_29 += 1)
                        {
                            arr_93 [i_17] [i_17] [i_26] [i_27 - 2] [i_17] [i_28] [i_17] = var_4;
                            arr_94 [i_17] [i_17] [i_27] [i_17] [i_29] [i_17] = (((~var_2) ? (!var_2) : var_5));
                            arr_95 [i_17] [i_17] [i_27 - 2] [i_28 - 3] [i_27 + 2] [i_28] = (min(var_8, (max(75, ((min(var_11, (arr_55 [i_17] [i_26]))))))));
                            arr_96 [i_29] [i_17] [i_27] [i_17] [i_17] = ((-(arr_73 [i_17] [i_28] [i_27 - 1] [i_26] [i_17])));
                        }
                    }
                }
            }
            var_41 = (max(var_41, ((min(133, (max((arr_65 [i_17]), var_6)))))));

            for (int i_30 = 0; i_30 < 19;i_30 += 1) /* same iter space */
            {
                var_42 = (min(-1546969947, 5068));
                var_43 = 1;
                var_44 = ((((104 ? var_1 : (min(var_7, var_3)))) << ((-(~var_12)))));
                var_45 += var_4;
                arr_99 [i_17] [i_17] [i_17] [i_30] = var_6;
            }
            for (int i_31 = 0; i_31 < 19;i_31 += 1) /* same iter space */
            {

                for (int i_32 = 2; i_32 < 15;i_32 += 1)
                {
                    arr_107 [i_17] [i_26] = ((-(((((var_12 ? var_0 : var_4)) >= (~15))))));
                    var_46 = var_12;
                    arr_108 [i_17] = ((-(arr_49 [i_32] [i_26])));
                }
                /* LoopNest 2 */
                for (int i_33 = 1; i_33 < 15;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 19;i_34 += 1)
                    {
                        {
                            var_47 = (min(var_47, ((max((((((max(53, var_1))) ? 10 : ((min(251, (arr_13 [13] [13]))))))), (((arr_56 [i_17 - 3]) ? ((-5 ? var_9 : (arr_109 [i_17] [i_31] [i_31] [i_17]))) : (((241 << (((-76 + 101) - 23))))))))))));
                            var_48 = ((max(var_11, (arr_91 [i_17 - 1] [i_26] [i_17 - 4] [i_33 - 1] [2]))));
                        }
                    }
                }
            }
            var_49 = ((-(arr_4 [i_17])));
            arr_115 [i_17] [i_26] = var_11;
        }
        for (int i_35 = 0; i_35 < 19;i_35 += 1)
        {
            var_50 = (max((!-var_1), (max(82, ((1430157434070496621 ? 1 : 1))))));

            for (int i_36 = 0; i_36 < 19;i_36 += 1)
            {
                arr_120 [i_17] [i_35] [i_17] [i_17] = 1;
                var_51 = (min(var_51, ((min(((((((43788 ? var_1 : (arr_111 [i_36])))) ? (max(var_8, 1)) : (!0)))), ((~(max((arr_110 [i_17 - 2] [i_35] [i_36] [i_35]), 2601231806)))))))));
                /* LoopNest 2 */
                for (int i_37 = 1; i_37 < 16;i_37 += 1)
                {
                    for (int i_38 = 1; i_38 < 18;i_38 += 1)
                    {
                        {
                            var_52 = 43780;
                            var_53 &= var_9;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_39 = 0; i_39 < 19;i_39 += 1)
            {
                arr_129 [8] [i_35] [i_17] = (-114 <= var_7);
                arr_130 [i_17] [i_17] = -var_3;
                var_54 = (~0);
            }
            /* LoopNest 2 */
            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 19;i_41 += 1)
                {
                    {
                        var_55 -= (min(16663, 21755));
                        var_56 = var_2;
                    }
                }
            }
        }
        arr_137 [i_17] [i_17] = 1;
    }
    #pragma endscop
}
