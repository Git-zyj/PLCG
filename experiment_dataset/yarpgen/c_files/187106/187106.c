/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = var_3;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = var_3;
            var_17 = var_10;
            var_18 = ((var_7 ? var_13 : var_4));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                var_19 = (min(var_19, (~var_13)));
                arr_13 [i_2] [i_2 - 1] [1] [i_2] = var_9;
                arr_14 [i_2] [i_2] [i_2 + 1] [11] = var_9;
            }
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_19 [i_2] = (~var_8);
                    var_20 = var_15;
                    var_21 = ((~(!var_13)));
                    arr_20 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [2] = (~-4);
                }

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_0] [i_2 + 1] [i_4 + 1] [i_4] [3] [i_2] [i_0] = -var_15;
                        var_22 = (max(var_22, (-32767 - 1)));
                        var_23 &= var_0;
                    }
                    var_24 = (var_15 ? var_13 : var_14);
                    var_25 = var_9;
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_2] [i_2 - 1] [i_4 + 2] [i_2] [i_4] = ((var_13 ? var_14 : -var_12));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_31 [11] [i_2] [i_4] [i_9] = var_14;
                        var_26 = var_9;
                        var_27 = (max(var_27, var_13));
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_28 = (~var_3);
                        var_29 = var_4;
                    }

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_30 += var_8;
                        var_31 = -var_10;
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_32 = -var_1;
                        var_33 = (((var_15 ? var_0 : var_0)));
                        var_34 = -var_0;
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_35 += (~var_2);
                        var_36 = var_3;
                    }
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        var_37 = ((var_9 ? var_1 : var_3));
                        var_38 = (~var_8);
                        var_39 = (max(var_39, (((!(((4079937948271970557 ? 0 : var_4))))))));
                    }
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_40 = (!var_1);
                    var_41 = (!var_15);
                    var_42 = var_0;
                }
            }
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                var_43 = -var_13;
                var_44 = var_6;

                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    arr_50 [i_2] [i_2] = (!var_2);
                    var_45 = (min(var_45, var_10));
                    var_46 = ((var_15 ? var_4 : var_4));
                }
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_54 [i_2] [17] [i_2] [9] = var_10;
                var_47 = (~var_10);
                arr_55 [0] [18] [i_2 + 1] [i_2] = (!var_2);

                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        arr_60 [i_19] [i_18] [i_18] [i_19] [i_0] [i_2] [16] &= -var_10;
                        var_48 = var_5;
                    }
                    var_49 = (min(var_49, var_14));
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        {
                            var_50 = var_12;
                            var_51 &= ((var_0 ? var_11 : var_8));
                        }
                    }
                }
            }

            for (int i_24 = 0; i_24 < 20;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 20;i_25 += 1)
                {

                    for (int i_26 = 2; i_26 < 18;i_26 += 1)
                    {
                        arr_76 [i_2] [i_2 + 1] [i_24] [15] [i_26] = (~var_15);
                        var_52 ^= var_1;
                    }
                    for (int i_27 = 1; i_27 < 19;i_27 += 1)
                    {
                        arr_79 [4] [11] [i_2] [i_27] = ((var_6 ? var_14 : var_12));
                        arr_80 [i_2] = ((!var_9) ? (!var_3) : (!var_7));
                        var_53 = (max(var_53, var_14));
                        var_54 = ((var_9 ? var_1 : var_6));
                        var_55 = (min(var_55, var_4));
                    }
                    for (int i_28 = 0; i_28 < 20;i_28 += 1)
                    {
                        var_56 = ((~((var_10 ? var_15 : var_9))));
                        var_57 = var_1;
                        arr_85 [i_2] = var_4;
                        var_58 = var_12;
                    }

                    for (int i_29 = 0; i_29 < 20;i_29 += 1)
                    {
                        var_59 = var_3;
                        var_60 = -var_7;
                        arr_88 [i_2] [i_2 - 1] [i_29] [1] [i_2] [1] [i_29] = var_1;
                    }
                    for (int i_30 = 1; i_30 < 19;i_30 += 1)
                    {
                        var_61 = var_5;
                        arr_91 [i_2] [i_24] [12] [i_30] = (~var_8);
                        var_62 = -var_12;
                    }
                    for (int i_31 = 0; i_31 < 20;i_31 += 1)
                    {
                        var_63 = (min(var_63, var_3));
                        var_64 = (min(var_64, (((var_5 ? var_8 : var_2)))));
                        var_65 = (min(var_65, var_8));
                    }
                }
                for (int i_32 = 0; i_32 < 20;i_32 += 1)
                {
                    arr_97 [i_0] [i_2] [i_24] [16] [18] |= (var_1 ? var_14 : var_2);
                    var_66 = var_15;

                    for (int i_33 = 0; i_33 < 20;i_33 += 1)
                    {
                        var_67 = var_3;
                        var_68 = (~var_15);
                    }
                    for (int i_34 = 0; i_34 < 20;i_34 += 1)
                    {
                        var_69 ^= var_9;
                        var_70 = var_7;
                        var_71 = ((var_8 ? var_14 : var_2));
                    }
                }
                for (int i_35 = 0; i_35 < 20;i_35 += 1)
                {
                    var_72 = (~(~var_6));
                    var_73 = ((var_0 ? var_6 : var_14));
                }
                for (int i_36 = 0; i_36 < 20;i_36 += 1)
                {
                    var_74 = var_15;
                    var_75 = var_14;
                    arr_110 [i_0 + 1] [i_2 - 1] [15] [i_2] [i_36] = -var_15;

                    for (int i_37 = 1; i_37 < 18;i_37 += 1)
                    {
                        var_76 = (max(var_76, var_8));
                        arr_114 [i_0] [i_0 - 1] [i_0] [i_2] [i_0 - 1] = ((var_12 ? var_13 : var_8));
                        var_77 = var_12;
                    }
                    arr_115 [i_24] [i_2] = var_15;
                }
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 20;i_38 += 1)
                {
                    for (int i_39 = 3; i_39 < 19;i_39 += 1)
                    {
                        {
                            arr_121 [14] [2] [i_39] |= ((var_8 ? var_0 : var_0));
                            var_78 &= var_0;
                        }
                    }
                }
                var_79 = var_4;
            }
            for (int i_40 = 1; i_40 < 18;i_40 += 1)
            {

                for (int i_41 = 0; i_41 < 20;i_41 += 1)
                {
                    var_80 = (~var_10);
                    var_81 = (var_1 ? var_2 : var_8);
                    arr_127 [i_2] [i_2] [i_2] = -var_0;
                }
                var_82 = (min(var_82, (~var_2)));

                for (int i_42 = 1; i_42 < 19;i_42 += 1)
                {
                    var_83 = var_7;
                    var_84 = var_3;
                }
            }
            for (int i_43 = 0; i_43 < 20;i_43 += 1)
            {
                var_85 = var_11;
                var_86 = (((~var_3) ? var_7 : (((var_6 ? var_0 : var_2)))));

                for (int i_44 = 0; i_44 < 20;i_44 += 1)
                {

                    for (int i_45 = 4; i_45 < 18;i_45 += 1)
                    {
                        arr_139 [i_0 - 2] [i_2] [i_43] [i_0 - 2] [i_45 + 1] = ((var_5 ? var_6 : var_3));
                        var_87 |= var_13;
                    }
                    for (int i_46 = 0; i_46 < 20;i_46 += 1)
                    {
                        arr_143 [9] [i_2] [i_43] [i_43] [10] = ((24 ? var_14 : (~var_4)));
                        var_88 += ((~((41 ? 2147483647 : 31290))));
                    }
                    var_89 = var_13;

                    for (int i_47 = 0; i_47 < 20;i_47 += 1)
                    {
                        var_90 = -var_13;
                        var_91 = var_10;
                    }
                }
                for (int i_48 = 3; i_48 < 18;i_48 += 1)
                {
                    var_92 = var_3;
                    var_93 = ((var_4 ? var_4 : var_6));

                    for (int i_49 = 1; i_49 < 17;i_49 += 1)
                    {
                        var_94 = var_2;
                        var_95 = var_9;
                        var_96 = (~var_8);
                        arr_152 [i_0] [i_2] [i_43] [i_48 - 1] = var_8;
                        var_97 = var_1;
                    }
                }
                for (int i_50 = 0; i_50 < 20;i_50 += 1) /* same iter space */
                {
                    arr_155 [2] [i_2] [i_2] [11] = ((var_12 ? var_13 : var_4));
                    var_98 = var_10;
                    arr_156 [i_0] [16] [i_43] [i_43] [i_43] [i_50] &= var_12;
                    arr_157 [i_50] [i_2] [16] [i_2] &= var_10;

                    for (int i_51 = 1; i_51 < 17;i_51 += 1)
                    {
                        var_99 *= var_7;
                        arr_162 [i_50] [i_50] [i_50] [i_50] [i_2] = ((var_8 ? var_3 : var_1));
                    }
                    for (int i_52 = 0; i_52 < 20;i_52 += 1)
                    {
                        var_100 = var_4;
                        var_101 = (min(var_101, var_1));
                        var_102 *= var_8;
                    }
                }
                for (int i_53 = 0; i_53 < 20;i_53 += 1) /* same iter space */
                {
                    arr_169 [i_2] [i_2] = ((!(((var_9 ? var_5 : var_2)))));
                    var_103 += (!var_3);

                    for (int i_54 = 0; i_54 < 20;i_54 += 1)
                    {
                        var_104 = ((var_15 ? var_12 : var_12));
                        var_105 = -0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_55 = 3; i_55 < 18;i_55 += 1)
            {
                for (int i_56 = 0; i_56 < 20;i_56 += 1)
                {
                    {
                        var_106 |= var_15;
                        arr_178 [i_55 - 2] [i_2] [i_2] [i_2] [i_0 - 2] = var_10;
                        var_107 = -var_12;
                    }
                }
            }
            arr_179 [i_0] [i_2] [14] &= ((!(((var_14 ? var_7 : var_2)))));
        }
        var_108 |= (var_13 ? var_9 : var_1);
        var_109 = var_11;
        var_110 |= ((var_10 ? (~var_10) : var_5));
    }
    var_111 = ((~(~var_15)));
    var_112 = var_2;
    #pragma endscop
}
