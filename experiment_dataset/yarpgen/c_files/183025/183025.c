/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_0 [i_0]), ((min((arr_0 [i_0]), var_3)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_21 = ((660304407681290495 ? 42 : -1));
                            var_22 = var_6;
                            var_23 = (arr_7 [i_3] [i_3] [i_2]);
                            var_24 = ((~((((max(var_7, var_15))) ? var_11 : var_18))));
                        }
                    }
                }
                var_25 = (min(var_25, ((((min(var_12, var_12)))))));
                var_26 = (min(var_26, (((!((max(var_15, ((var_1 ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_9 [i_0] [i_0] [i_0])))))))))));
                var_27 = var_7;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_28 += max(((var_10 ? var_5 : (arr_1 [i_0]))), -var_5);

                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    var_29 = (arr_4 [i_0] [i_0] [i_0]);
                    var_30 = var_9;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_31 -= ((-(arr_5 [i_7] [i_7] [i_7])));
                    var_32 = max(((max(var_1, (min(var_2, var_12))))), (max(var_18, var_13)));
                    var_33 = (~var_8);
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    arr_25 [i_5] = ((~((~(arr_5 [i_0] [i_8 + 1] [i_5])))));
                    arr_26 [i_8 - 2] [i_1] [i_5] [i_5] [i_5] [i_8] |= var_3;
                }
                arr_27 [i_0] [i_1] [i_5] = 1065051279;
            }
            var_34 = var_11;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_9] [i_0] = var_14;
            var_35 = -var_8;
            var_36 -= (min(1, -5));
            var_37 = (((((var_0 ? (arr_6 [i_0] [i_9]) : var_15))) ? (((((var_7 ? 3317977705096070479 : var_10))) ? ((var_11 ? (arr_13 [i_0] [i_9] [i_0] [i_0] [i_9] [i_9]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (~var_10))) : (~var_15)));
        }
        var_38 = (min((((var_13 ? (arr_2 [i_0]) : var_8))), var_7));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_41 [i_0] [i_10] [i_11] [i_0] = var_9;
                        var_39 += (((arr_13 [i_0] [i_10] [i_11] [i_12] [i_12] [i_11]) ? (min(((var_18 ? var_11 : (arr_17 [i_0] [i_0] [i_10] [i_10] [i_11] [i_12]))), var_12)) : var_16));
                        var_40 = (min(var_40, (((var_6 ? ((var_14 ? (arr_4 [i_12] [i_12] [i_11]) : var_7)) : (((-(arr_31 [i_0] [i_12])))))))));
                        arr_42 [i_11] [i_10] [i_11] [i_12] = var_0;
                        arr_43 [i_0] [i_0] [i_10] [i_11] [i_12] = (min(var_2, (((arr_33 [i_11]) ? var_7 : (min(var_9, var_14))))));
                    }
                }
            }
        }
        var_41 = var_4;
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        arr_48 [i_13] [i_13] = (min((max(var_4, (arr_45 [i_13]))), -var_0));

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_42 = (max((min(var_15, var_12)), (!var_14)));
            var_43 = -var_7;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_44 = (~var_11);
            var_45 = var_10;
            var_46 = var_3;
            var_47 = var_15;
            var_48 = (max(var_48, ((max((((arr_50 [i_13] [i_13] [i_13]) ? var_18 : var_9)), (arr_51 [i_15]))))));
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                {
                    arr_62 [i_13] [i_17] = (arr_57 [i_13] [i_16]);
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_49 = (max(var_49, (arr_66 [i_13] [i_13] [i_13] [i_13] [i_13])));
                                arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] = (max((max(var_6, var_11)), var_14));
                                var_50 = var_4;
                                var_51 = (min(1313115111, ((var_9 ? -1 : -1313115111))));
                            }
                        }
                    }
                    var_52 = var_1;

                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        var_53 |= (arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_74 [i_13] [i_16] [i_17] [i_16] = var_14;
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {

                        for (int i_22 = 1; i_22 < 24;i_22 += 1) /* same iter space */
                        {
                            arr_81 [i_17] [i_17] [i_17] = (max(1313115110, 1313115105));
                            arr_82 [i_13] [i_13] = ((-(max((max(var_10, var_18)), ((var_4 ? (arr_54 [i_17] [i_17] [i_17]) : var_14))))));
                            var_54 = var_4;
                        }
                        for (int i_23 = 1; i_23 < 24;i_23 += 1) /* same iter space */
                        {
                            var_55 = (arr_68 [i_13] [i_23 + 1] [i_17] [i_21] [i_17] [i_17] [i_16]);
                            var_56 = (max(var_56, (arr_75 [i_13] [i_16] [i_16] [i_17] [i_21] [i_23])));
                            var_57 = (~(max((arr_68 [i_23] [i_23] [i_23 + 1] [i_23 - 1] [i_23] [i_23 + 1] [i_23]), var_11)));
                            var_58 &= ((min(var_7, (min(var_15, var_16)))));
                        }
                        var_59 = ((var_5 ? (arr_44 [i_21]) : var_18));
                        arr_86 [i_16] [i_16] = var_4;

                        for (int i_24 = 0; i_24 < 25;i_24 += 1)
                        {
                            arr_91 [i_13] [i_13] [i_13] [i_13] [i_13] = ((-(~17694)));
                            var_60 = (~241);
                        }
                    }
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {

                        for (int i_26 = 0; i_26 < 25;i_26 += 1)
                        {
                            var_61 = ((-((-(((arr_50 [i_16] [i_17] [i_26]) ? var_7 : var_8))))));
                            arr_99 [i_16] [i_16] [i_17] [i_25] [i_26] [i_26] |= (min((~var_3), var_2));
                            var_62 = (max(((((max((arr_55 [i_13] [i_16] [i_17]), var_12))) ? (((var_6 ? var_1 : var_14))) : var_6)), ((((((-(arr_83 [i_17] [i_17])))) ? var_15 : ((((arr_64 [i_13] [i_13] [i_13] [i_13] [i_13]) ? var_10 : (arr_85 [i_13] [i_13] [i_16] [i_17] [i_17] [i_25] [i_26])))))))));
                        }
                        for (int i_27 = 0; i_27 < 25;i_27 += 1) /* same iter space */
                        {
                            var_63 &= (max((max(var_3, var_0)), (((1313115111 ? 55420 : -1313115118)))));
                            arr_103 [i_13] [i_13] [i_13] [i_13] = ((((var_13 ? var_15 : var_18))));
                            var_64 = var_11;
                            arr_104 [i_13] [i_16] [i_17] [i_25] [i_16] = (max((((var_4 ? ((var_10 ? var_16 : (arr_72 [i_16] [i_25]))) : (((1313115117 ? 1313115111 : 38085)))))), ((var_16 ? (((var_0 ? (arr_50 [i_16] [i_17] [i_25]) : (arr_79 [i_13] [i_16] [i_17] [i_25] [i_27])))) : ((var_13 ? var_0 : var_1))))));
                        }
                        for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
                        {
                            arr_107 [i_28] [i_25] [i_17] = (arr_95 [i_25] [i_17] [i_16] [i_13]);
                            var_65 = min(((var_15 ? var_14 : ((min((arr_45 [i_13]), var_1))))), ((((!1) ? var_3 : var_10))));
                            var_66 = (max(var_66, (max((max(-1917659054, 26228)), ((~(arr_76 [i_13] [i_16] [i_17] [i_25])))))));
                        }
                        var_67 &= ((-(max((~-26229), var_12))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
