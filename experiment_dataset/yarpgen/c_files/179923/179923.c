/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 += var_16;
                        var_22 = (min(var_22, var_0));
                        var_23 = (max(var_23, var_16));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = var_15;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_24 = var_11;
                        arr_23 [i_4] [i_6] [i_5] [i_4] = var_5;

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [i_7] [i_4] [i_6 + 2] [i_4] [i_4] = var_8;
                            var_25 &= var_13;
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = var_17;
                            var_26 = (min(var_26, var_18));
                            arr_28 [i_4] [10] [i_6] [16] [i_4] [i_8] [i_6] = var_13;
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [3] [i_4] = var_18;
                            arr_32 [i_4] [i_4] [i_5] [i_4] [4] [10] [12] = var_6;
                        }
                        var_27 = var_2;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_36 [i_4] [i_10] [i_10] = var_15;
            arr_37 [i_4] [i_4] = var_6;

            for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_46 [12] [i_4] = var_7;
                    var_28 += var_11;
                    arr_47 [i_4] [i_4] = var_15;
                    arr_48 [i_4] [i_11 + 2] [i_12] [i_12] [i_4] = var_6;
                }
                var_29 &= var_3;
                var_30 += var_18;
                var_31 += var_13;

                /* vectorizable */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    arr_51 [18] &= var_17;

                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_32 += var_16;
                        arr_54 [i_13] [i_10] [i_11] [i_13] [i_4] = var_6;
                    }
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_33 = (max(var_33, var_18));
                        var_34 += var_9;
                        arr_59 [i_4] [i_10] [i_4] [i_10] [i_15] [i_4] = var_4;
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_35 += var_6;
                        arr_63 [1] [1] [i_10] [i_4] [1] [i_13] [i_16] = var_15;
                        arr_64 [i_4] [i_4] [i_4] [i_4] [i_4] = var_7;
                        var_36 = (max(var_36, var_14));
                        arr_65 [i_4] [16] = var_17;
                    }
                    arr_66 [i_4] [i_10] [i_4] [i_13] = var_12;
                    var_37 += var_9;
                    arr_67 [i_4] = var_15;
                }
            }
            /* vectorizable */
            for (int i_17 = 1; i_17 < 16;i_17 += 1) /* same iter space */
            {
                arr_70 [i_4] [i_4] [i_17] [i_17] = var_11;
                var_38 = (min(var_38, var_10));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                var_39 = var_4;
                arr_74 [i_4] [i_18] [i_4] [i_4] = var_3;
                var_40 = var_1;

                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    arr_77 [i_4] [i_10] [i_18] [i_19] &= var_5;
                    var_41 += var_17;
                }
            }
            for (int i_20 = 1; i_20 < 15;i_20 += 1)
            {
                arr_81 [6] [i_10] [6] &= var_6;
                var_42 += var_2;
                var_43 = (max(var_43, var_19));

                for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
                {
                    var_44 = (max(var_44, var_9));
                    arr_86 [i_4] [i_20] [i_21] = var_13;
                }
                for (int i_22 = 0; i_22 < 19;i_22 += 1) /* same iter space */
                {
                    var_45 = var_10;
                    arr_89 [i_4] [i_10] [i_10] [i_20] [i_4] = var_1;
                }
                var_46 = var_15;
            }
            arr_90 [i_4] = var_17;
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                {
                    var_47 = var_15;
                    var_48 += var_13;
                }
            }
        }

        for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
        {
            var_49 += var_8;

            /* vectorizable */
            for (int i_26 = 1; i_26 < 1;i_26 += 1)
            {
                var_50 = var_4;
                arr_101 [i_4] [i_4] [1] [i_26] = var_13;
            }
            var_51 = (min(var_51, var_0));
        }
        for (int i_27 = 0; i_27 < 19;i_27 += 1) /* same iter space */
        {
            var_52 += var_12;
            arr_106 [i_4] [i_27] = var_4;
            var_53 = (max(var_53, var_18));
            var_54 += var_0;
            var_55 += var_19;
        }
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 19;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 19;i_29 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 19;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 19;i_31 += 1)
                        {
                            {
                                var_56 += var_1;
                                var_57 = (min(var_57, var_8));
                                var_58 = (min(var_58, var_9));
                                var_59 += var_5;
                            }
                        }
                    }
                    arr_118 [i_4] [i_4] [i_4] = var_17;
                    var_60 = (min(var_60, var_19));
                }
            }
        }
        arr_119 [i_4] = var_2;
    }
    for (int i_32 = 0; i_32 < 16;i_32 += 1) /* same iter space */
    {
        arr_122 [5] = var_10;

        for (int i_33 = 1; i_33 < 14;i_33 += 1)
        {
            var_61 = (max(var_61, var_10));

            /* vectorizable */
            for (int i_34 = 0; i_34 < 16;i_34 += 1)
            {
                var_62 += var_17;
                arr_129 [i_33] [i_33 - 1] [i_33] = var_1;
            }
        }
        for (int i_35 = 3; i_35 < 15;i_35 += 1)
        {

            for (int i_36 = 0; i_36 < 16;i_36 += 1)
            {
                var_63 = (max(var_63, var_6));
                var_64 = (max(var_64, var_11));
            }
            /* vectorizable */
            for (int i_37 = 0; i_37 < 16;i_37 += 1)
            {
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 16;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 16;i_39 += 1)
                    {
                        {
                            var_65 = var_7;
                            var_66 += var_4;
                            var_67 += var_1;
                            var_68 = (max(var_68, var_5));
                            arr_143 [i_39] &= var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_40 = 1; i_40 < 13;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 16;i_41 += 1)
                    {
                        {
                            arr_148 [i_32] [i_32] [i_35] [i_32] [i_32] = var_13;
                            var_69 += var_2;
                        }
                    }
                }
                var_70 = (max(var_70, var_13));
                var_71 = (max(var_71, var_6));
                arr_149 [i_35] [i_35] [i_35] = var_9;
            }
            arr_150 [i_35] [i_35] = var_5;
            var_72 = (min(var_72, var_16));
        }
        arr_151 [i_32] &= var_14;
        arr_152 [i_32] = var_17;
    }
    for (int i_42 = 0; i_42 < 16;i_42 += 1) /* same iter space */
    {
        var_73 += var_0;
        arr_156 [i_42] &= var_14;
    }
    var_74 += var_19;

    for (int i_43 = 0; i_43 < 19;i_43 += 1) /* same iter space */
    {

        for (int i_44 = 0; i_44 < 19;i_44 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_45 = 2; i_45 < 16;i_45 += 1)
            {
                for (int i_46 = 1; i_46 < 18;i_46 += 1)
                {
                    for (int i_47 = 0; i_47 < 19;i_47 += 1)
                    {
                        {
                            arr_171 [14] [i_45] [i_45] [i_43] = var_16;
                            var_75 = var_10;
                        }
                    }
                }
            }
            var_76 = (max(var_76, var_6));
            arr_172 [i_44] [i_43] = var_4;
        }
        for (int i_48 = 0; i_48 < 19;i_48 += 1) /* same iter space */
        {
            arr_177 [i_43] [i_48] = var_2;
            var_77 += var_8;
        }
        var_78 = (min(var_78, var_4));
    }
    for (int i_49 = 0; i_49 < 19;i_49 += 1) /* same iter space */
    {
        arr_180 [i_49] = var_4;
        arr_181 [i_49] [i_49] = var_0;
        arr_182 [i_49] [i_49] = var_18;
        /* LoopNest 3 */
        for (int i_50 = 1; i_50 < 17;i_50 += 1)
        {
            for (int i_51 = 0; i_51 < 19;i_51 += 1)
            {
                for (int i_52 = 0; i_52 < 19;i_52 += 1)
                {
                    {
                        arr_190 [i_49] [16] [i_49] [16] [i_49] [i_49] = var_14;
                        var_79 = var_17;
                        arr_191 [i_49] [i_49] [i_52] = var_1;
                        arr_192 [i_49] [i_49] [i_49] = var_4;
                    }
                }
            }
        }
        var_80 += var_19;
    }
    #pragma endscop
}
