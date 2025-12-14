/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 += var_6;
                            var_11 = var_3;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_12 = -var_3;
                                var_13 = var_5;
                                var_14 = var_0;
                                var_15 = var_5;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_16 = (max(var_16, var_4));
                                var_17 = var_5;
                                var_18 = var_2;
                                var_19 = (max(var_19, (~var_9)));
                            }
                            for (int i_6 = 1; i_6 < 19;i_6 += 1)
                            {
                                var_20 = (~var_4);
                                var_21 = (min(var_21, var_3));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_7] [i_8] [i_8] = (~var_8);
                                var_22 = ((-(~var_2)));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_23 = (min(var_23, (((~(!var_3))))));
                    var_24 = -var_3;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_25 = var_9;
                    var_26 *= -var_6;
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_27 *= var_3;
                                var_28 -= var_6;
                                var_29 = -var_6;
                                arr_40 [i_0] [i_0] = var_9;
                            }
                        }
                    }
                    var_30 = var_1;
                }
                var_31 = var_7;

                /* vectorizable */
                for (int i_15 = 2; i_15 < 18;i_15 += 1)
                {
                    var_32 = var_3;
                    var_33 = var_3;
                    var_34 ^= ((!(!var_7)));
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_35 = var_7;
                    var_36 = var_1;
                    var_37 ^= var_8;
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                {
                    arr_49 [i_17] [i_0] [i_17] [i_1] = -var_7;
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_38 = var_9;
                                arr_55 [i_0] [21] [i_17] [i_1 - 1] [i_0] = -var_4;
                            }
                        }
                    }
                    arr_56 [i_1] [i_0] = var_3;
                }
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {

                    for (int i_21 = 2; i_21 < 18;i_21 += 1)
                    {
                        var_39 = (min(var_39, var_9));

                        for (int i_22 = 1; i_22 < 21;i_22 += 1)
                        {
                            var_40 = var_8;
                            var_41 = (!var_2);
                            var_42 = (max(var_42, (!var_3)));
                            var_43 = (min(var_43, var_7));
                            arr_66 [i_0] [i_1 + 1] [i_20] [i_1 + 1] [i_0] = var_0;
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            var_44 = var_5;
                            arr_69 [i_0] [i_20 - 1] [i_23] = (~var_8);
                        }
                        for (int i_24 = 1; i_24 < 19;i_24 += 1)
                        {
                            var_45 = var_3;
                            var_46 = var_6;
                        }

                        for (int i_25 = 0; i_25 < 22;i_25 += 1)
                        {
                            var_47 = (~var_0);
                            var_48 *= var_9;
                        }
                        for (int i_26 = 1; i_26 < 19;i_26 += 1)
                        {
                            var_49 = (!(!var_9));
                            var_50 = (~var_3);
                            arr_77 [i_0] [i_1] [i_20 - 1] [i_20 - 1] [i_1] = var_6;
                        }
                    }
                    for (int i_27 = 0; i_27 < 22;i_27 += 1)
                    {
                        var_51 = var_0;
                        var_52 = ((~(~var_0)));
                        var_53 = var_4;
                        var_54 *= var_5;
                    }
                    for (int i_28 = 3; i_28 < 18;i_28 += 1)
                    {

                        /* vectorizable */
                        for (int i_29 = 1; i_29 < 19;i_29 += 1)
                        {
                            var_55 = var_4;
                            var_56 = (max(var_56, var_0));
                            arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                        var_57 = var_5;
                        var_58 = var_9;
                    }
                    /* vectorizable */
                    for (int i_30 = 2; i_30 < 21;i_30 += 1)
                    {
                        var_59 *= (~var_0);
                        arr_92 [i_0] [i_1 + 4] = -107;

                        for (int i_31 = 0; i_31 < 1;i_31 += 1)
                        {
                            var_60 = var_9;
                            arr_95 [i_0] [i_0] [i_1 + 2] [i_20] [i_30] [i_31] = (!var_0);
                            var_61 -= -var_1;
                            var_62 -= var_5;
                        }
                        for (int i_32 = 4; i_32 < 20;i_32 += 1)
                        {
                            var_63 -= (~var_8);
                            var_64 = var_3;
                            var_65 *= var_4;
                            var_66 += var_1;
                            var_67 = var_6;
                        }
                        for (int i_33 = 0; i_33 < 1;i_33 += 1)
                        {
                            var_68 = (~var_3);
                            var_69 = (!var_2);
                            var_70 = var_2;
                            var_71 = (min(var_71, var_3));
                        }
                    }
                    arr_101 [i_0] [i_20 - 1] = (~var_6);
                    var_72 -= (~-var_7);
                    var_73 = var_1;
                }
            }
        }
    }

    for (int i_34 = 0; i_34 < 19;i_34 += 1)
    {
        /* LoopNest 2 */
        for (int i_35 = 0; i_35 < 19;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 19;i_36 += 1)
            {
                {
                    var_74 *= ((~(~var_4)));
                    arr_108 [i_34] [i_34] [i_36] |= var_1;
                    var_75 = var_1;
                }
            }
        }
        var_76 -= var_7;
    }
    for (int i_37 = 2; i_37 < 12;i_37 += 1) /* same iter space */
    {
        var_77 = (max(var_77, var_6));
        arr_112 [i_37] = (!61427);
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 14;i_38 += 1)
        {
            for (int i_39 = 2; i_39 < 10;i_39 += 1)
            {
                {
                    var_78 *= var_6;

                    /* vectorizable */
                    for (int i_40 = 1; i_40 < 11;i_40 += 1)
                    {
                        arr_120 [1] [10] [i_39 - 1] [i_37] = var_8;
                        var_79 = (min(var_79, -var_4));

                        for (int i_41 = 1; i_41 < 1;i_41 += 1)
                        {
                            var_80 = (min(var_80, var_4));
                            var_81 = (!var_4);
                        }
                        for (int i_42 = 2; i_42 < 12;i_42 += 1)
                        {
                            var_82 = -var_9;
                            var_83 = var_4;
                        }
                        for (int i_43 = 2; i_43 < 11;i_43 += 1)
                        {
                            var_84 ^= var_7;
                            var_85 = -var_1;
                        }
                    }
                    /* vectorizable */
                    for (int i_44 = 2; i_44 < 11;i_44 += 1)
                    {
                        var_86 = var_7;
                        var_87 += -var_8;
                    }
                }
            }
        }
    }
    for (int i_45 = 2; i_45 < 12;i_45 += 1) /* same iter space */
    {
        var_88 = var_9;
        /* LoopNest 2 */
        for (int i_46 = 0; i_46 < 14;i_46 += 1)
        {
            for (int i_47 = 0; i_47 < 14;i_47 += 1)
            {
                {

                    for (int i_48 = 0; i_48 < 14;i_48 += 1)
                    {
                        arr_144 [i_45] [i_46] [7] [i_46] [i_46] = var_1;
                        var_89 = var_3;
                    }
                    var_90 ^= var_3;
                }
            }
        }
    }
    for (int i_49 = 0; i_49 < 20;i_49 += 1)
    {
        /* LoopNest 3 */
        for (int i_50 = 0; i_50 < 20;i_50 += 1)
        {
            for (int i_51 = 2; i_51 < 17;i_51 += 1)
            {
                for (int i_52 = 3; i_52 < 19;i_52 += 1)
                {
                    {
                        var_91 = (max(var_91, var_6));
                        var_92 = (max(var_92, (!var_3)));
                        var_93 = (~var_7);
                        var_94 = (min(var_94, -var_9));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_53 = 2; i_53 < 17;i_53 += 1)
        {
            for (int i_54 = 2; i_54 < 19;i_54 += 1)
            {
                {
                    var_95 *= var_3;

                    for (int i_55 = 3; i_55 < 19;i_55 += 1)
                    {
                        arr_165 [i_53] [i_53] = -var_8;

                        for (int i_56 = 2; i_56 < 17;i_56 += 1)
                        {
                            var_96 ^= var_5;
                            var_97 += ((~(!var_3)));
                            arr_169 [i_53] [i_53] = var_7;
                            var_98 = var_3;
                        }
                        /* vectorizable */
                        for (int i_57 = 3; i_57 < 18;i_57 += 1)
                        {
                            var_99 = var_3;
                            var_100 = -var_7;
                            var_101 |= var_1;
                        }
                    }
                    for (int i_58 = 0; i_58 < 20;i_58 += 1)
                    {
                        var_102 |= (!var_0);

                        for (int i_59 = 4; i_59 < 17;i_59 += 1)
                        {
                            arr_178 [i_49] [i_53] [i_54 + 1] [i_59 + 3] = var_0;
                            var_103 *= var_8;
                            var_104 = (~var_5);
                            var_105 += var_9;
                        }
                        for (int i_60 = 1; i_60 < 19;i_60 += 1)
                        {
                            var_106 = (!var_2);
                            var_107 = var_3;
                        }
                        /* vectorizable */
                        for (int i_61 = 3; i_61 < 18;i_61 += 1) /* same iter space */
                        {
                            var_108 = (min(var_108, var_5));
                            var_109 -= var_3;
                        }
                        for (int i_62 = 3; i_62 < 18;i_62 += 1) /* same iter space */
                        {
                            var_110 = (max(var_110, -var_8));
                            var_111 = (max(var_111, var_7));
                        }
                    }
                    for (int i_63 = 1; i_63 < 18;i_63 += 1)
                    {

                        for (int i_64 = 0; i_64 < 1;i_64 += 1)
                        {
                            arr_190 [i_53] [i_63] [i_53] = var_3;
                            var_112 = var_3;
                            var_113 += var_7;
                            var_114 = var_8;
                            var_115 = (min(var_115, (~var_3)));
                        }
                        for (int i_65 = 2; i_65 < 18;i_65 += 1)
                        {
                            arr_194 [i_49] [i_53] [i_49] [i_54 - 1] [i_63 - 1] [i_65 - 2] = (!(!var_2));
                            arr_195 [i_49] [i_49] [i_53] [i_49] [i_49] [18] [i_49] = -var_5;
                            var_116 = var_9;
                        }
                        arr_196 [i_49] |= ((!(~var_5)));
                        var_117 += var_0;
                        var_118 = (!var_3);
                    }
                }
            }
        }
    }
    var_119 = var_9;
    #pragma endscop
}
