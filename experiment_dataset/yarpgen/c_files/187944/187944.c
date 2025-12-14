/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 *= var_10;
    var_19 = (min(var_19, 25720));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, 13));
        var_21 = -25723;
        arr_2 [i_0] [i_0] = 55;
        var_22 = 200;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, 200));
                    arr_14 [i_4] [i_4] [0] [i_4] [i_4] [i_2] = (!76);
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_1] [i_3] [10] [i_5] [i_5] = -25720;
                    arr_19 [5] = var_15;
                }
                var_24 = var_16;
            }
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_25 = 0;
                        arr_28 [0] [i_7 - 2] [0] = -25720;
                        var_26 *= (!-1);
                        arr_29 [i_2] [i_6 + 1] [4] [i_6 + 1] &= 180;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_32 [i_1] [i_6] [8] = (~200);
                        var_27 = var_12;
                        var_28 |= -13;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_35 [7] [i_7] [i_6] = 179;
                        var_29 = 25720;
                        var_30 -= var_1;
                    }
                    var_31 = (~-25730);
                }

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    arr_38 [i_11] [i_2] [6] [i_2] [i_2] [i_1] = 1;
                    arr_39 [i_1] [i_1] [10] [i_11] [1] &= var_1;
                }
                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {
                    var_32 = (max(var_32, 25720));
                    var_33 |= -4294967283;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_34 = (max(var_34, (!var_16)));
                            var_35 = (min(var_35, var_10));
                        }
                    }
                }
                var_36 = 25730;
                arr_49 [i_6] [6] [i_1] [i_1] = -55;
            }

            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            arr_56 [i_2] [i_17] &= 0;
                            var_37 = (!0);
                            var_38 = var_11;
                            arr_57 [i_17] [i_16] [1] [i_2] [i_1] = -var_6;
                        }
                    }
                }
                arr_58 [i_2] [i_2] [i_15 + 1] = var_2;

                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {
                    arr_62 [i_18] = var_1;
                    var_39 = (max(var_39, 208));
                    arr_63 [i_1] [i_2] [i_15] [i_18] = -56;
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_40 = 55;
                        var_41 = 159;
                        var_42 = -var_1;
                    }
                    arr_69 [i_19] [i_15] [i_1] [i_1] = -9942005742874170459;
                }
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    var_43 = (max(var_43, 19));
                    var_44 = var_11;
                    var_45 = -76;
                }
                var_46 = -198758780;
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 12;i_23 += 1)
                {
                    {
                        arr_80 [i_1] [i_1] [i_22] [i_23 - 2] = -7;
                        arr_81 [i_1] [i_23 - 2] = (~var_8);
                        arr_82 [i_22] = (!56);
                    }
                }
            }

            for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
            {
                var_47 &= (!179);
                var_48 = (~7);
                var_49 = 19;
            }
            for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 13;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        {
                            arr_93 [i_1] [i_2] [i_25] [i_25] [i_25] [i_26] [i_27] = 76;
                            var_50 = (!var_14);
                            var_51 = var_13;
                            var_52 = (max(var_52, 0));
                        }
                    }
                }

                for (int i_28 = 0; i_28 < 14;i_28 += 1)
                {
                    var_53 = 16041873100065694970;
                    arr_97 [i_28] [i_25] [i_25] [6] [6] [i_1] = 34;
                    var_54 = (min(var_54, -var_11));
                }
                /* LoopNest 2 */
                for (int i_29 = 4; i_29 < 11;i_29 += 1)
                {
                    for (int i_30 = 4; i_30 < 13;i_30 += 1)
                    {
                        {
                            var_55 = 1;
                            var_56 = (~7);
                            arr_102 [i_1] [i_2] = 25729;
                            arr_103 [1] [1] [i_2] [1] [i_29 - 3] [i_29] [i_30 - 3] = -var_9;
                        }
                    }
                }
                var_57 = -var_2;
            }
            for (int i_31 = 0; i_31 < 14;i_31 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 14;i_32 += 1)
                {
                    for (int i_33 = 1; i_33 < 13;i_33 += 1)
                    {
                        {
                            arr_112 [i_1] [i_2] [i_1] &= var_12;
                            arr_113 [i_1] [i_32] [i_1] [i_1] [10] = 25729;
                        }
                    }
                }
                var_58 = 56;
                var_59 = var_13;
            }
            for (int i_34 = 1; i_34 < 1;i_34 += 1)
            {
                var_60 += -22;
                var_61 = 36650;
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 14;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        {
                            arr_121 [i_35] [i_35] = 4294967282;
                            var_62 = (!255);
                            var_63 = 7;
                            arr_122 [i_1] [i_2] [i_35] = 7;
                            var_64 = (max(var_64, -25742));
                        }
                    }
                }
                var_65 = (max(var_65, 185));
            }
            /* LoopNest 2 */
            for (int i_37 = 0; i_37 < 1;i_37 += 1)
            {
                for (int i_38 = 1; i_38 < 13;i_38 += 1)
                {
                    {
                        var_66 = (~56);
                        var_67 = var_16;
                    }
                }
            }
        }
        for (int i_39 = 0; i_39 < 14;i_39 += 1)
        {
            arr_130 [i_1] [i_39] [i_39] = 19;
            arr_131 [i_1] [i_1] = var_10;
        }
        var_68 = (!16041873100065694970);

        for (int i_40 = 0; i_40 < 14;i_40 += 1)
        {
            /* LoopNest 2 */
            for (int i_41 = 0; i_41 < 14;i_41 += 1)
            {
                for (int i_42 = 2; i_42 < 10;i_42 += 1)
                {
                    {

                        for (int i_43 = 0; i_43 < 1;i_43 += 1)
                        {
                            var_69 = 4040;
                            var_70 *= 8256648507009975359;
                        }
                        var_71 = 2410658704;
                        arr_140 [i_42] [i_40] [i_40] [i_40] = -18;

                        for (int i_44 = 3; i_44 < 11;i_44 += 1)
                        {
                            arr_143 [i_42] [i_42] [8] [1] [i_41] [i_44 + 2] = 0;
                            arr_144 [i_42] = var_11;
                            arr_145 [i_1] [i_42] [i_41] [i_42 + 2] [8] [i_40] [i_40] = var_1;
                        }
                    }
                }
            }
            var_72 = var_7;
        }

        for (int i_45 = 0; i_45 < 14;i_45 += 1) /* same iter space */
        {
            var_73 = -13;
            var_74 = 0;
        }
        for (int i_46 = 0; i_46 < 14;i_46 += 1) /* same iter space */
        {

            for (int i_47 = 0; i_47 < 14;i_47 += 1) /* same iter space */
            {
                var_75 = (max(var_75, 65521));
                arr_156 [i_1] [i_46] [i_47] = -1726103406;

                for (int i_48 = 0; i_48 < 14;i_48 += 1)
                {

                    for (int i_49 = 2; i_49 < 12;i_49 += 1)
                    {
                        var_76 = (min(var_76, -145));
                        var_77 = -7525;
                        var_78 = 1;
                        var_79 = (max(var_79, -var_0));
                    }
                    for (int i_50 = 2; i_50 < 10;i_50 += 1)
                    {
                        var_80 = var_15;
                        var_81 = var_13;
                    }
                    var_82 = var_11;
                    var_83 = (max(var_83, -var_4));
                }
                for (int i_51 = 1; i_51 < 10;i_51 += 1)
                {
                    var_84 = 25764;
                    var_85 = -13;
                }
            }
            for (int i_52 = 0; i_52 < 14;i_52 += 1) /* same iter space */
            {

                for (int i_53 = 2; i_53 < 12;i_53 += 1)
                {
                    var_86 = (max(var_86, 4294967278));
                    arr_173 [i_1] [i_1] [i_46] [i_53 + 1] &= (!-var_1);
                }
                for (int i_54 = 0; i_54 < 1;i_54 += 1)
                {
                    arr_176 [i_1] [3] [4] [i_1] [i_54] [i_54] |= 16041873100065694970;
                    var_87 = (min(var_87, 25742));
                    var_88 ^= var_5;
                }
                var_89 = var_10;
                arr_177 [i_1] [i_1] = var_3;
            }
            /* LoopNest 2 */
            for (int i_55 = 3; i_55 < 12;i_55 += 1)
            {
                for (int i_56 = 0; i_56 < 14;i_56 += 1)
                {
                    {
                        var_90 = 0;
                        arr_182 [i_1] = var_15;
                        var_91 |= 1726103406;
                        var_92 = (min(var_92, -1726103406));
                        arr_183 [i_56] [i_55 - 1] [i_46] [i_46] [6] [i_1] = -var_9;
                    }
                }
            }
            var_93 = -var_0;
        }
    }
    #pragma endscop
}
