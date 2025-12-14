/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = arr_0 [i_0];

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = ((!(arr_4 [i_0] [i_1])));
            arr_6 [i_0] = (arr_0 [i_1]);

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_0] [2] [i_0] [i_0] [i_0] = (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_3])));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_18 [9] [3] [3] [10] [3] [3] = (arr_1 [i_0]);
                        var_14 = (var_5 & 2939711298);
                        var_15 = (max(var_15, var_7));
                        var_16 = var_0;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 = (arr_17 [i_0] [12] [i_2] [i_3] [i_5]);
                        var_18 ^= (arr_20 [i_0] [i_1] [i_2] [i_3] [0] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [6] [4] [i_2] [i_2] [i_2] [i_2] = 32256;
                        var_19 = arr_2 [i_2];
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_20 |= (arr_1 [i_1]);
                    var_21 = (arr_20 [i_0] [i_1] [i_2] [i_7] [i_7] [i_1]);
                    var_22 = (arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7]);

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_32 [i_7] [i_7] [5] [4] [i_7] [6] = (((arr_2 [i_8]) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_2])));
                        arr_33 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_1] = (((arr_12 [i_8]) - (arr_12 [12])));
                    }
                }
                var_23 = -15302;
                arr_34 [i_0] [i_1] [i_1] |= (((arr_27 [i_1]) ? 1355255995 : (arr_22 [i_2] [i_1] [i_1] [i_0] [i_0])));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_44 [i_10] [i_1] [i_1] = (arr_1 [i_1]);
                            arr_45 [i_0] [i_0] [i_0] [1] [i_0] [i_10] = arr_19 [i_10] [i_9] [i_9] [i_10] [i_10];
                            var_24 = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_25 = ((((((arr_12 [i_12]) ? (arr_9 [i_13] [i_0]) : (arr_12 [i_12])))) ? ((((arr_25 [8] [i_9] [8] [i_13]) - 1677283756))) : (((arr_24 [i_0] [i_0]) ? var_2 : var_12))));
                            var_26 |= (arr_12 [i_0]);
                        }
                    }
                }
                var_27 = (arr_3 [12] [i_1] [i_9]);
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_28 = (2939711301 & var_10);
                var_29 = var_12;

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    arr_56 [i_0] [i_14] [i_14] &= (arr_27 [i_1]);
                    arr_57 [i_0] [i_0] [i_15] [i_0] = (arr_4 [i_0] [1]);
                    var_30 |= var_8;

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_31 = 128;
                        arr_60 [i_15] [i_1] [i_15] [9] = (arr_39 [i_1] [i_14]);
                        var_32 = (((arr_8 [i_0]) || (arr_8 [i_0])));
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        arr_63 [2] [i_14] |= (((arr_24 [i_0] [i_0]) / (arr_24 [i_1] [i_14])));
                        var_33 = (min(var_33, 997718587));
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_34 |= arr_7 [1] [i_1] [i_14];
                    var_35 = (((-997718588 + 2147483647) << (1 - 1)));
                    var_36 = ((var_5 % (arr_10 [i_18] [i_1] [i_14])));
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_68 [i_0] [i_1] [i_14] [3] [4] [i_14] |= var_9;
                    var_37 = (min(var_37, (3707348576220958941 | 1)));
                    var_38 = ((1 ? var_7 : (arr_41 [i_0] [i_0])));
                    var_39 = var_0;
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            var_40 = -28;
                            arr_73 [i_0] [i_0] [i_14] [i_20] [i_21] = (arr_2 [i_1]);
                            var_41 = (arr_53 [i_0]);
                            var_42 = (arr_52 [i_21] [i_14] [i_1] [i_0]);
                            arr_74 [i_0] [i_1] [i_14] [i_1] [i_1] = (arr_51 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            var_43 = (29620 & -6817869323677445056);
                            var_44 = ((~(arr_69 [i_0] [i_22] [i_24])));
                            var_45 = ((var_0 - (arr_81 [i_22] [i_23] [i_22])));
                            var_46 = 3391881009422687586;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 14;i_26 += 1)
                    {
                        {
                            arr_88 [i_0] [i_0] [i_0] = (arr_48 [i_22] [i_22] [i_0]);
                            var_47 = 3966;
                            arr_89 [i_26] [i_22] = (((-(arr_39 [i_0] [i_0]))));
                            var_48 = (((arr_69 [i_0] [i_1] [i_0]) ? var_9 : (((arr_12 [i_0]) ? var_2 : (arr_48 [i_0] [i_1] [i_0])))));
                        }
                    }
                }

                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    var_49 = (~var_11);

                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        arr_97 [i_22] [i_27] [i_27] = ((!(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_50 = (min(var_50, (((arr_35 [i_0] [i_1] [i_27]) ? -2522506951821876667 : (arr_35 [i_22] [i_27] [i_28])))));
                        arr_98 [i_0] [i_0] [i_22] [6] [i_27] = var_10;
                        var_51 = (arr_19 [i_0] [i_0] [1] [3] [i_28]);
                    }
                    var_52 = (min(var_52, var_4));
                }
                arr_99 [i_1] [i_1] [i_22] [i_0] = (arr_8 [i_0]);
                arr_100 [i_0] [12] [i_22] = var_7;
            }
        }
        for (int i_29 = 0; i_29 < 14;i_29 += 1)
        {
            var_53 = ((var_8 != (arr_1 [i_0])));

            for (int i_30 = 0; i_30 < 14;i_30 += 1)
            {
                var_54 = var_7;
                arr_105 [i_30] [i_0] = (((((arr_35 [i_0] [i_29] [8]) || -89)) && (arr_8 [i_0])));
                var_55 = (((((1677283756 ? (arr_78 [i_0] [i_0] [i_29] [i_30]) : var_4))) * var_7));
                arr_106 [12] [i_29] [i_30] = -121;
            }
            for (int i_31 = 0; i_31 < 14;i_31 += 1)
            {
                var_56 |= (arr_35 [i_31] [i_29] [i_0]);
                var_57 = (arr_11 [i_0]);
            }
        }
        for (int i_32 = 0; i_32 < 14;i_32 += 1)
        {
            var_58 = (arr_67 [i_0] [i_32] [i_32]);

            for (int i_33 = 0; i_33 < 14;i_33 += 1)
            {
                var_59 |= (((arr_51 [i_33] [i_32] [i_0] [i_0]) ? 1 : (arr_51 [i_32] [i_32] [i_33] [i_32])));
                arr_114 [i_33] = var_3;
            }
            for (int i_34 = 0; i_34 < 14;i_34 += 1)
            {
                var_60 = (((((arr_41 [i_32] [i_34]) ? (arr_66 [i_0] [i_32]) : (arr_15 [i_0]))) * -var_9));

                for (int i_35 = 0; i_35 < 14;i_35 += 1) /* same iter space */
                {
                    var_61 += var_12;
                    var_62 = var_8;
                    var_63 ^= ((var_9 ? (arr_39 [i_0] [i_0]) : (arr_115 [1] [i_32] [i_32] [i_32])));
                    var_64 = var_7;
                }
                for (int i_36 = 0; i_36 < 14;i_36 += 1) /* same iter space */
                {
                    var_65 = (arr_96 [i_32] [i_32] [i_32] [i_32] [0] [i_32] [i_32]);
                    var_66 = (((arr_83 [i_0] [i_32]) < 27284));
                }
                var_67 = (arr_102 [13] [i_32] [i_0]);
            }
            var_68 = (arr_8 [i_32]);
        }
    }
    for (int i_37 = 0; i_37 < 22;i_37 += 1)
    {
        arr_125 [i_37] = ((!((max((arr_122 [i_37] [i_37]), (arr_123 [21] [i_37]))))));
        arr_126 [i_37] [i_37] = (((arr_123 [i_37] [i_37]) && ((max((arr_124 [i_37]), var_1)))));
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 22;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 22;i_39 += 1)
            {
                {
                    var_69 = (min((max((arr_124 [i_38]), var_12)), var_6));
                    var_70 = (arr_131 [i_37] [i_37] [i_37] [i_37]);
                }
            }
        }
    }
    var_71 = (var_10 <= var_12);
    #pragma endscop
}
