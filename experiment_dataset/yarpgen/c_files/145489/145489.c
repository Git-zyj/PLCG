/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_0 [8])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_23 += var_11;
                        var_24 = (min(var_24, (arr_2 [i_0 - 1] [i_0 + 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_25 -= (((arr_0 [i_4]) ? var_12 : (((var_14 - (arr_10 [i_4 + 1]))))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            var_26 = ((var_11 & (arr_25 [i_4] [i_4] [i_5 + 1] [i_8 + 1] [i_5] [i_4 + 1])));
                            var_27 = (min(var_27, ((((arr_2 [i_5 - 3] [i_4 + 1]) ? (arr_2 [i_5 - 2] [i_4 + 1]) : (arr_2 [i_5 - 2] [i_4 - 1]))))));
                        }
                        var_28 = var_8;
                    }
                }
            }
        }
        var_29 = (arr_10 [i_4 - 1]);
        var_30 = (arr_1 [i_4 + 2] [i_4 + 1]);
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = var_8;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 18;i_11 += 1)
            {
                {
                    arr_36 [i_9] [i_9] [i_9] = (arr_22 [i_9 + 1] [i_10] [i_11 - 2]);
                    var_31 = ((!((((((arr_20 [7] [i_11 - 1]) <= var_14)) ? ((var_15 * (arr_7 [10] [i_10]))) : (-935722479 + 935722487))))));

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_32 = (max(var_32, var_6));
                        arr_39 [1] [i_10] [i_12] [i_12] |= var_11;
                        var_33 = (max(var_33, (((var_9 >= var_1) ? ((((16735556200795275040 >= 1711187872914276576) >= 65535))) : ((min((arr_33 [i_12] [i_9 + 2] [i_9 - 1] [i_11 + 2]), 37)))))));
                        var_34 -= (arr_33 [i_12] [i_11] [i_11] [6]);

                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_35 = var_16;
                            var_36 = (arr_38 [i_9] [10] [i_9] [i_9]);
                            arr_42 [i_9] [9] [i_10] [i_11 - 1] [i_10] [i_9] = (max(var_1, (arr_3 [5] [5] [i_11 - 3])));
                            var_37 = (max(var_37, (((14768980206363272920 ? var_18 : (arr_13 [i_12]))))));
                            var_38 = (max(((var_7 ^ (arr_24 [i_12] [i_9] [1] [i_12] [i_12] [i_12] [i_12]))), (((var_17 > 1023161023) * ((((arr_11 [19]) >= (arr_26 [i_9 - 1] [10] [i_10] [i_11] [10] [10]))))))));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                        {
                            var_39 = var_18;
                            var_40 = (arr_16 [i_11] [i_9 - 1] [i_9] [i_9 - 1]);
                        }
                    }
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        arr_47 [2] [i_10] [18] [i_15] |= var_12;
                        var_41 = (min(var_41, var_15));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_42 = (min(var_42, var_18));
                            var_43 = (var_3 + 0);
                        }
                    }
                    var_44 -= var_11;
                    var_45 = arr_16 [i_9] [0] [i_9] [i_9];
                }
            }
        }

        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            var_46 = (min(var_46, ((min((((arr_23 [i_9] [i_17] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) | (arr_23 [19] [i_9] [i_9 + 1] [i_17] [i_17] [i_17]))), (arr_23 [i_9] [i_9] [i_9 + 2] [i_9] [i_17] [i_9 - 1]))))));
            arr_53 [i_9] [i_9] = var_4;
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        {
                            var_47 = (max(0, ((((arr_29 [1]) && var_10)))));
                            arr_63 [i_9] [i_20] [i_19] [i_18] [i_9] = (arr_59 [7] [i_9] [i_9] [i_9] [i_9]);
                        }
                    }
                }
            }
            var_48 = (arr_60 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [15]);
        }
        for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
        {
            var_49 = (min(var_49, ((((((arr_55 [10] [10]) << (((var_5 >= (arr_38 [0] [i_22] [4] [4])))))) < 1711187872914276579)))));
            var_50 = var_17;
        }

        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            arr_72 [i_9] = ((~(arr_44 [i_23] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9])));

            for (int i_24 = 1; i_24 < 19;i_24 += 1)
            {
                var_51 = ((arr_34 [i_23] [i_9]) >> (var_5 - 5971350678925720406));
                var_52 += ((((((16735556200795275045 + var_8) ? 540526839 : (26605 != 935722479)))) ? 21 : (1 & 0)));
                var_53 |= (((~(arr_15 [i_9 - 1] [i_23] [i_9 - 1]))));
            }

            for (int i_25 = 0; i_25 < 20;i_25 += 1) /* same iter space */
            {
                var_54 *= var_10;
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        {
                            arr_84 [i_9 + 1] [12] [15] [i_9] [i_27] = var_8;
                            arr_85 [i_9] [i_26] [i_9] = (277505716892307511 <= 16735556200795275045);
                            var_55 += (((arr_81 [i_9 + 2] [i_27] [i_26] [i_26] [i_27] [i_25] [i_27]) ? (arr_54 [i_9] [i_23]) : ((((var_5 >= (64503 - var_2)))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
            {
                arr_88 [7] [i_9] = (arr_19 [i_23] [i_23] [i_23]);
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    for (int i_30 = 1; i_30 < 1;i_30 += 1)
                    {
                        {
                            var_56 = (min(var_56, (arr_23 [i_30 - 1] [i_23] [i_23] [i_23] [i_23] [i_9 + 1])));
                            var_57 = (min(var_57, (arr_74 [i_9 + 2] [i_28] [i_29] [i_9 + 2])));
                            var_58 = (((arr_73 [i_30 - 1] [i_9]) & ((((arr_64 [i_9] [i_28] [i_29]) % var_18)))));
                        }
                    }
                }
                arr_95 [i_9] [i_23] [i_23] [i_9] = (arr_68 [i_9]);
            }
            for (int i_31 = 2; i_31 < 19;i_31 += 1)
            {

                for (int i_32 = 0; i_32 < 20;i_32 += 1)
                {
                    arr_102 [i_9 - 1] [i_9] [17] [18] [6] = var_13;
                    arr_103 [i_9 - 1] [i_9 - 1] [i_9] [i_32] = (arr_40 [i_23] [12] [i_31 - 2] [i_32] [i_9 + 1]);
                }
                var_59 = (max(var_59, ((max(3545428431, 522952817)))));
                arr_104 [i_9] = (((((arr_5 [12] [i_9 - 1] [i_23] [i_23]) ? var_17 : var_2)) <= (((-2147483647 - 1) ? 1 : -935722479))));
            }
            /* LoopNest 3 */
            for (int i_33 = 2; i_33 < 18;i_33 += 1)
            {
                for (int i_34 = 1; i_34 < 19;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 20;i_35 += 1)
                    {
                        {
                            var_60 = 121;
                            var_61 -= (max(-574255925585760635, 104));
                            arr_113 [i_9] [i_9] = (arr_110 [i_9] [2] [i_33] [i_23] [i_9 + 2] [i_9]);
                            var_62 = arr_110 [i_33] [14] [0] [i_34] [i_35] [14];
                            arr_114 [i_9] [i_9] [14] [i_23] [14] = (arr_20 [11] [11]);
                        }
                    }
                }
            }
        }
        for (int i_36 = 4; i_36 < 19;i_36 += 1)
        {
            var_63 = ((((arr_105 [i_36] [i_36 - 2] [i_9] [i_36 - 3]) | var_8)));

            for (int i_37 = 0; i_37 < 20;i_37 += 1) /* same iter space */
            {
                arr_122 [i_36] [i_9] [i_37] [i_36] = var_0;
                var_64 = var_8;
            }
            /* vectorizable */
            for (int i_38 = 0; i_38 < 20;i_38 += 1) /* same iter space */
            {
                var_65 = (max(var_65, 65529));
                var_66 = ((((((arr_71 [i_9 + 1]) << (((arr_115 [i_36 + 1] [i_36 - 1] [16]) - 17315))))) <= var_11));
            }
            arr_127 [i_9] [i_9] [i_9] = (arr_46 [i_9] [i_9 + 2] [i_9] [i_9 + 2] [i_9]);
            var_67 = (arr_17 [18] [8] [i_9]);
            var_68 = var_4;
        }
        for (int i_39 = 0; i_39 < 20;i_39 += 1)
        {
            var_69 = (min(var_69, (arr_21 [i_9 - 1])));
            arr_130 [18] |= ((arr_40 [3] [i_9 + 2] [3] [3] [i_39]) ? (((arr_40 [i_39] [i_9 - 1] [i_9 - 1] [i_39] [i_39]) / (arr_40 [i_9] [i_9 - 1] [i_39] [12] [i_9 - 1]))) : (((arr_40 [i_9 + 2] [i_9 - 1] [i_39] [i_39] [i_39]) - var_3)));
            arr_131 [i_9] [i_9] [i_9] = var_11;
        }
    }
    var_70 = var_15;
    var_71 = ((var_16 && (0 || 136)));
    #pragma endscop
}
