/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 2] = (((min((max(1, 1843971886)), ((max(var_10, var_4))))) | var_11));
        arr_5 [i_0] = max((max(var_8, ((max(var_9, (arr_2 [i_0 + 1] [i_0])))))), ((max((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] = (((min(var_2, (min(var_6, var_10)))) << (var_2 - 4909479443080885079)));
            var_12 = (arr_6 [i_1] [i_2]);
            arr_11 [4] [14] [i_1 + 1] &= (((arr_1 [i_1] [12]) ^ ((max(var_5, ((var_11 << (arr_3 [i_2] [i_1]))))))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_13 += (max((max((max(var_2, var_5)), (((arr_1 [i_3] [1]) | var_3)))), var_11));
            arr_14 [17] [i_1] [i_1] = (arr_12 [i_1 + 1] [i_1 + 1]);
            var_14 = var_9;
            var_15 = (max(var_10, (max((((arr_1 [1] [i_1]) * var_4)), ((max(var_4, (arr_3 [i_1] [i_1]))))))));
            var_16 = ((max((max(-1331779327, (arr_9 [i_1] [i_3])), (arr_13 [i_1] [0] [i_1])))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_17 = var_5;
            var_18 = (max(((max(var_9, var_7))), (max((arr_13 [i_1] [i_4] [i_1]), (((arr_0 [i_1]) | (arr_6 [i_1 + 1] [i_4])))))));
            var_19 = (max(var_4, (max(23030, 128))));
        }
        arr_17 [i_1] [i_1 + 1] = arr_0 [i_1];
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 += (arr_21 [i_5] [i_5]);

        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_5] [i_5] [i_5] = var_6;
            var_21 = ((+(((min((arr_13 [1] [6] [i_6]), (arr_21 [7] [7]))) ^ (arr_20 [6])))));
            arr_26 [7] = (max((max(((max((arr_9 [i_6] [1]), var_1))), (max(var_7, (arr_0 [i_5]))))), (arr_9 [i_6] [i_6])));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 15;i_7 += 1)
        {
            var_22 = ((arr_6 [i_5] [i_5]) | (((((arr_0 [i_7]) && var_11)))));
            var_23 ^= var_5;
            var_24 = var_10;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_25 = var_2;
                        var_26 = var_0;
                        arr_33 [i_7] [i_8] [i_7] [i_5] = var_0;
                    }
                }
            }

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_27 = (min(var_27, var_2));

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_28 = var_6;
                    arr_39 [i_5] [i_7] = (var_10 > var_6);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_44 [i_10] [i_7] &= var_10;
                    arr_45 [i_7] [i_5] [i_10] [i_5] [i_7] |= var_2;
                    var_29 = var_2;
                    var_30 = (arr_16 [i_5]);
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_48 [i_7] [i_7] [i_7] [i_7] &= arr_20 [12];

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_31 = ((~(arr_2 [i_13] [i_14])));
                        arr_51 [i_14] [i_13] [13] [i_13] [i_5] = (arr_6 [i_10] [i_10]);
                        arr_52 [i_5] [i_7] [i_13] [0] [i_5] = (arr_30 [i_5] [i_7 - 1] [i_10] [i_14]);
                    }
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_32 = var_2;
                        var_33 = (min(var_33, (((((((arr_22 [i_5] [i_5]) > var_0))) % var_11)))));
                        var_34 = var_2;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_13] = (arr_56 [i_13] [i_7] [i_10] [i_10] [i_16]);
                        var_35 = arr_40 [i_5] [i_5];
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        var_36 = (-((var_10 << (((((arr_21 [i_5] [i_7]) + 1505080935)) - 5)))));
                        arr_63 [i_5] [9] [i_13] [i_5] [9] [6] = (var_1 && (arr_38 [i_5] [i_5] [i_5] [i_5]));
                    }
                    arr_64 [i_5] [i_13] [i_5] [i_5] = (((var_9 > var_2) && (~var_9)));
                }
            }
        }
    }
    var_37 = (min((max((max(var_2, var_11)), var_7)), var_1));

    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        var_38 = var_5;

        for (int i_19 = 3; i_19 < 18;i_19 += 1) /* same iter space */
        {
            var_39 = ((9223372036854775807 && 1) > (arr_67 [i_19]));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    {
                        var_40 = var_5;
                        arr_74 [i_18] [19] [i_19] [i_20] [i_21] = (arr_67 [i_18]);
                        var_41 = (arr_71 [i_18] [i_18] [i_18]);
                    }
                }
            }
        }
        for (int i_22 = 3; i_22 < 18;i_22 += 1) /* same iter space */
        {
            var_42 = (min((min(((max((arr_65 [i_18]), var_5))), (max(var_3, var_8)))), (~var_9)));
            var_43 = (arr_75 [i_18] [i_18] [i_18]);

            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                arr_80 [i_18] [14] [i_22 - 3] [14] = var_6;

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    var_44 = (max((2147483645 | 6927583501398011469), (((~((max((arr_72 [i_18] [i_18] [i_23] [i_24]), (arr_70 [i_18] [i_22 - 2] [i_23] [13])))))))));
                    var_45 = -var_3;
                }
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    var_46 = (max(var_46, (max(((max(((((arr_78 [1] [7] [i_23] [i_25]) && var_3))), (arr_82 [12] [i_25] [i_23] [i_25])))), (max(var_8, var_8))))));
                    arr_85 [1] [16] [i_25] [16] [i_23] = var_2;
                    var_47 = (min(var_47, var_5));
                    var_48 = var_2;
                }
                var_49 = (min(var_49, var_7));
            }
            for (int i_26 = 0; i_26 < 0;i_26 += 1)
            {
                arr_88 [i_18] [i_26] [i_26] = (max(8337638194626684909, -23026));
                var_50 = max(((max((~var_9), var_11))), (((((var_10 ^ (arr_77 [i_18] [i_22] [1])))) | (min(var_10, (arr_86 [i_22] [i_22] [i_18]))))));
            }
            for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
            {
                var_51 = (min(var_51, var_0));
                var_52 = max(1, -5305);
                var_53 -= (((max((arr_69 [i_18] [i_18]), (max((arr_84 [i_27] [i_18] [i_27] [i_18]), (arr_86 [i_18] [i_18] [i_27]))))) >= var_0));
            }
            for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
            {
                var_54 = (min(var_54, (max((max((arr_76 [i_18] [6] [10]), var_8)), (min(var_11, (max((arr_76 [i_18] [i_18] [i_18]), var_8))))))));

                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    arr_97 [i_18] [i_22] [i_28] [i_29] &= var_10;
                    var_55 = var_8;
                    var_56 = (max(var_8, var_11));
                }
                /* vectorizable */
                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    var_57 ^= var_11;
                    arr_100 [i_22 + 1] [i_22 + 1] [i_30] = (-var_10 >= var_10);
                    var_58 = (~var_10);
                    arr_101 [i_30] [i_30] = var_7;
                    var_59 = var_5;
                }
            }
            var_60 = (var_11 >= var_0);
            var_61 = max((arr_77 [i_18] [i_22] [i_18]), (var_10 && var_11));
        }
        for (int i_31 = 1; i_31 < 1;i_31 += 1)
        {

            for (int i_32 = 0; i_32 < 20;i_32 += 1)
            {
                var_62 = ((-9223372036854775801 % 1) | (((((max((arr_96 [14] [14] [i_31] [i_32]), var_7))) | (max(-15226, 0))))));
                arr_108 [i_31] [i_18] [i_31] [i_31] = (arr_82 [i_18] [i_31 - 1] [i_32] [i_32]);
                arr_109 [i_31] = max(var_6, (max(7718446671858829567, (arr_91 [i_31] [i_32] [i_31] [i_18]))));
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 20;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 20;i_34 += 1)
                    {
                        {
                            var_63 *= (max(((max(14374, 1))), (min((var_3 > var_0), (min(var_0, (arr_66 [i_18] [i_33])))))));
                            arr_115 [i_18] [i_18] [i_31] [i_32] [i_33] [i_31] [i_34] = var_1;
                            var_64 ^= (((((((arr_107 [i_18] [i_31] [i_31 - 1]) > (arr_65 [i_18]))))) >= var_6));
                        }
                    }
                }

                for (int i_35 = 0; i_35 < 20;i_35 += 1)
                {
                    var_65 ^= (max((max((((var_9 > (arr_73 [13] [i_31] [i_31] [i_18])))), var_5)), ((((((var_10 && (arr_102 [i_18] [i_32])))) >= (max((arr_99 [i_18] [i_18] [18] [i_18]), (arr_87 [10] [i_32] [i_32]))))))));
                    var_66 = (~-1);
                }
            }
            var_67 ^= max((arr_87 [i_18] [1] [i_18]), (var_3 >= var_4));
            arr_118 [i_31] = (max((((max((arr_87 [7] [i_31] [i_18]), (arr_116 [i_18] [i_18] [i_18] [i_18]))) << var_0)), ((max(((var_9 << (-32747 + 32775))), var_0)))));
        }
    }
    #pragma endscop
}
