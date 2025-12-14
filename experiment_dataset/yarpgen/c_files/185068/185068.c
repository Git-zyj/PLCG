/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_16 = arr_12 [8] [4] [i_2] [i_3] [3];
                            var_17 = (arr_6 [i_0]);
                            var_18 = (arr_7 [i_0] [i_0] [5] [8]);
                            var_19 = (arr_8 [i_3] [0] [10] [10]);
                            var_20 = (min(var_20, (arr_3 [i_3] [4])));
                        }
                    }
                }
            }
            var_21 = (max(var_21, (arr_5 [i_0] [i_0] [i_0])));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_22 = (max(var_22, (arr_0 [i_0] [i_0])));
                arr_17 [i_0 - 1] = (arr_15 [0] [i_1] [i_1] [i_5]);
            }
            var_23 = (arr_0 [9] [9]);
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = (arr_16 [i_0] [9] [i_6]);
            var_25 += (arr_18 [i_0]);
        }
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_26 = (arr_13 [4] [i_7] [8] [i_7 - 3] [i_7] [i_0]);
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_27 = (arr_19 [i_7]);
                            var_28 = (max(var_28, (arr_15 [9] [i_9] [2] [6])));
                            var_29 = (min(var_29, (arr_16 [3] [4] [0])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_30 += (arr_20 [i_7]);
                var_31 = (max(var_31, (arr_15 [i_0] [i_11] [i_11] [4])));

                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_32 = arr_35 [10] [i_7 - 2] [i_11] [i_12] [i_13];
                        var_33 -= (arr_11 [i_0] [i_0] [i_0] [i_0] [1] [5] [2]);
                        var_34 = arr_3 [i_0] [i_0];
                        var_35 = (arr_25 [i_0] [i_11] [i_11] [i_11] [2]);
                        arr_39 [5] [i_7] [5] [i_12] [i_13] = (arr_2 [i_0] [i_7 + 1]);
                    }
                    for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
                    {
                        var_36 = (arr_28 [i_11] [i_11] [i_11] [1] [i_11]);
                        var_37 = arr_27 [i_0] [i_7 - 3] [1] [i_12] [i_14];
                        arr_43 [i_14] [i_14 + 2] [7] [i_11] [i_14] [i_14] [i_14] = (arr_3 [i_11] [i_12]);
                        var_38 = (arr_3 [i_0] [i_12]);
                        var_39 = (arr_15 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_15 = 1; i_15 < 9;i_15 += 1) /* same iter space */
                    {
                        var_40 = (arr_35 [3] [i_7 + 1] [i_11] [i_12] [i_15]);
                        var_41 = arr_11 [5] [5] [1] [7] [i_15 + 1] [i_15] [2];
                        var_42 = (arr_18 [i_11]);
                        arr_46 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] = (arr_12 [5] [7] [i_15 + 2] [i_15] [i_15]);
                        var_43 = (arr_15 [i_0] [i_0] [i_7] [i_12]);
                    }
                    var_44 = (arr_30 [i_12] [7] [8]);
                    var_45 = (max(var_45, (arr_11 [i_0] [i_0] [5] [i_7] [i_7] [i_11] [i_12])));
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                {
                    var_46 = (arr_48 [i_0] [i_0] [i_11] [5]);
                    arr_49 [0] [0] [0] [0] [i_16] [i_16] = (arr_8 [i_0] [i_7] [i_0] [i_16]);
                }
                for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                {
                    arr_53 [7] [0] [0] [i_17] = (arr_7 [i_11] [i_7] [i_11] [i_17]);
                    var_47 *= (arr_48 [i_17] [i_11] [i_7] [i_0]);
                    var_48 = (max(var_48, (arr_48 [i_0 - 2] [i_0] [7] [i_0])));
                    var_49 ^= (arr_40 [i_0 + 1] [2] [6] [i_0] [i_0 + 1]);
                }
                for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                {
                    var_50 = (arr_28 [i_0] [i_0] [4] [3] [2]);

                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_51 &= arr_51 [i_7] [i_7];
                        var_52 -= (arr_45 [i_0 + 1] [i_0]);
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_53 = (max(var_53, (arr_14 [1] [i_11] [i_18])));
                        var_54 = (arr_16 [0] [i_18] [i_20]);
                        var_55 = (arr_50 [i_11] [i_11] [i_11]);
                        var_56 = (arr_21 [i_0] [i_20]);
                    }
                    var_57 = (arr_30 [i_11] [7] [i_11]);
                    var_58 = (min(var_58, (arr_34 [1] [i_0 + 1] [1] [i_7] [1] [1])));
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 3; i_21 < 9;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_59 = (arr_24 [i_22] [i_7] [i_21]);
                            var_60 = (arr_38 [3] [0] [i_7]);
                            var_61 = (arr_35 [4] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 8;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    {
                        var_62 &= (arr_61 [6] [i_7 - 1] [i_24] [i_0]);
                        var_63 = (arr_65 [2] [i_7] [i_24] [i_25]);
                    }
                }
            }
        }

        for (int i_26 = 0; i_26 < 11;i_26 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 11;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    for (int i_29 = 2; i_29 < 8;i_29 += 1)
                    {
                        {
                            var_64 = (arr_7 [i_0] [i_26] [i_27] [9]);
                            arr_85 [i_29] &= (arr_73 [i_27]);
                        }
                    }
                }
            }

            for (int i_30 = 0; i_30 < 11;i_30 += 1)
            {
                var_65 |= (arr_60 [i_0] [i_26] [7] [6] [i_30]);
                var_66 = (arr_22 [i_26]);
                var_67 += (arr_4 [i_26]);
            }

            /* vectorizable */
            for (int i_31 = 0; i_31 < 11;i_31 += 1)
            {
                var_68 = (arr_34 [5] [i_0 - 1] [i_26] [i_26] [i_31] [3]);
                arr_92 [i_0] [i_0 - 2] [i_0] = arr_22 [6];

                for (int i_32 = 0; i_32 < 11;i_32 += 1)
                {
                    var_69 = (arr_76 [i_0] [i_0] [i_0]);
                    arr_96 [i_0] [i_0] [i_31] = (arr_68 [6] [2] [i_31] [i_31]);
                }
                for (int i_33 = 0; i_33 < 11;i_33 += 1)
                {
                    var_70 = (arr_28 [i_0] [i_26] [i_26] [3] [9]);
                    var_71 = (arr_83 [3] [7] [0] [i_26] [0] [i_0 - 2]);

                    for (int i_34 = 0; i_34 < 11;i_34 += 1)
                    {
                        var_72 |= (arr_62 [i_0 - 2] [i_26] [i_34]);
                        var_73 = (arr_47 [i_31]);
                    }
                    var_74 = (arr_66 [i_0] [i_33] [i_0] [i_0] [i_0]);
                }
                for (int i_35 = 0; i_35 < 11;i_35 += 1)
                {
                    var_75 = (arr_6 [i_35]);
                    var_76 = (arr_77 [i_0] [i_0] [i_35]);
                    var_77 = (arr_61 [i_0 - 1] [i_0] [10] [i_0]);
                    var_78 *= (arr_70 [i_0] [i_0] [i_31] [i_35] [i_0] [i_35]);
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 11;i_36 += 1)
                {
                    for (int i_37 = 4; i_37 < 10;i_37 += 1)
                    {
                        {
                            arr_112 [i_0] [i_37] [1] [i_36] [i_37] = (arr_69 [i_0] [i_36] [i_0] [i_26] [i_0]);
                            var_79 = arr_33 [i_37] [8] [i_31] [i_37];
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_38 = 0; i_38 < 11;i_38 += 1)
            {
                for (int i_39 = 0; i_39 < 11;i_39 += 1)
                {
                    {
                        arr_118 [i_39] [i_39] [8] [1] [i_0 - 2] [i_0] = arr_69 [i_26] [i_26] [i_26] [i_26] [i_26];
                        var_80 = (arr_56 [9] [5] [1] [0] [1] [6]);
                    }
                }
            }
        }
        for (int i_40 = 0; i_40 < 11;i_40 += 1) /* same iter space */
        {
            var_81 = (arr_94 [i_0] [9] [9]);
            var_82 = (arr_60 [i_0] [i_0] [i_0] [i_40] [6]);
        }
        var_83 = (arr_45 [i_0] [i_0 + 1]);
        var_84 = (max(var_84, (arr_88 [5] [i_0] [i_0])));
    }
    var_85 = var_6;
    #pragma endscop
}
