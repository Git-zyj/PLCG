/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_1] = var_8;
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_7;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_11 ^= var_7;
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_5;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = var_10;
                            var_12 -= var_7;
                            arr_19 [i_1] [i_3] [i_2] [i_0] [i_0] [i_1] = var_7;
                        }
                        var_13 = var_10;
                    }
                }
            }
        }
        arr_20 [i_0] = var_3;
        var_14 = var_8;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_15 = (max(var_15, var_5));
                        arr_29 [i_7] [i_0] = var_1;
                        arr_30 [i_0] [i_0] [i_7] [i_7] = var_1;

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_0] [i_6] [i_6] [i_8] [i_7] [i_9] [i_6] = var_6;
                            var_16 = var_8;
                            var_17 *= var_0;
                            var_18 = var_9;
                        }
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] = var_6;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] = var_3;
                            var_19 = (max(var_19, var_6));
                            var_20 = (min(var_20, var_7));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_40 [i_0] [i_6] [i_0] [i_8] [i_8] [i_0] [i_0] = var_1;
                            arr_41 [i_0 - 1] [i_6] [i_6] [i_8] [i_6] [i_0 - 1] [i_6] = var_9;
                            arr_42 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] [i_8] = var_3;
                            var_21 &= var_3;
                        }
                        var_22 = var_6;
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_45 [i_0] = var_9;
            var_23 = var_0;
        }
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_24 = var_8;
            var_25 = var_3;

            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                arr_51 [i_14] [i_14] [i_14] = var_8;
                var_26 = var_7;
                var_27 = var_4;

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    arr_54 [i_15] [i_14] [i_13] [i_14] [i_0] = var_1;
                    var_28 = (min(var_28, var_8));
                    arr_55 [i_14] [i_13] [i_15] = var_10;
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    var_29 -= var_5;

                    for (int i_17 = 4; i_17 < 9;i_17 += 1) /* same iter space */
                    {
                        var_30 = var_2;
                        var_31 -= var_9;
                        var_32 = var_6;
                    }
                    for (int i_18 = 4; i_18 < 9;i_18 += 1) /* same iter space */
                    {
                        arr_64 [i_14] [i_14] [i_14] [i_14] = var_0;
                        var_33 *= var_0;
                        var_34 = var_2;
                        arr_65 [i_14] [i_14] [i_14] [i_14] [i_18] [i_14] = var_8;
                        var_35 = var_0;
                    }
                    /* vectorizable */
                    for (int i_19 = 4; i_19 < 9;i_19 += 1) /* same iter space */
                    {
                        var_36 = var_2;
                        var_37 = var_3;
                        var_38 = var_3;
                        arr_68 [i_0] [i_0] [i_14] [i_14] [i_14] = var_7;
                    }
                }
            }
            for (int i_20 = 1; i_20 < 9;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 9;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 10;i_22 += 1)
                    {
                        {
                            var_39 = var_0;
                            arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                    }
                }
                arr_77 [i_0] [i_0] [i_0] [i_20] = var_8;
            }
            var_40 = var_6;
            arr_78 [i_0] &= var_7;
        }
    }
    var_41 = var_10;

    /* vectorizable */
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 3; i_24 < 11;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 10;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    {
                        var_42 = var_10;
                        var_43 -= var_5;
                        arr_90 [i_23] [i_24] [i_25] [i_26] [i_24] = var_8;
                    }
                }
            }
        }
        var_44 = var_1;
    }
    for (int i_27 = 0; i_27 < 18;i_27 += 1)
    {
        arr_94 [i_27] = var_10;
        arr_95 [i_27] = var_6;
        arr_96 [i_27] [i_27] = var_3;
        var_45 -= var_0;
    }
    for (int i_28 = 0; i_28 < 12;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 2; i_29 < 8;i_29 += 1)
        {
            for (int i_30 = 3; i_30 < 11;i_30 += 1)
            {
                {

                    for (int i_31 = 1; i_31 < 10;i_31 += 1)
                    {
                        arr_108 [i_28] [i_28] [i_30] [i_31] = var_8;
                        arr_109 [i_28] [i_29] [i_30] [i_31] [i_31] &= var_7;
                        arr_110 [i_31] = var_0;
                        var_46 = var_9;
                    }
                    var_47 = var_5;
                }
            }
        }

        for (int i_32 = 0; i_32 < 12;i_32 += 1)
        {
            arr_113 [i_28] [i_28] [i_28] = var_0;
            var_48 = var_6;
            var_49 = var_2;
        }
        /* vectorizable */
        for (int i_33 = 1; i_33 < 10;i_33 += 1)
        {
            arr_117 [i_28] [i_33] [i_33] = var_6;

            for (int i_34 = 1; i_34 < 9;i_34 += 1)
            {
                arr_120 [i_34 + 2] [i_33] [i_28] = var_0;

                for (int i_35 = 0; i_35 < 12;i_35 += 1)
                {
                    var_50 = (max(var_50, var_8));
                    var_51 &= var_7;
                    arr_123 [i_28] [i_28] [i_33 + 2] [i_35] = var_10;
                }
                for (int i_36 = 0; i_36 < 12;i_36 += 1)
                {
                    var_52 = var_2;
                    var_53 = (min(var_53, var_10));
                }
                for (int i_37 = 0; i_37 < 12;i_37 += 1)
                {

                    for (int i_38 = 0; i_38 < 12;i_38 += 1)
                    {
                        arr_131 [i_28] [i_33] [i_37] = var_10;
                        arr_132 [i_28] = var_9;
                        var_54 -= var_8;
                        var_55 ^= var_2;
                    }
                    for (int i_39 = 1; i_39 < 11;i_39 += 1)
                    {
                        arr_136 [i_39] [i_39] [i_39] [i_37] [i_37] = var_2;
                        var_56 -= var_0;
                    }
                    for (int i_40 = 2; i_40 < 10;i_40 += 1)
                    {
                        arr_139 [i_28] [i_33 + 2] [i_34] [i_28] [i_28] [i_37] [i_37] = var_4;
                        arr_140 [i_33] [i_33 - 1] [i_33 - 1] [i_33] [i_33] = var_10;
                        var_57 = var_2;
                        var_58 = var_1;
                        var_59 *= var_5;
                    }
                    var_60 ^= var_0;
                    arr_141 [i_28] [i_28] [i_28] [i_28] = var_9;
                    arr_142 [i_37] [i_34] [i_28] [i_28] = var_10;
                }
                for (int i_41 = 0; i_41 < 12;i_41 += 1)
                {
                    var_61 = var_5;
                    var_62 = var_3;
                    arr_145 [i_28] = var_8;
                }
                arr_146 [i_33] [i_33] [i_34] = var_6;
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 12;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 12;i_43 += 1)
                    {
                        {
                            arr_154 [i_43] [i_42] [i_43] [i_42] [i_43] [i_43] [i_34] = var_7;
                            arr_155 [i_43] [i_43] [i_43] [i_28] [i_43] = var_4;
                        }
                    }
                }

                for (int i_44 = 0; i_44 < 12;i_44 += 1)
                {
                    arr_158 [i_28] [i_28] [i_28] [i_28] [i_34] [i_34] &= var_0;
                    var_63 = var_3;
                }
                for (int i_45 = 0; i_45 < 12;i_45 += 1)
                {
                    arr_162 [i_45] [i_34 + 3] [i_45] [i_45] = var_9;

                    for (int i_46 = 0; i_46 < 12;i_46 += 1)
                    {
                        var_64 = var_0;
                        var_65 = (min(var_65, var_8));
                    }
                    for (int i_47 = 0; i_47 < 12;i_47 += 1)
                    {
                        var_66 = var_3;
                        var_67 = var_6;
                        var_68 = var_5;
                    }

                    for (int i_48 = 0; i_48 < 1;i_48 += 1)
                    {
                        arr_172 [i_28] [i_28] [i_28] [i_45] [i_28] = var_7;
                        var_69 = var_9;
                    }
                    for (int i_49 = 1; i_49 < 10;i_49 += 1)
                    {
                        arr_177 [i_34] [i_45] [i_45] [i_34] [i_45] [i_28] = var_2;
                        var_70 = var_4;
                        var_71 = (max(var_71, var_1));
                    }
                    for (int i_50 = 1; i_50 < 10;i_50 += 1)
                    {
                        var_72 = var_6;
                        arr_182 [i_45] = var_8;
                        arr_183 [i_34] [i_33] [i_45] [i_45] = var_9;
                        var_73 = (min(var_73, var_5));
                    }
                    arr_184 [i_28] [i_28] [i_45] [i_28] [i_28] = var_5;
                }
            }
            arr_185 [i_28] = var_4;
            arr_186 [i_28] [i_33 + 2] [i_33 + 2] = var_6;
        }
        /* LoopNest 2 */
        for (int i_51 = 0; i_51 < 12;i_51 += 1)
        {
            for (int i_52 = 0; i_52 < 12;i_52 += 1)
            {
                {
                    var_74 -= var_10;

                    for (int i_53 = 2; i_53 < 11;i_53 += 1)
                    {
                        arr_194 [i_28] [i_28] [i_28] [i_28] = var_9;
                        var_75 = var_7;
                    }
                    /* vectorizable */
                    for (int i_54 = 0; i_54 < 12;i_54 += 1)
                    {
                        var_76 = var_0;
                        var_77 = var_5;
                        arr_197 [i_54] [i_51] [i_52] [i_54] = var_1;

                        for (int i_55 = 0; i_55 < 12;i_55 += 1)
                        {
                            arr_200 [i_55] [i_54] [i_28] [i_51] [i_28] &= var_2;
                            arr_201 [i_28] [i_51] [i_51] [i_51] [i_51] = var_8;
                        }
                        for (int i_56 = 1; i_56 < 11;i_56 += 1)
                        {
                            arr_206 [i_28] [i_51] [i_52] [i_28] [i_56] = var_6;
                            var_78 = var_4;
                        }
                        for (int i_57 = 0; i_57 < 12;i_57 += 1)
                        {
                            arr_210 [i_57] [i_54] [i_28] [i_51] [i_28] = var_6;
                            arr_211 [i_28] [i_28] [i_52] [i_52] [i_57] &= var_2;
                        }
                        for (int i_58 = 0; i_58 < 12;i_58 += 1)
                        {
                            var_79 = var_10;
                            arr_214 [i_28] [i_54] [i_28] [i_28] [i_28] = var_0;
                        }
                    }
                    /* vectorizable */
                    for (int i_59 = 0; i_59 < 12;i_59 += 1)
                    {
                        arr_218 [i_28] [i_59] [i_59] [i_28] [i_59] = var_1;
                        var_80 = (max(var_80, var_5));
                        var_81 *= var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
