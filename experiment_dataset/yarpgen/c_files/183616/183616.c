/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] = (arr_1 [i_1 + 2]);
                arr_5 [13] = ((((max(0, 447497003))) * (min((arr_3 [i_1 - 1] [i_1 + 2]), (arr_3 [i_1 + 2] [i_1 + 2])))));
                var_16 = (min((min((arr_3 [i_0] [i_1 + 1]), (arr_2 [i_1 - 1] [i_0]))), ((((arr_0 [i_0]) / (arr_2 [i_0] [i_0]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_17 *= (max(var_9, ((var_14 ? 3847470278 : ((((arr_6 [i_2] [i_2]) ? var_13 : var_4)))))));
        var_18 = (max((arr_8 [i_2 - 1]), var_11));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_19 = -1;
                    arr_19 [i_3] [2] [2] [i_5] |= (min((max(5598740658186454096, 2515)), var_4));
                }
            }
        }

        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_20 += var_12;
                    var_21 = (min(var_21, (arr_20 [i_6 + 2])));
                }
                for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (((var_2 | (((arr_13 [i_3] [i_9] [i_3]) ? 27465 : (arr_13 [i_3] [i_9] [i_3]))))))));
                    arr_32 [i_3] [i_3] [i_6] [i_6] [i_9] = (arr_15 [i_6 + 3] [i_9 + 3]);
                    arr_33 [i_6] [i_6] [0] [i_6] [i_7] [i_9] = var_2;
                    var_23 ^= (max((max(var_2, (arr_21 [i_3] [i_3]))), (min((((arr_31 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 2]) | (arr_3 [i_7 - 1] [i_9]))), 65535))));
                    arr_34 [i_3] [i_6] [i_3] [i_7] [i_9 + 2] = (((min(((-193401607 | (arr_3 [i_3] [i_7]))), 4294967295)) != (arr_14 [i_3])));
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_6] [i_7] [i_6] [i_6] = 76;
                    var_24 = var_1;
                    var_25 = (((arr_28 [i_10 - 2] [i_7] [i_7 + 1] [i_6]) ? (min(var_11, (arr_28 [i_10 - 1] [i_7 + 1] [i_7 + 1] [i_7]))) : ((((arr_28 [i_10 + 3] [i_7] [i_7 - 2] [i_7 - 1]) | (arr_28 [i_10 + 2] [i_7 + 1] [i_7 + 1] [i_6]))))));
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_26 = (arr_21 [i_6 - 2] [i_7 - 2]);
                    arr_40 [i_6] [i_6] [i_6 + 3] = var_12;
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_45 [11] [i_6] [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7] = 117;
                            arr_46 [i_7] [10] [i_6] = (((max(var_3, (arr_39 [i_6] [i_12] [i_3] [i_6])))));
                            var_27 *= (((arr_44 [i_7 - 1] [i_12] [i_7 - 1] [i_7] [i_6] [i_3]) ? (((var_10 * (arr_25 [i_3] [i_3] [i_7 + 1] [i_12])))) : var_6));
                        }
                    }
                }
                var_28 ^= (arr_23 [i_7 - 2] [i_7 - 2] [i_7 - 1]);
            }
            for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
            {
                arr_49 [i_6] [i_6] [i_14 + 1] = (((arr_39 [i_3] [i_6 - 3] [i_6] [i_6]) * ((((-18 <= (max((arr_31 [i_3] [i_3] [i_3] [i_14]), -193401607))))))));
                arr_50 [i_3] [i_3] [i_6] = ((((arr_35 [i_14 - 2] [i_14 - 1] [i_14] [i_14 - 1]) != (arr_31 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1]))));
            }
            arr_51 [i_6] [i_3] [i_3] = (((((max((arr_47 [10] [i_6] [i_3] [i_3]), var_2)))) ? (((((min(var_7, (arr_11 [i_3] [i_3])))) ? (arr_8 [i_3]) : (arr_8 [i_6])))) : (max((arr_23 [i_6] [i_6] [i_6]), var_9))));
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 4; i_16 < 11;i_16 += 1)
        {
            var_29 = (arr_31 [i_15] [i_15] [i_16] [i_16 - 1]);
            arr_57 [i_15] [i_15] = 1;
            arr_58 [i_16] = var_9;
            var_30 = (((arr_55 [i_16 - 4] [i_16 + 3] [i_16 + 3]) * (((arr_44 [i_16] [i_16 + 3] [i_16] [i_16 + 3] [i_16 + 3] [i_16 + 3]) / (arr_55 [i_16 + 2] [i_16 - 4] [i_16 - 3])))));
            arr_59 [5] [i_15] [i_15] = (((min((arr_3 [i_16] [i_16 + 2]), (arr_10 [i_16 + 3] [i_16]))) * (min((arr_10 [i_16 - 4] [i_16 - 4]), (arr_3 [i_16] [i_16 - 1])))));
        }
        /* vectorizable */
        for (int i_17 = 3; i_17 < 12;i_17 += 1) /* same iter space */
        {
            var_31 = var_9;
            var_32 -= ((var_2 ? -2328039464435582666 : 963479200));
            var_33 = var_8;

            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                {
                    arr_69 [i_19] [i_18] [i_19] [i_19] = var_6;
                    arr_70 [i_15] [i_18] [i_17 + 2] [i_18] [9] = var_6;
                    var_34 ^= 4220089366759099059;
                }
                for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                {
                    var_35 = (arr_13 [i_17] [i_18] [i_17]);
                    var_36 ^= -5035;
                }
                var_37 = (max(var_37, var_4));
            }
        }
        /* vectorizable */
        for (int i_21 = 3; i_21 < 12;i_21 += 1) /* same iter space */
        {
            arr_76 [i_15] [i_15] |= ((var_14 ? (arr_29 [i_21 - 2] [i_21] [i_21]) : (arr_29 [i_21 - 2] [11] [11])));
            var_38 = (arr_28 [i_15] [i_21 + 1] [i_21 - 2] [i_21 - 3]);
            var_39 = var_7;

            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                arr_79 [i_15] [i_21 + 1] [i_22] = (arr_17 [i_15] [i_15] [i_15] [i_15]);
                var_40 = (min(var_40, ((((arr_55 [i_21 + 2] [i_21 + 2] [i_21 + 1]) <= var_6)))));
            }
            for (int i_23 = 2; i_23 < 13;i_23 += 1)
            {
                var_41 = (max(var_41, 40045));
                var_42 ^= (-2328039464435582666 != 26129);
                var_43 -= (arr_22 [i_23 - 2]);
            }
            for (int i_24 = 2; i_24 < 13;i_24 += 1)
            {
                arr_85 [i_21] [i_21] [i_24] = (arr_0 [i_21 - 3]);
                arr_86 [i_24] [i_21] [i_21] [7] = (((-63 | -1720882644) | -4230323312044646333));
                var_44 ^= (arr_27 [i_15] [i_15] [i_21] [i_24] [i_24]);
            }
            var_45 ^= (arr_8 [i_15]);
        }
        /* vectorizable */
        for (int i_25 = 3; i_25 < 12;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 3; i_26 < 10;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    {
                        var_46 = var_6;
                        var_47 -= (arr_68 [i_25] [i_25 - 1] [i_25] [i_26 + 2] [i_26 - 1]);
                    }
                }
            }
            var_48 = (min(var_48, (((var_7 <= (arr_38 [0] [i_15] [i_25 + 1] [i_25 + 2]))))));
            var_49 = (max(var_49, (arr_25 [i_25] [i_15] [i_15] [i_15])));
        }

        /* vectorizable */
        for (int i_28 = 1; i_28 < 13;i_28 += 1)
        {
            var_50 = (arr_0 [i_15]);
            var_51 = (min(var_51, var_2));
        }

        for (int i_29 = 1; i_29 < 13;i_29 += 1)
        {
            var_52 = ((((max((arr_43 [i_29 - 1] [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29 - 1]), 4221170780))) ? (((arr_43 [i_29 + 1] [i_29 - 1] [i_29 + 1] [i_29 - 1] [i_29 + 1]) * var_11)) : (arr_6 [i_29 - 1] [i_29 - 1])));
            arr_103 [i_15] = (((((arr_35 [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29]) | (arr_78 [i_29 + 1] [i_29 + 1] [i_29 + 1]))) <= (((min(var_10, (arr_78 [i_29 + 1] [i_29] [2])))))));

            for (int i_30 = 0; i_30 < 1;i_30 += 1) /* same iter space */
            {
                var_53 ^= 15201574674971761803;

                /* vectorizable */
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    var_54 = (((arr_48 [i_29 + 1]) != (arr_71 [i_15] [i_15] [i_15] [i_15] [i_30])));
                    var_55 -= (((arr_35 [i_31] [3] [i_15] [i_15]) ? (arr_35 [i_15] [i_15] [8] [i_31]) : 1023));
                }
            }
            /* vectorizable */
            for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
            {

                for (int i_33 = 0; i_33 < 14;i_33 += 1) /* same iter space */
                {
                    var_56 = -193401596;
                    var_57 = ((var_13 * (arr_65 [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29 - 1] [i_29 - 1])));
                    var_58 = var_13;
                }
                for (int i_34 = 0; i_34 < 14;i_34 += 1) /* same iter space */
                {
                    arr_117 [i_34] = ((arr_102 [i_32] [i_32]) ? (arr_102 [i_29 + 1] [i_15]) : (arr_102 [i_29 + 1] [i_34]));
                    var_59 = (max(var_59, (((963479200 ? 1234134413 : 1777052212)))));

                    for (int i_35 = 1; i_35 < 11;i_35 += 1) /* same iter space */
                    {
                        var_60 ^= (arr_101 [i_35] [i_29]);
                        arr_120 [i_15] [i_29 + 1] [i_34] [i_34] [i_35] = ((arr_72 [i_29 - 1] [i_35 - 1] [i_35] [i_35 + 3]) | (arr_72 [i_29 - 1] [i_35 - 1] [i_35 + 1] [i_29 - 1]));
                        var_61 = (((arr_101 [i_15] [i_29]) ? (arr_67 [i_34] [i_15] [i_29 + 1] [i_35 + 3] [i_35 + 3] [i_35]) : (arr_108 [i_15] [i_15] [i_29 + 1] [11])));
                    }
                    for (int i_36 = 1; i_36 < 11;i_36 += 1) /* same iter space */
                    {
                        arr_123 [9] [i_29] [i_29 - 1] [i_29 - 1] [i_34] [9] [1] = ((var_3 ? var_2 : (arr_27 [i_36] [i_34] [i_32] [i_29] [i_15])));
                        var_62 += ((var_12 ? (arr_102 [i_29 + 1] [i_36 + 1]) : var_12));
                    }
                    for (int i_37 = 1; i_37 < 11;i_37 += 1) /* same iter space */
                    {
                        arr_128 [i_34] [i_34] [i_32] [i_34] [i_34] = (arr_98 [i_15] [i_32] [i_34]);
                        var_63 = (arr_28 [i_15] [i_32] [i_34] [i_37 + 3]);
                    }
                    for (int i_38 = 1; i_38 < 11;i_38 += 1) /* same iter space */
                    {
                        arr_131 [i_34] [i_34] = (var_9 ? (arr_74 [i_15] [i_15]) : ((-1807459139 | (arr_60 [i_15]))));
                        var_64 += (arr_71 [i_38] [i_34] [i_32] [i_15] [i_15]);
                    }
                    arr_132 [i_15] [i_15] [i_34] [i_32] [i_34] = (((var_1 <= (arr_115 [i_15] [i_29 - 1] [i_29 + 1] [i_32] [i_29 - 1] [i_34]))));
                    var_65 = (arr_78 [i_29] [i_29] [i_15]);
                }
                var_66 = ((var_7 <= (arr_16 [i_29 - 1] [i_15])));
                arr_133 [8] = var_10;
            }
        }
        arr_134 [1] = (arr_47 [i_15] [6] [i_15] [i_15]);
    }
    #pragma endscop
}
