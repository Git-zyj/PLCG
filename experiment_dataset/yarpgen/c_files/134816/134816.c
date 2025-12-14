/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 &= (~var_1);
                        var_15 = (min(var_15, ((min(((min(-8810, 168))), 64)))));
                        arr_11 [i_0] [i_0] = var_2;
                        var_16 = -64;
                    }
                }
            }
        }
        var_17 = 65510;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_18 = ((((~var_2) + 2147483647)) >> (min(var_10, var_1)));
                        var_19 = (max(var_19, ((((65535 >> (var_3 - 1061716867)))))));
                        var_20 = (min(((max(var_2, var_7))), var_1));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_21 = (max(var_1, ((-(-138214753 - var_2)))));
        arr_22 [i_7] = (!var_10);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_22 = ((min(var_2, var_4)));
                        var_23 = (var_4 * var_7);
                        var_24 = var_1;
                        var_25 = ((+(((var_7 <= 42) & (var_8 < var_8)))));
                        arr_31 [6] [i_8] [i_9] [6] = (max(-var_11, var_6));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_26 = (min(((max(252, var_12))), var_10));
            var_27 &= (min((min((~var_1), ((min(var_9, var_11))))), ((min(32856, (max(var_0, var_10)))))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_28 = (1553528073 != 25);
            arr_37 [i_7] [i_12] [i_12] = var_11;
        }
        var_29 = 64;
    }

    for (int i_13 = 3; i_13 < 8;i_13 += 1)
    {
        arr_41 [i_13] = 108;

        for (int i_14 = 4; i_14 < 8;i_14 += 1)
        {
            var_30 = 207;
            arr_45 [i_13] = var_3;
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    {
                        var_31 = (max(var_31, -1197599628));
                        arr_51 [i_13] = var_9;
                        var_32 = (min((+-48428), (~var_4)));

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_55 [i_13] [i_14] [i_14] [i_16 + 1] [i_17] [i_13] = (min(var_8, (max(((236451202 >> (var_3 - 1061716855))), 7779))));
                            var_33 = (-(max(var_4, 2288975843)));
                            var_34 = var_3;
                            var_35 = (min(-64, ((min(39585, 1501403041)))));
                            var_36 = ((((-(((-27643 + 2147483647) << (26 - 26))))) & var_0));
                        }
                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            arr_58 [i_18] [i_14] [i_18] [i_16] [i_14] [i_13] [i_13] = var_8;
                            var_37 = (min(var_37, var_6));
                            var_38 = ((!(!var_11)));
                        }
                    }
                }
            }
            var_39 = (+-34359738364);
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                var_40 = (var_11 | 1537519087305172344);
                var_41 = 34921;
            }
            for (int i_21 = 3; i_21 < 10;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    var_42 = -268;
                    arr_72 [i_13] [i_22] [i_22] [i_22] [i_13] = var_1;
                    var_43 = 1439768061;
                    arr_73 [i_13] [8] [i_13] [i_22] &= 28694;
                    var_44 &= var_5;
                }
                for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
                {
                    arr_76 [9] [i_19] [i_19] [i_13] = 6648986294701116500;
                    arr_77 [5] [i_13] [i_13] [i_13 - 3] = -96;
                }
                for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
                {
                    var_45 = 59248;
                    arr_80 [i_13] [i_13] = var_2;
                }

                for (int i_25 = 1; i_25 < 8;i_25 += 1)
                {
                    arr_85 [i_25] [i_13] [i_13] [i_13] = var_9;
                    arr_86 [i_13] [i_13] [i_13] [i_21] [i_25 + 2] [i_25 - 1] = var_12;
                }
            }

            for (int i_26 = 2; i_26 < 10;i_26 += 1)
            {

                for (int i_27 = 0; i_27 < 11;i_27 += 1) /* same iter space */
                {

                    for (int i_28 = 0; i_28 < 11;i_28 += 1) /* same iter space */
                    {
                        arr_94 [i_13] [i_19] [i_26] [i_13] [i_27] [i_28] [i_28] = (~184);
                        arr_95 [i_13] [i_19 + 2] [i_13] [i_13] [i_28] = var_0;
                        arr_96 [i_13] [i_19] [i_19] [i_26] [i_13] [i_27] [i_28] = 236451215;
                    }
                    for (int i_29 = 0; i_29 < 11;i_29 += 1) /* same iter space */
                    {
                        var_46 = 9223372036854775807;
                        arr_100 [i_13 - 2] [i_13] = (-122 * var_11);
                    }
                    for (int i_30 = 0; i_30 < 11;i_30 += 1) /* same iter space */
                    {
                        var_47 -= -var_10;
                        var_48 = var_6;
                        var_49 = (~-32);
                        arr_104 [i_13] [i_13] [i_13] = ((var_8 + 2147483647) >> (var_12 - 3808));
                        arr_105 [i_13 + 2] [i_13] [i_13] [i_13] [i_13] = (0 - -113);
                    }
                    for (int i_31 = 0; i_31 < 11;i_31 += 1) /* same iter space */
                    {
                        arr_108 [i_13] [i_19] [i_26] [i_27] [i_13] [i_31] = ((var_2 - (var_10 ^ -58)));
                        var_50 = var_5;
                        var_51 = (-90 > var_11);
                    }
                    arr_109 [i_13] [i_13] = (~var_8);
                    var_52 = -127;
                }
                for (int i_32 = 0; i_32 < 11;i_32 += 1) /* same iter space */
                {
                    var_53 = ((var_6 >> (var_6 - 797992846)));
                    arr_113 [i_13] [i_19 + 1] [i_26] [i_19 + 1] = (+-1537519087305172332);
                }
                for (int i_33 = 0; i_33 < 11;i_33 += 1) /* same iter space */
                {
                    arr_116 [i_13] [i_13] [i_13] [i_26] [i_13] [i_33] = var_10;
                    arr_117 [i_13] = (var_10 == var_6);
                    arr_118 [i_13] [i_26] [i_26] [i_19] [i_13] = 255;
                    var_54 = (~65510);
                }

                for (int i_34 = 3; i_34 < 9;i_34 += 1)
                {

                    for (int i_35 = 1; i_35 < 7;i_35 += 1)
                    {
                        arr_124 [i_13] [i_13] [i_13] [8] [i_13] = 41767;
                        arr_125 [i_13] = (2088960 < var_3);
                    }
                    for (int i_36 = 0; i_36 < 11;i_36 += 1)
                    {
                        var_55 &= (!var_6);
                        var_56 = var_5;
                        arr_128 [i_13] [i_19] [i_26] [i_26] [i_34] [i_36] [10] &= (var_3 >= var_12);
                        arr_129 [i_13] [i_13] [i_13] [i_13] [i_13] [7] = 217;
                        arr_130 [i_13] [i_13] [i_13] [i_13 - 2] [i_13] [i_13 - 1] = (!var_12);
                    }
                    arr_131 [8] [i_19] [i_26] [i_26] &= 23768;
                    var_57 = -2925637053268462338;
                    var_58 &= (~var_10);
                    arr_132 [i_13 - 3] [i_19] [10] [i_34] [i_13 - 3] &= -3709381194322427303;
                }
            }
            for (int i_37 = 1; i_37 < 9;i_37 += 1)
            {
                arr_136 [i_13] [i_13] [i_19] [i_13] = (~-8415888239071357710);
                var_59 -= (-var_0 ^ var_2);
                var_60 ^= (-127 - 1);
                arr_137 [i_13] [i_13] [i_13] = var_12;
            }
            for (int i_38 = 3; i_38 < 10;i_38 += 1)
            {

                for (int i_39 = 2; i_39 < 10;i_39 += 1)
                {
                    var_61 = var_1;
                    var_62 = (1 | var_11);
                    var_63 = var_12;
                    var_64 = var_6;
                }
                for (int i_40 = 0; i_40 < 1;i_40 += 1)
                {
                    arr_147 [i_13] [i_13] [2] [i_38] [2] = (!97);
                    var_65 = var_3;
                    var_66 = var_5;
                    var_67 = 255;
                }
                var_68 = 9004363051488873595;
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 11;i_41 += 1)
                {
                    for (int i_42 = 3; i_42 < 7;i_42 += 1)
                    {
                        {
                            arr_154 [i_13] = var_12;
                            arr_155 [i_13] = var_8;
                        }
                    }
                }
            }
            for (int i_43 = 0; i_43 < 11;i_43 += 1)
            {
                var_69 = (!var_0);
                var_70 = var_2;
                var_71 = (max(var_71, ((-(var_10 > var_4)))));
                /* LoopNest 2 */
                for (int i_44 = 0; i_44 < 11;i_44 += 1)
                {
                    for (int i_45 = 2; i_45 < 8;i_45 += 1)
                    {
                        {
                            arr_164 [i_13] [i_13] [i_13] [i_44] [i_45] = var_3;
                            var_72 = var_4;
                        }
                    }
                }
                var_73 = var_3;
            }
        }
        arr_165 [8] |= (((((min((-2147483647 - 1), 2758516704)) | -var_10)) & var_6));
        arr_166 [4] &= ((min(var_7, var_1)));
    }

    for (int i_46 = 3; i_46 < 14;i_46 += 1)
    {

        /* vectorizable */
        for (int i_47 = 3; i_47 < 14;i_47 += 1)
        {
            arr_173 [i_46] = (~var_6);
            var_74 = var_10;
        }
        for (int i_48 = 0; i_48 < 1;i_48 += 1)
        {
            arr_176 [i_46] [i_48] = (((max(var_5, 1284748410)) & ((min((max(var_3, -1537519087305172344)), var_5)))));
            var_75 &= (max((56907 - var_4), (~2147483647)));
            arr_177 [i_46] [i_46] [i_48] = (var_0 | var_2);
        }
        /* LoopNest 3 */
        for (int i_49 = 0; i_49 < 15;i_49 += 1)
        {
            for (int i_50 = 0; i_50 < 15;i_50 += 1)
            {
                for (int i_51 = 1; i_51 < 13;i_51 += 1)
                {
                    {
                        arr_187 [i_46 - 1] [i_46 - 3] [i_46] [i_46] = -110;
                        var_76 = (max(-4827039404776322011, ((max(var_1, var_9)))));
                        arr_188 [i_46] [6] [i_46 - 2] [i_46 - 2] [i_46] = 1269570889876815482;
                        var_77 &= (!var_3);
                    }
                }
            }
        }
    }
    #pragma endscop
}
