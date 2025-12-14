/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = var_2;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 |= var_0;
            var_15 = var_7;
            var_16 = ((var_2 ? -var_2 : var_0));
            var_17 = var_9;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 = ((var_11 ? ((var_4 ? var_11 : var_7)) : var_6));
                            var_19 = (var_10 ? var_0 : var_2);
                            var_20 = (~3514417158);
                        }
                    }
                }
            }
            var_21 = ((var_4 ? var_2 : var_5));
            arr_13 [i_2] [i_0] = var_11;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_22 |= ((var_6 ? var_7 : var_8));
                            arr_23 [i_0] [i_2] [i_2] [i_2] = var_2;
                            var_23 = ((var_11 << (var_6 - 16809210693814962640)));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_24 *= ((53222 ? 32081 : 0));
                            var_25 = (max(var_25, (~var_8)));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_10 ? var_7 : var_4));
                        }
                        var_26 = (33446 - 33454);
                        arr_27 [i_0] [8] [i_6] [1] [1] = (var_2 ? (!var_3) : (var_7 + var_4));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_27 |= (((((var_9 ? var_3 : var_3))) ? var_1 : ((var_2 ? var_5 : var_10))));
            var_28 ^= (var_6 ^ var_4);
            var_29 = (((var_0 + 2147483647) << (var_8 - 16600804732249612576)));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_30 |= ((var_9 ? var_9 : var_10));
            arr_37 [i_12] [i_12] [i_11] = var_11;

            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                var_31 = var_6;
                var_32 = (((var_8 ? var_0 : var_6)));
                arr_41 [i_11] [i_13] [4] [i_13] = var_10;
                var_33 = var_3;
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        {
                            var_34 |= var_11;
                            var_35 = var_7;
                        }
                    }
                }
                var_36 = ((var_7 << ((((var_5 ? var_2 : var_6)) - 3314425254435429577))));
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 8;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            var_37 = var_9;
                            var_38 = var_0;
                        }
                        for (int i_20 = 3; i_20 < 8;i_20 += 1)
                        {
                            var_39 = var_3;
                            var_40 = var_8;
                            var_41 += var_4;
                        }
                        arr_60 [i_11] [i_12] [2] [5] = var_6;
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            var_42 = (var_11 + var_4);
            var_43 ^= var_3;
            arr_63 [i_21] = ((var_2 << (var_9 - 5776511915761682066)));
        }
        for (int i_22 = 0; i_22 < 10;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                arr_71 [i_11] [i_22] [i_11] [i_11] = (var_3 || var_2);
                var_44 += var_1;
            }
            for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
            {
                var_45 = ((var_4 ? (!var_11) : ((var_10 ? var_0 : var_2))));

                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    var_46 = var_3;
                    var_47 = var_0;
                    var_48 = ((var_10 ? var_1 : var_9));
                    var_49 = (min(var_49, var_6));
                }
                for (int i_26 = 3; i_26 < 9;i_26 += 1)
                {
                    var_50 = (max(var_50, (((var_6 ? var_11 : var_7)))));
                    var_51 = ((var_5 ? ((var_10 ? var_5 : var_1)) : var_11));
                    var_52 -= ((((var_2 ? var_11 : var_1))) ? var_7 : var_10);
                    var_53 &= var_10;
                    var_54 &= var_2;
                }
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    var_55 = (((((var_10 ? var_6 : var_3))) ? var_5 : var_6));
                    var_56 = 32081;
                }
                var_57 = (((var_6 ? var_1 : var_10)));
            }
            for (int i_28 = 0; i_28 < 10;i_28 += 1) /* same iter space */
            {
                var_58 = var_2;
                arr_84 [i_22] = (!var_7);
                var_59 = (!var_8);

                for (int i_29 = 0; i_29 < 10;i_29 += 1)
                {
                    var_60 = var_7;
                    var_61 = -var_3;
                    var_62 = var_6;
                }
                for (int i_30 = 0; i_30 < 10;i_30 += 1)
                {
                    arr_90 [i_11] [i_22] [i_28] [i_28] [i_30] = var_9;
                    var_63 = (((var_8 ? var_10 : var_9)));
                    var_64 = ((!(6665827978993441767 / 147)));
                }
                for (int i_31 = 2; i_31 < 6;i_31 += 1)
                {
                    var_65 = ((6665827978993441762 ? ((var_11 ? var_3 : var_1)) : 421800883253133190));
                    var_66 = ((var_8 ? var_6 : var_3));
                    var_67 = var_7;
                    arr_94 [0] [i_22] [i_22] [i_31 + 3] = var_6;
                    var_68 = var_1;
                }
                for (int i_32 = 0; i_32 < 10;i_32 += 1)
                {
                    var_69 = var_3;
                    var_70 = (min(var_70, (((var_1 ? 3229956876055925045 : 86)))));
                }
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 10;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 10;i_34 += 1)
                    {
                        {
                            var_71 = ((var_9 ? var_3 : var_4));
                            var_72 |= var_11;
                            var_73 = var_6;
                            var_74 = var_4;
                        }
                    }
                }
            }
            for (int i_35 = 0; i_35 < 10;i_35 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 10;i_36 += 1)
                {
                    for (int i_37 = 2; i_37 < 8;i_37 += 1)
                    {
                        {
                            var_75 = ((var_1 ? var_10 : var_10));
                            var_76 = var_0;
                        }
                    }
                }
                var_77 = (!6665827978993441767);
                var_78 ^= (462925105 != 421800883253133198);

                for (int i_38 = 0; i_38 < 0;i_38 += 1)
                {
                    arr_111 [i_11] [i_22] [9] [i_38] [i_38] = ((var_9 ? var_1 : var_9));
                    var_79 = var_5;
                    var_80 = (((var_2 - var_10) ? var_4 : var_2));
                }
                var_81 = -var_6;
            }

            for (int i_39 = 0; i_39 < 10;i_39 += 1)
            {
                var_82 = var_4;
                arr_116 [i_11] [i_39] [8] = var_5;
                var_83 = (((var_4 && var_6) ? var_0 : (!var_6)));
            }
            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                var_84 &= ((6665827978993441767 ? 3229956876055925045 : 10499593012776048823));

                for (int i_41 = 0; i_41 < 10;i_41 += 1)
                {

                    for (int i_42 = 2; i_42 < 9;i_42 += 1)
                    {
                        var_85 = ((var_1 ? (var_7 == var_5) : var_8));
                        arr_126 [i_11] [i_22] [i_40] [4] [i_42 - 1] = ((var_10 ? var_6 : var_9));
                    }
                    for (int i_43 = 0; i_43 < 10;i_43 += 1)
                    {
                        var_86 = ((var_3 ? var_10 : var_10));
                        var_87 = ((var_7 ? 10499593012776048799 : var_7));
                    }
                    for (int i_44 = 0; i_44 < 10;i_44 += 1)
                    {
                        var_88 = (var_10 || var_1);
                        var_89 = var_5;
                    }
                    for (int i_45 = 0; i_45 < 1;i_45 += 1)
                    {
                        var_90 = var_11;
                        var_91 = (!var_2);
                    }
                    var_92 = var_3;
                    var_93 = var_5;
                }

                for (int i_46 = 0; i_46 < 10;i_46 += 1)
                {
                    arr_139 [2] [4] [6] [i_46] &= var_9;
                    var_94 = var_1;

                    for (int i_47 = 0; i_47 < 10;i_47 += 1)
                    {
                        var_95 &= var_4;
                        arr_143 [i_22] [i_40] [i_22] = var_10;
                        var_96 = var_9;
                        var_97 = ((var_3 ? var_2 : (((var_1 ? var_5 : var_5)))));
                        var_98 = (60 ? 3229956876055925045 : 3229956876055925044);
                    }
                    for (int i_48 = 0; i_48 < 10;i_48 += 1)
                    {
                        var_99 = (var_11 ? var_10 : var_10);
                        var_100 = var_3;
                    }
                }
                for (int i_49 = 0; i_49 < 10;i_49 += 1)
                {

                    for (int i_50 = 0; i_50 < 1;i_50 += 1)
                    {
                        var_101 -= var_3;
                        var_102 = var_6;
                        var_103 = ((3229956876055925066 ? var_4 : ((var_11 ? var_3 : var_7))));
                    }
                    for (int i_51 = 2; i_51 < 6;i_51 += 1)
                    {
                        var_104 = (max(var_104, var_6));
                        var_105 = var_6;
                        var_106 = ((var_8 ? (var_1 < var_5) : ((var_1 ? var_6 : var_6))));
                    }
                    var_107 = var_11;
                    arr_155 [i_40] [i_49] = ((var_11 ? ((var_0 ? var_11 : var_5)) : var_8));
                }
                for (int i_52 = 3; i_52 < 9;i_52 += 1)
                {
                    arr_159 [i_22] [8] [5] [i_40] = var_8;
                    var_108 += var_8;
                    var_109 = var_3;
                }
                for (int i_53 = 4; i_53 < 6;i_53 += 1)
                {
                    arr_162 [i_11] [i_11] [i_40] [3] = var_6;
                    var_110 = (!var_5);

                    for (int i_54 = 3; i_54 < 9;i_54 += 1) /* same iter space */
                    {
                        arr_166 [i_40] [2] [i_40] [5] [2] [i_11] [i_40] = (((!var_10) ? var_8 : var_1));
                        arr_167 [i_22] [i_40] [i_53 + 2] = var_9;
                        var_111 = (min(var_111, var_7));
                        var_112 = (var_8 % var_0);
                    }
                    for (int i_55 = 3; i_55 < 9;i_55 += 1) /* same iter space */
                    {
                        var_113 = ((var_9 ? var_1 : var_3));
                        var_114 = (max(var_114, (~var_9)));
                        var_115 *= (((((var_1 ? var_10 : var_4))) ? var_11 : var_2));
                    }
                }
                var_116 = (!var_5);
                arr_172 [i_40] = (~var_9);
            }
            var_117 = ((~var_2) ? (((var_6 ? var_11 : var_5))) : var_8);
            var_118 = var_3;

            for (int i_56 = 0; i_56 < 10;i_56 += 1)
            {
                var_119 = var_10;
                /* LoopNest 2 */
                for (int i_57 = 0; i_57 < 10;i_57 += 1)
                {
                    for (int i_58 = 0; i_58 < 10;i_58 += 1)
                    {
                        {
                            var_120 = ((var_6 ? (((32081 ? var_0 : 77))) : 11780916094716109845));
                            var_121 = var_9;
                            var_122 = var_8;
                            var_123 += (var_4 ? ((77 ? 1024 : var_1)) : (((var_4 ? var_0 : var_0))));
                        }
                    }
                }
                arr_181 [i_56] [i_22] [i_56] = ((var_9 ? var_11 : var_0));
            }
        }
        var_124 = ((((var_0 ? var_9 : var_7))) ? var_10 : var_10);
    }
    /* vectorizable */
    for (int i_59 = 0; i_59 < 10;i_59 += 1) /* same iter space */
    {
        var_125 = var_6;
        var_126 = var_8;
    }
    for (int i_60 = 0; i_60 < 24;i_60 += 1)
    {
        var_127 *= var_11;
        arr_188 [i_60] [17] = var_1;
    }
    #pragma endscop
}
