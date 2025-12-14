/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((var_5 ? var_12 : var_9)));
        arr_5 [i_0] = var_10;
        var_15 = var_13;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((var_11 ? ((max(var_5, var_1))) : var_12)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_1, (((var_12 ? var_1 : var_0)))));
                                var_18 = (max(var_3, (((min(var_10, var_6))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, var_11));
                        var_20 = var_13;
                        var_21 = var_6;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_22 = var_5;
                        var_23 = ((((max(var_12, var_2))) ? var_14 : ((var_1 ? var_8 : var_8))));
                        var_24 = var_2;
                    }
                    var_25 &= ((var_1 ? ((var_2 ? var_14 : var_3)) : var_9));
                }
            }
        }
        var_26 = var_7;
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_27 = ((var_9 ? (min(var_14, var_1)) : ((max(var_3, var_5)))));
        arr_25 [i_7] = ((((((((248 ? 18446744073709551615 : var_0))) ? (-32767 - 1) : var_0))) ? ((var_9 ? 898678818 : -8877728463652494451)) : (-32767 - 1)));
        var_28 -= (((var_13 ? var_14 : var_13)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 += (min(var_0, (max(48, 3396288477))));
        var_30 = (var_7 ? (min(var_3, var_13)) : (max(var_13, var_13)));
        var_31 -= (max(((var_11 ? (max(var_11, var_8)) : ((var_8 ? var_4 : var_7)))), var_2));
    }
    for (int i_9 = 3; i_9 < 20;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
            {
                arr_38 [i_9] [i_10] [i_10] = var_8;

                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_9] [i_9] [17] [i_9] [15] [i_12 + 2] = var_3;
                    arr_42 [i_9] [i_9] = ((3396288478 ? 3396288477 : 1));
                    arr_43 [i_9] [i_10] [i_10] [10] [14] |= var_11;
                    var_32 = var_4;
                }
                for (int i_13 = 1; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_33 = ((var_0 ? var_6 : var_12));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_9] [i_11] = ((var_4 ? ((var_2 ? var_4 : var_3)) : var_7));
                        arr_51 [i_9] [i_9] [i_10] [i_9] [i_11] [16] [i_14] &= ((var_4 ? var_13 : var_0));
                        var_34 = ((var_7 ? var_13 : var_14));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_35 *= var_5;
                        var_36 = (max(var_36, var_12));
                        var_37 = var_8;
                        var_38 += var_6;
                    }
                    arr_56 [1] [i_9] [i_10] [i_11] [i_11] [i_11] = var_9;
                }
            }
            for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_39 = var_2;
                            var_40 = (max(var_40, var_12));
                            var_41 = ((var_1 ? var_11 : var_12));
                            arr_65 [i_9] [i_9] [i_9] [i_18] = var_1;
                        }
                    }
                }
                var_42 = var_3;
                var_43 = var_7;
            }
            for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    var_44 = (min(var_44, var_8));
                    var_45 = (max(var_45, (((var_3 ? var_13 : var_9)))));
                }
                var_46 ^= var_3;
                arr_72 [i_9] [1] [i_9] = ((var_12 ? var_8 : var_12));
            }
            var_47 |= var_9;
            arr_73 [i_9] [i_9] = var_5;
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_48 = var_4;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {
                        var_49 = (((((var_14 ? var_6 : var_1))) ? var_5 : ((var_12 ? var_14 : var_11))));
                        var_50 = ((max(var_7, var_5)));

                        /* vectorizable */
                        for (int i_24 = 1; i_24 < 20;i_24 += 1)
                        {
                            var_51 = ((var_12 ? var_6 : var_14));
                            var_52 = var_5;
                        }
                        var_53 = ((var_11 ? ((max(((max(var_2, var_6))), ((var_10 ? var_13 : var_7))))) : (max(var_4, (((var_2 ? var_10 : var_5)))))));
                        var_54 = (max(var_54, ((min((max(-77, (max(3396288464, 898678818)))), (((var_10 ? var_14 : var_12))))))));
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            var_55 = (min((min(3396288459, 15215550250058890971)), var_11));
            var_56 = (max(var_56, var_6));
        }
        for (int i_26 = 2; i_26 < 20;i_26 += 1)
        {
            var_57 &= (min((((max(var_3, var_0)))), (((((var_1 ? var_7 : var_11))) ? ((var_12 ? var_3 : var_9)) : var_6))));
            arr_93 [i_9] [i_26] [i_9] = (max(((var_11 ? var_6 : var_6)), var_0));
        }
        var_58 = (min(var_58, var_6));
        var_59 &= ((var_4 ? var_8 : var_2));
        /* LoopNest 3 */
        for (int i_27 = 2; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                for (int i_29 = 3; i_29 < 20;i_29 += 1)
                {
                    {
                        var_60 -= (min(((var_0 ? var_14 : (max(var_8, var_14)))), var_10));
                        var_61 += ((((min(3396288489, 1))) ? var_2 : ((max(var_14, var_12)))));
                    }
                }
            }
        }
    }
    var_62 = ((max(898678798, (-9223372036854775807 - 1))));

    for (int i_30 = 0; i_30 < 1;i_30 += 1)
    {
        /* LoopNest 3 */
        for (int i_31 = 3; i_31 < 8;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 11;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 11;i_33 += 1)
                {
                    {
                        var_63 = (min(var_14, var_5));
                        var_64 = (max(var_64, ((max(var_13, var_13)))));
                        var_65 = var_8;
                    }
                }
            }
        }
        var_66 = (max((min(var_9, var_11)), var_2));
        var_67 = ((((min(var_13, var_14))) ? ((var_6 ? var_3 : var_1)) : var_10));
        var_68 = var_3;
    }
    for (int i_34 = 0; i_34 < 1;i_34 += 1)
    {
        var_69 = (var_6 ? var_11 : ((max(var_0, var_2))));

        for (int i_35 = 0; i_35 < 24;i_35 += 1)
        {
            var_70 = (min((min(var_7, var_5)), ((min(var_9, var_12)))));
            var_71 = (var_3 ? (max(var_7, var_13)) : var_3);
        }
    }
    for (int i_36 = 4; i_36 < 21;i_36 += 1)
    {

        for (int i_37 = 0; i_37 < 23;i_37 += 1)
        {

            for (int i_38 = 0; i_38 < 23;i_38 += 1)
            {

                for (int i_39 = 0; i_39 < 23;i_39 += 1)
                {
                    var_72 = (max(var_10, 2759211074184641104));
                    arr_123 [i_36] [i_36] [i_36] [3] [i_36] [20] = ((max(var_3, var_1)));
                }
                var_73 = var_1;
                var_74 = (max((min(var_4, var_0)), var_10));
            }
            for (int i_40 = 0; i_40 < 23;i_40 += 1)
            {
                arr_127 [i_36] [i_36] &= var_6;
                var_75 *= (min(var_12, (min(var_9, var_9))));
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 23;i_41 += 1)
                {
                    for (int i_42 = 4; i_42 < 22;i_42 += 1)
                    {
                        {
                            var_76 &= var_4;
                            var_77 = ((var_7 ? var_7 : var_6));
                        }
                    }
                }
            }
            var_78 = (min(var_7, (((((var_4 ? var_1 : var_3))) ? var_11 : (min(var_3, var_12))))));
            var_79 = ((((max(var_0, var_9))) ? var_13 : var_0));
        }
        for (int i_43 = 0; i_43 < 23;i_43 += 1)
        {
            var_80 = (max(var_80, ((min((((var_12 ? var_5 : var_13))), var_4)))));
            arr_136 [i_36] [i_36] [0] = var_3;
        }
        /* vectorizable */
        for (int i_44 = 0; i_44 < 23;i_44 += 1)
        {
            arr_139 [i_44] [i_36] [i_36] = var_1;
            var_81 = (max(var_81, ((var_12 ? var_0 : var_11))));
        }
        var_82 = var_3;

        for (int i_45 = 0; i_45 < 23;i_45 += 1)
        {

            for (int i_46 = 0; i_46 < 23;i_46 += 1)
            {
                var_83 &= var_2;

                for (int i_47 = 0; i_47 < 23;i_47 += 1)
                {
                    var_84 = ((min(var_6, var_6)));
                    var_85 = var_14;
                    var_86 = var_0;
                }
                arr_149 [i_46] [i_45] [i_46] [4] = var_9;
            }
            /* vectorizable */
            for (int i_48 = 2; i_48 < 21;i_48 += 1)
            {
                var_87 = ((var_5 ? var_7 : var_3));
                var_88 = ((var_14 ? var_9 : var_8));

                for (int i_49 = 0; i_49 < 23;i_49 += 1)
                {
                    var_89 = var_10;
                    var_90 -= var_13;
                    arr_154 [i_49] [i_49] [i_45] [i_49] [i_36] = ((var_5 ? var_11 : var_5));
                }
                for (int i_50 = 1; i_50 < 22;i_50 += 1)
                {
                    var_91 = (((var_6 ? var_4 : var_5)));
                    var_92 *= var_4;
                    var_93 = var_11;
                }
                for (int i_51 = 1; i_51 < 22;i_51 += 1)
                {
                    var_94 |= var_7;
                    var_95 -= (var_0 ? var_1 : var_3);
                }
            }
            arr_161 [i_36] = (min((((var_4 ? var_12 : var_5))), (max(var_13, var_10))));
            var_96 = (max(var_10, (max(var_14, var_6))));
            var_97 = (max(0, 8796093022208));
        }
        /* LoopNest 2 */
        for (int i_52 = 1; i_52 < 20;i_52 += 1)
        {
            for (int i_53 = 2; i_53 < 20;i_53 += 1)
            {
                {
                    var_98 = (max((max(var_8, var_6)), (min(var_10, var_4))));
                    var_99 = (((1764304444 ? 2714 : 209)));
                }
            }
        }
    }
    var_100 = var_12;
    #pragma endscop
}
