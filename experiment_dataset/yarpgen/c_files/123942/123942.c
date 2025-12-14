/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_5;
    var_20 ^= var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((var_0 << (var_7 - 213)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (var_9 & var_12);
                    var_23 = (min((((var_9 ^ (min(var_3, var_3))))), (min((var_7 / var_18), var_17))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((max(((max(var_12, var_12))), (max((max(var_16, var_1)), var_4)))))));
                                arr_14 [i_0] [6] = var_5;
                                var_25 = (max(var_10, var_1));
                                var_26 = var_9;
                                var_27 = ((min((max(var_6, var_2), ((min(var_15, var_10)))))));
                            }
                        }
                    }
                    var_28 = ((min(var_11, (min(var_16, var_6)))));
                }
            }
        }
        var_29 = (min(var_29, ((min((min(var_5, var_18)), ((max(var_9, var_10))))))));
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_30 = (min(var_30, (((min((max(var_8, var_3)), ((max(var_6, var_9)))))))));

            /* vectorizable */
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_31 = var_2;
                    var_32 = (max(var_32, var_3));
                }
                var_33 ^= (var_14 - var_6);
            }
            var_34 ^= (max(var_18, var_12));
            var_35 ^= ((max(var_14, (min(var_11, var_17)))));
        }
        var_36 = (min(var_36, var_16));

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            var_37 = (min(var_37, (((max(var_1, var_14))))));
            var_38 = ((((min(var_17, var_3))) && ((min(var_16, var_15)))));

            for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_40 [i_9] [i_9] [i_9] [8] [18] [i_5] [i_5] = (min(var_14, var_2));
                            var_39 = (min((max((max(var_1, var_0)), var_1)), ((min(var_15, var_15)))));
                        }
                    }
                }
                var_40 = (min(var_40, ((max((min((max(var_13, var_1)), ((max(var_0, var_12))))), ((max(((min(var_2, var_11))), var_12))))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_41 = (max(((min(var_18, var_1))), var_6));
                            var_42 = (min(-var_7, var_10));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
            {
                var_43 ^= (min((var_8 >> var_9), (~var_1)));
                arr_48 [10] [10] [12] [1] = var_1;
                arr_49 [1] [i_9] [4] [4] = (min(var_2, (max(var_17, var_5))));
                var_44 ^= (min((max((max(var_17, var_2)), (var_13 == var_2))), (((((min(var_8, var_10))) - (var_16 + var_7))))));
                var_45 = (max((max(var_17, var_6)), var_10));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    {
                        var_46 = ((max(((min(var_7, var_10)), var_6))));
                        var_47 = (max(var_7, (max(var_2, (max(var_1, var_16))))));
                        var_48 = (min(var_48, ((min((max(var_3, var_6)), (var_18 % var_15))))));
                    }
                }
            }
            var_49 = var_1;
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            arr_58 [i_18] = (min(((min(var_6, var_6))), (max(var_3, var_11))));
            arr_59 [i_5] [i_18] = -var_2;
            var_50 = ((!(!var_2)));
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            var_51 = (min(var_51, var_3));

            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    arr_68 [i_5] [i_5] [i_5] [i_21] = var_8;
                    arr_69 [i_21] [i_21] [i_20] [3] [1] [i_5] = (max((min((min(var_8, var_6)), (max(var_12, var_1)))), ((max(var_2, var_11)))));
                    var_52 = (min(((min(var_18, var_13))), (max((var_4 - var_13), ((min(var_16, var_0)))))));
                }
                arr_70 [8] [i_19] [i_19] [i_20] = ((max(((min(var_18, var_10))), var_17)));
                var_53 = (max(var_53, ((~(max(var_17, var_15))))));
                var_54 = (min(((var_11 ^ (min(var_3, var_9)))), var_9));
            }
            for (int i_22 = 2; i_22 < 20;i_22 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 21;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_55 = (max((min(var_6, var_15)), ((max(var_0, var_15)))));
                            arr_78 [12] [i_19] [i_22] [i_23 - 1] [i_24] = (min((min(var_4, ((max(var_8, var_0))))), (var_8 && var_11)));
                            var_56 = (min(var_56, var_9));
                            var_57 ^= (max(var_14, ((min(var_9, var_9)))));
                            arr_79 [16] [16] [i_22] [16] [i_22] [i_24] [16] = (min(((max(var_12, var_2))), (~var_7)));
                        }
                    }
                }
                var_58 = min((!var_8), var_14);
                var_59 ^= (max((~var_11), ((min(var_0, var_16)))));
                arr_80 [i_5] [i_5] [i_19] [i_22] = var_15;
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 19;i_26 += 1)
                    {
                        {
                            var_60 = ((min((max(var_1, var_6)), ((min(var_15, var_8))))));
                            arr_88 [i_5] [i_5] [1] = -var_11;
                            var_61 = (!var_3);
                        }
                    }
                }
            }
            for (int i_27 = 2; i_27 < 20;i_27 += 1) /* same iter space */
            {

                for (int i_28 = 0; i_28 < 22;i_28 += 1)
                {

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        var_62 ^= (max((min(((min(var_4, var_5))), var_3)), (var_15 + var_5)));
                        arr_97 [i_29] [i_28] [19] [i_19] [i_5] = min(var_3, (((min(var_9, var_1)))));
                    }
                    for (int i_30 = 2; i_30 < 20;i_30 += 1)
                    {
                        var_63 = (max(var_7, (min((var_4 & var_16), var_7))));
                        var_64 = (min((max((min(var_1, var_3)), ((min(var_18, var_9))))), ((min(var_13, (max(var_7, var_12)))))));
                        arr_101 [19] [i_30] = (min((min((max(var_3, var_12)), ((max(var_7, var_12))))), (var_15 | var_14)));
                        arr_102 [i_5] [i_19] [i_19] [i_30] [i_19] = (min((~var_5), (max(((min(var_15, var_14))), var_5))));
                        var_65 = var_3;
                    }
                    for (int i_31 = 0; i_31 < 22;i_31 += 1)
                    {
                        var_66 ^= (min(((~((max(var_15, var_0))))), var_16));
                        var_67 = (min((!var_12), (min((max(var_9, var_4)), var_13))));
                        arr_105 [i_5] [i_5] [i_5] [i_5] [1] [i_5] [i_5] = -var_4;
                    }
                    for (int i_32 = 0; i_32 < 1;i_32 += 1)
                    {
                        var_68 = (min((min(var_3, var_17)), var_11));
                        var_69 = (max((((-(max(var_1, var_15))))), var_18));
                        var_70 = (min((max((max(var_18, var_1)), ((min(var_0, var_18))))), (max(var_6, ((max(var_8, var_5)))))));
                        var_71 = (min(var_71, (((-(min(var_7, var_5)))))));
                    }
                    var_72 = (min(var_72, ((max((~var_4), ((-((max(var_12, var_8))))))))));
                }
                for (int i_33 = 2; i_33 < 21;i_33 += 1)
                {
                    var_73 ^= var_16;

                    for (int i_34 = 0; i_34 < 22;i_34 += 1)
                    {
                        arr_115 [i_5] [i_19] [i_27 - 2] [i_27 + 1] [21] [i_34] = (max((max(var_7, var_3)), ((((var_2 + 2147483647) << (var_10 - 30757))))));
                        var_74 = (var_17 % var_16);
                    }
                }
                var_75 ^= var_7;
                var_76 ^= var_9;
            }
            for (int i_35 = 2; i_35 < 21;i_35 += 1)
            {
                /* LoopNest 2 */
                for (int i_36 = 1; i_36 < 21;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 22;i_37 += 1)
                    {
                        {
                            var_77 = (min(var_77, ((min((max((!var_17), (min(var_14, var_11)))), var_9)))));
                            arr_124 [i_37] [i_19] [i_35 - 2] [i_19] [0] = (max((min(var_16, var_6)), var_14));
                            var_78 = (min((min((max(var_3, var_15)), ((min(var_5, var_11))))), ((max(var_6, (var_3 < var_4))))));
                        }
                    }
                }
                var_79 ^= (min((min(var_1, var_10)), ((min(var_11, var_13)))));
                var_80 ^= (min((min(var_4, var_17)), ((max(var_18, var_1)))));
                var_81 ^= (max(((min(var_18, var_4))), var_18));
            }

            /* vectorizable */
            for (int i_38 = 2; i_38 < 19;i_38 += 1)
            {
                var_82 = var_5;
                var_83 ^= (var_4 | var_5);
                var_84 = var_5;
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 22;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 22;i_40 += 1)
                    {
                        {
                            var_85 = var_5;
                            arr_132 [i_5] [10] [10] [10] [i_39] [1] = (!var_14);
                            var_86 = var_3;
                        }
                    }
                }
                var_87 = (~var_0);
            }
            var_88 ^= (max((min(var_12, var_3)), var_3));
        }
        var_89 = ((max(var_12, var_16)));
        var_90 = var_0;
    }
    /* vectorizable */
    for (int i_41 = 1; i_41 < 20;i_41 += 1)
    {
        var_91 = (min(var_91, (var_8 == var_17)));
        var_92 ^= var_15;
    }
    for (int i_42 = 4; i_42 < 22;i_42 += 1)
    {
        var_93 = (max(var_93, (((min(var_8, var_18))))));
        arr_138 [3] = ((max(var_0, var_3)));
    }
    #pragma endscop
}
