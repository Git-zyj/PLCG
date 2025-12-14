/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = (((arr_2 [i_0 + 1]) ? var_11 : var_13));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_21 = var_5;
        var_22 ^= (((((((var_12 && (arr_4 [i_1]))) ? (var_18 ^ var_7) : (((-(arr_4 [i_1 - 1]))))))) ? (((((((arr_4 [i_1]) ? var_11 : (arr_3 [i_1 + 1] [i_1]))) < (arr_3 [i_1] [i_1]))))) : ((254 ? 9223372036854775782 : 18446744073709551612))));
        var_23 &= (arr_4 [i_1]);
        var_24 = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {
                        var_25 = ((((max(((var_4 ? var_18 : (arr_6 [i_2] [i_2]))), var_18))) & -134209536));
                        var_26 = (((max(var_15, (arr_11 [i_4] [i_4 + 3] [i_4]))) / ((((arr_4 [i_2]) ? var_17 : (arr_1 [i_4 + 2]))))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_27 = (arr_7 [i_2]);
            arr_17 [i_6] [i_2] [i_2] = (((-var_9 - (arr_3 [i_2] [i_6]))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_20 [i_2] [i_7] [5] = (((arr_14 [1] [i_7]) >> (((arr_14 [i_7] [i_2]) - 4195579800))));
            var_28 = (((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [10]) ? 4294967295 : (arr_15 [i_2] [i_7])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_29 = ((max((((arr_18 [6]) + var_9)), var_13)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_30 = var_14;
                        var_31 = ((!(((var_16 ? var_11 : (min(var_13, (arr_1 [i_2]))))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    {
                        var_32 = var_10;
                        var_33 = (max(var_33, ((((arr_35 [10]) - (arr_35 [2]))))));
                        var_34 = ((((var_16 ? (arr_15 [i_13] [i_11]) : var_11)) + var_17));
                        arr_37 [i_12] [i_12 + 1] [i_11] [i_12] = (arr_4 [i_12]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_35 = (((var_9 > var_15) % var_15));
                            arr_45 [i_2] [1] [i_2] [i_2] [i_15 - 1] [i_16] = (arr_13 [i_16] [i_15 + 1] [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 1]);
                            var_36 = (arr_30 [i_2]);
                            var_37 = ((18446744073709551612 ? 9223372036854775807 : 4));
                            arr_46 [i_16] [i_16] [i_16] [i_15] [i_16] = (((arr_39 [i_15 - 2]) * var_11));
                        }
                    }
                }
            }
        }
        arr_47 [i_2] = var_12;
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
    {

        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
        {
            var_38 |= var_18;
            var_39 = var_10;
        }
        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
        {

            for (int i_20 = 3; i_20 < 8;i_20 += 1) /* same iter space */
            {
                var_40 = arr_5 [i_20];
                var_41 = (max((((-(arr_42 [i_20] [i_20] [i_20 + 1] [0] [i_20 + 1])))), (arr_42 [6] [6] [i_20 - 1] [6] [i_20 - 1])));
            }
            for (int i_21 = 3; i_21 < 8;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 1; i_22 < 10;i_22 += 1)
                {
                    var_42 = 8;
                    var_43 = (max(var_43, (((((((var_9 >= var_6) + ((var_11 ? var_17 : (arr_6 [1] [1])))))) ? (arr_40 [i_17] [i_21 + 1] [i_22 - 1] [2] [4]) : ((-(((arr_8 [i_21] [i_17]) ? var_9 : (arr_2 [i_21]))))))))));
                }
                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {
                    var_44 = ((18446744073709551612 ? 65535 : 4));
                    var_45 = (max(var_45, (((min((arr_8 [i_23] [i_19]), (arr_8 [i_23] [i_17])))))));
                }
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    var_46 = var_10;
                    arr_70 [i_17] [i_19] [i_21] [i_24] = (((max((arr_38 [i_24] [i_21] [i_17] [i_17]), ((0 ? 18446744073709551612 : -1)))) + var_2));
                }
                /* vectorizable */
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    var_47 &= (var_0 <= var_11);
                    var_48 &= (arr_61 [i_21] [i_19] [i_21 - 2] [8]);
                    var_49 = var_16;
                    var_50 = (((arr_56 [i_21] [i_17] [i_17]) ? ((-(arr_71 [i_25] [i_21] [i_21] [i_17]))) : var_9));
                }

                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {

                    for (int i_27 = 3; i_27 < 10;i_27 += 1) /* same iter space */
                    {
                        var_51 *= var_18;
                        var_52 = var_7;
                    }
                    for (int i_28 = 3; i_28 < 10;i_28 += 1) /* same iter space */
                    {
                        var_53 &= (arr_10 [i_21] [i_21]);
                        var_54 = (((arr_65 [i_21] [i_21 + 1] [i_28 - 3] [i_28 - 3]) || var_2));
                    }
                    /* vectorizable */
                    for (int i_29 = 3; i_29 < 10;i_29 += 1) /* same iter space */
                    {
                        var_55 = var_11;
                        var_56 = var_10;
                    }
                    for (int i_30 = 2; i_30 < 8;i_30 += 1)
                    {
                        var_57 = min((((var_0 > var_10) ? (var_14 || var_4) : (arr_73 [i_17] [i_17] [i_17] [i_17]))), (((((9223372036854775807 ? (-2147483647 - 1) : 6)) + 9223372036854775807))));
                        var_58 = var_17;
                        var_59 = (arr_76 [i_21] [i_21] [i_21] [i_26] [i_30 + 2]);
                    }
                    var_60 = var_18;
                }
                for (int i_31 = 0; i_31 < 11;i_31 += 1)
                {

                    for (int i_32 = 1; i_32 < 9;i_32 += 1)
                    {
                        var_61 ^= (((arr_53 [i_32 + 1]) >= var_11));
                        var_62 = var_10;
                    }
                    var_63 = ((~(((((var_10 ? var_1 : var_0))) ? (arr_31 [i_21 + 1]) : (arr_76 [i_21] [i_31] [i_21] [9] [8])))));
                }
                var_64 = (min((arr_26 [i_21] [1] [i_17] [i_17] [i_21]), (arr_72 [i_21])));
                var_65 *= (((arr_32 [i_19] [i_19] [i_19]) <= var_13));
            }
            arr_91 [i_17] = (max((arr_51 [i_19]), (min(((var_11 ? -16384 : 4294967283)), ((((arr_10 [i_19] [1]) ? var_0 : (arr_7 [i_17]))))))));
        }
        for (int i_33 = 0; i_33 < 11;i_33 += 1) /* same iter space */
        {
            var_66 = (arr_72 [1]);
            var_67 = (0 >= 16384);

            for (int i_34 = 1; i_34 < 9;i_34 += 1)
            {
                var_68 = (min(((~((var_1 ? (arr_57 [i_34] [i_33] [i_17] [i_17]) : (arr_55 [i_34 + 2] [i_33]))))), ((-var_4 ? ((-(arr_38 [i_17] [i_17] [i_17] [i_17]))) : ((var_7 ? (arr_61 [i_17] [i_33] [i_17] [i_34]) : var_0))))));

                for (int i_35 = 0; i_35 < 11;i_35 += 1)
                {
                    var_69 &= ((((9223372036854775807 ? (((18446744073709551612 ? 243 : 7))) : 7)) * (arr_73 [i_35] [i_34 - 1] [i_33] [i_17])));
                    var_70 = (((6 ? 0 : 268173312)));
                    arr_101 [10] [1] [i_35] [i_35] [i_34] = (var_3 ? (--127) : (max(var_8, ((max((arr_5 [i_35]), var_0))))));
                    var_71 = ((((max(var_5, (arr_81 [9] [i_33] [i_33] [i_33] [6])))) ? ((min(((var_11 ? var_8 : (arr_79 [i_35] [i_34] [i_33] [i_34] [9]))), (arr_4 [i_34 - 1])))) : (max((arr_98 [i_34] [i_17] [1] [8] [2] [i_34]), (arr_98 [i_34] [2] [i_33] [i_33] [2] [i_34])))));
                    var_72 = (max((arr_77 [i_35] [i_34] [4] [i_34] [i_33] [i_17] [i_17]), (arr_52 [i_33] [i_33] [i_17])));
                }
            }
            /* LoopNest 3 */
            for (int i_36 = 0; i_36 < 11;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 11;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 11;i_38 += 1)
                    {
                        {
                            var_73 = (max((arr_23 [i_17]), (arr_5 [i_37])));
                            var_74 = var_7;
                            var_75 = ((18446744073709551596 ? 64 : (arr_10 [i_36] [i_37])));
                            var_76 = var_18;
                        }
                    }
                }
            }
        }
        var_77 = ((var_3 ? (arr_15 [i_17] [i_17]) : (((arr_58 [i_17] [i_17] [i_17] [10]) ? var_6 : (var_2 + var_0)))));
        var_78 = (arr_76 [6] [i_17] [i_17] [i_17] [6]);
        var_79 = var_7;
    }
    var_80 *= -var_12;
    var_81 = (min((((-var_3 ? var_11 : (~var_17)))), var_13));
    var_82 = (min(var_82, ((min((!-1), var_17)))));
    #pragma endscop
}
