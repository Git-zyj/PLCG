/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] = var_8;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, ((min(var_3, var_9)))));
                            var_17 = (arr_2 [i_0] [i_1]);
                            arr_13 [i_1] [i_0] [i_3] [i_3] [i_4] = ((((min(((max(var_4, var_6))), (arr_2 [i_3 + 1] [i_3 + 1])))) - (min(((max(var_6, var_8))), (min(var_1, (arr_1 [i_4])))))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_3] = var_12;
                            var_18 = (max(var_18, (((~((min((arr_0 [i_0] [i_0]), (arr_0 [i_3 - 1] [i_2])))))))));
                            var_19 = (max(var_19, (max(var_10, (arr_1 [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] [3] [i_3] [8] = (((arr_7 [i_6] [i_1] [i_2]) ? (arr_7 [i_0] [i_6] [i_3 - 1]) : (arr_7 [i_0] [i_1] [i_2])));
                            var_20 = (((arr_2 [i_0] [i_1]) ? (((!(-127 - 1)))) : (arr_4 [i_3 + 1] [i_1] [i_3 + 1])));
                            arr_21 [i_3] [i_3 - 1] [i_2] [i_1] [i_3] = var_1;
                            var_21 = (((arr_9 [i_3 + 1] [5] [i_3 + 1] [i_2] [i_3 + 1] [i_2]) ? var_4 : ((var_1 & (arr_1 [i_3 - 1])))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_3 + 1] [i_0] [i_3] = (((-127 - 1) ? 1 : 1));
                            var_22 = (min(var_22, ((-((-(arr_8 [i_0] [i_3 - 1] [i_3] [i_0])))))));
                            var_23 = (arr_0 [i_0] [i_0]);
                            var_24 = (max(var_24, (1759810938 || 2)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_32 [i_0] [i_0] = (((var_11 ? 0 : (!15510))));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = (min(1, 1));

                        for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, var_0));
                            var_26 = min(2250264846, (arr_22 [i_0] [10] [4] [i_9] [4] [i_9]));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [i_9] [i_10] [i_10] [9] = ((-(arr_23 [i_9] [i_9] [i_9] [i_9] [i_12])));
                            var_27 = (arr_36 [i_8 - 1] [i_8 - 1] [i_8 - 1] [8] [i_8 - 1]);
                            var_28 = 56433;
                            var_29 = (min(var_29, (((var_1 ? ((var_13 ? 119 : var_7)) : var_9)))));
                        }
                        var_30 = ((max(var_3, (max(var_12, 1)))));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        var_31 = (min(var_31, (~-120)));
                        var_32 = (min(var_32, (arr_29 [i_0] [i_8 - 1] [i_0])));
                    }
                    arr_48 [i_9] [i_9] [0] [i_0] = max((arr_7 [3] [7] [i_0]), (((var_11 <= ((max((arr_39 [i_8 - 1]), var_3)))))));
                }
            }
        }
        arr_49 [i_0] = var_0;
        var_33 = var_11;
        var_34 = (max(var_34, (((min(42148, var_11))))));
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_35 = (min(var_35, var_0));

        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_55 [i_14] = (arr_52 [i_14 - 1] [i_15]);
            var_36 = (max(var_36, (arr_50 [i_14 - 1])));

            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                var_37 = (((arr_51 [i_14]) ? var_1 : (arr_58 [i_14] [i_15] [i_14] [i_15])));

                for (int i_17 = 2; i_17 < 22;i_17 += 1)
                {
                    var_38 = (max(var_38, (((0 << (1461498509 - 1461498481))))));
                    var_39 = (min(var_39, (!var_12)));
                    arr_61 [i_14] [i_15] [i_16 - 1] [20] [1] = (arr_50 [i_14 - 1]);
                    arr_62 [i_14] [i_14 - 1] [i_14] = 127;
                    var_40 = (max(var_40, (((1 <= -119) / (var_0 ^ -19)))));
                }
                for (int i_18 = 4; i_18 < 20;i_18 += 1) /* same iter space */
                {
                    var_41 = var_8;
                    arr_66 [i_14] [i_14] [i_14] [i_15] [i_14] [17] = (arr_64 [i_14 - 1] [i_16 + 1] [i_18 - 2] [1]);
                    var_42 = (max(var_42, var_3));
                }
                for (int i_19 = 4; i_19 < 20;i_19 += 1) /* same iter space */
                {
                    var_43 = (min(var_43, var_0));
                    var_44 = (max(var_44, (arr_51 [i_14])));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_72 [i_14] [i_14] [i_20] [i_20] [i_20] = (arr_56 [i_14 - 1] [i_14 - 1] [i_14 - 1]);
                        arr_73 [i_20] [i_20] [i_16] [i_19] [i_20] = ((-(arr_69 [i_14] [i_19 - 3] [i_19] [i_19 + 3])));
                        var_45 = (min(var_45, var_4));
                    }
                    var_46 = (((arr_69 [i_14] [i_15] [i_16] [17]) ? ((var_6 ? (arr_63 [i_14] [i_15] [i_16] [i_15]) : var_2)) : (((var_13 >= (arr_58 [i_14] [i_14] [i_14] [i_19]))))));
                }
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    var_47 = (min(var_47, (arr_65 [i_14] [i_15] [i_16] [i_21] [i_21])));
                    arr_76 [i_14 - 1] [i_14] = ((-(((arr_68 [i_14] [i_15] [i_16 + 1] [8]) ? var_9 : var_6))));
                }
                var_48 = var_4;
                arr_77 [i_14] [1] = var_1;
            }
            for (int i_22 = 3; i_22 < 21;i_22 += 1)
            {
                arr_80 [i_15] [i_14] = ((var_2 & (var_3 && var_11)));
                var_49 = (min(var_49, (((var_5 ? (arr_56 [i_14 - 1] [i_22] [i_22 - 2]) : (arr_75 [i_14 - 1] [i_14 - 1] [15]))))));
                arr_81 [i_22 - 2] [i_15] [i_14] = -0;
                var_50 = (max(var_50, ((((((var_4 ? (arr_51 [i_14]) : (arr_64 [i_14 - 1] [i_15] [i_22] [i_14 - 1])))) || (arr_64 [i_15] [i_22 + 1] [i_22] [i_22]))))));
                arr_82 [i_22] [i_14] [i_14] [i_14] = (var_4 * var_9);
            }
            var_51 = (min(var_51, (var_11 + 33)));
        }
        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            var_52 = (max(var_52, (arr_74 [i_14] [i_14] [i_23] [i_23])));
            var_53 = (max(var_53, ((min(-var_8, (min(var_3, (arr_68 [i_14] [i_14] [i_14 - 1] [i_14]))))))));
        }
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            var_54 = (max(var_54, ((max((arr_53 [i_14 - 1] [i_24] [i_24]), (arr_69 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]))))));
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 3; i_26 < 21;i_26 += 1)
                {
                    {
                        var_55 = (((min(((var_7 ? var_12 : (arr_54 [9] [i_25] [i_14]))), (arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) << (((arr_89 [20] [i_24] [i_25]) - 1847466352))));
                        arr_94 [i_24] = var_11;
                    }
                }
            }
        }
    }
    for (int i_27 = 2; i_27 < 8;i_27 += 1)
    {
        var_56 = (max(var_56, (((12 ? 127 : 3721633761)))));
        var_57 = (max(var_57, ((((min((((var_5 ? var_6 : var_11))), (max(var_7, (arr_56 [i_27] [i_27] [i_27]))))) == (max((var_10 || var_13), (var_6 / var_7))))))));
        var_58 = (min(var_58, ((max(-293883999, (max(((2147483643 << (76 - 76))), 40418)))))));
        arr_97 [i_27] [i_27] = (((var_1 ^ var_4) ? (min(((min((arr_86 [i_27] [14]), (arr_68 [i_27] [i_27] [i_27] [i_27])))), -var_1)) : (var_5 & 1)));
    }
    for (int i_28 = 2; i_28 < 19;i_28 += 1)
    {
        arr_102 [i_28] = ((((min(26156, (min(822850173, 119))))) ? ((((arr_90 [i_28 - 2] [i_28 - 1] [i_28 + 1] [i_28 - 1]) != (((arr_54 [14] [1] [1]) / var_13))))) : (max(((min(var_5, (arr_86 [i_28 + 1] [i_28])))), ((var_12 ? (arr_57 [i_28 + 1]) : var_13))))));
        arr_103 [i_28] = (arr_70 [20] [i_28] [i_28] [i_28] [20] [i_28] [i_28]);
        var_59 = (((((~(arr_71 [i_28] [i_28] [i_28] [i_28] [1] [i_28 + 1])))) ? (arr_84 [3] [i_28 - 2]) : -var_8));
    }
    var_60 = var_0;
    var_61 = var_4;
    #pragma endscop
}
