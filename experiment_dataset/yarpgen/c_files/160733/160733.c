/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = -17241;
                arr_7 [i_0 - 1] = (var_4 ^ var_3);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = var_4;
        arr_12 [i_2] = 102;

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_11 = var_7;

            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                arr_17 [i_4] [i_3] = var_7;
                var_12 = -568821929;
                var_13 = var_1;
                arr_18 [i_2] [i_4] [i_4] = var_4;
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_14 = var_5;
                arr_21 [i_5] = var_3;
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_15 = (7680 >> var_5);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_32 [i_2] [i_2] [i_6] [i_8] = -7681;
                            var_16 = var_0;
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_37 [i_2] = -7681;

                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    arr_42 [i_2] [i_3] [i_2] [i_10 - 1] = var_0;
                    arr_43 [4] [i_3] [i_3 - 3] [i_3] = var_2;
                    arr_44 [i_10] [i_10] [i_3] [i_3] [i_2] = (var_8 | var_9);
                }
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    var_17 = (min(var_17, (165 ^ 94)));
                    arr_48 [i_3] [i_3] [i_9 - 1] [i_9 - 1] [i_11] [i_11] = var_0;
                    var_18 = (7693 >> 1);
                    var_19 = var_9;
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_20 = (min(var_20, 7680));
                            arr_57 [i_3] = -1642999322;
                        }
                    }
                }
            }
            var_21 = var_0;

            for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_22 -= var_0;

                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {

                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_23 = 42818;
                        var_24 = (29317 | var_2);
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        arr_66 [i_2] [i_2] [i_17] [i_2] [i_17] = (var_4 ^ var_5);
                        arr_67 [i_2] [i_3] [i_2] [i_2] [i_14 + 1] [i_2] [i_17] |= var_8;
                        arr_68 [i_2] |= (-7681 < var_2);
                    }
                    arr_69 [i_2] [4] [i_14] [i_15] = var_4;
                    arr_70 [i_2] = 1;
                }
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_25 = var_9;
                    arr_73 [10] [i_2] [i_3 - 2] [i_3] [9] [i_18] = 64462;
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_26 += (2147483647 || var_3);
                            arr_79 [i_19] [i_3] [i_14] [1] [i_20] [i_3] = (var_1 >= -29335);
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    arr_83 [i_2] [i_2] [i_21] [i_21] &= -7694;
                    var_27 = var_9;

                    for (int i_22 = 3; i_22 < 13;i_22 += 1)
                    {
                        var_28 -= 16213;
                        var_29 = var_9;
                    }
                    for (int i_23 = 2; i_23 < 14;i_23 += 1)
                    {
                        arr_89 [i_23] = 63;
                        arr_90 [i_23] [i_23] [i_14] [i_21] [i_23] = (7659 || var_7);
                        var_30 = var_2;
                    }
                    for (int i_24 = 1; i_24 < 14;i_24 += 1) /* same iter space */
                    {
                        arr_94 [i_21] = var_4;
                        var_31 = var_2;
                    }
                    for (int i_25 = 1; i_25 < 14;i_25 += 1) /* same iter space */
                    {
                        var_32 = var_4;
                        var_33 = 4294967270;
                        var_34 += var_8;
                    }
                }

                for (int i_26 = 0; i_26 < 15;i_26 += 1)
                {
                    var_35 = 1073;
                    var_36 &= (var_8 * 1690364596);
                }
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    arr_103 [i_2] [i_3] [i_14 + 2] [i_27] = var_3;
                    arr_104 [i_2] [i_3 - 2] [i_14] [14] = (var_7 * var_2);
                    arr_105 [i_2] |= 7680;
                }
            }
            for (int i_28 = 1; i_28 < 13;i_28 += 1) /* same iter space */
            {
                arr_110 [i_28] [i_2] [i_2] [i_2] &= 5166;
                var_37 += var_4;
                arr_111 [i_28] = (var_8 * var_6);
            }
            var_38 &= var_9;
        }
        for (int i_29 = 3; i_29 < 13;i_29 += 1)
        {
            var_39 |= (-795013399 / 1);
            arr_115 [i_29] [2] [i_29] = -22384;
        }
    }
    for (int i_30 = 0; i_30 < 12;i_30 += 1)
    {
        var_40 = (min(var_40, ((max(7698, (var_8 | 120))))));
        var_41 = var_8;

        for (int i_31 = 0; i_31 < 12;i_31 += 1)
        {
            var_42 = var_9;
            arr_121 [i_30] = (max(((var_3 % (min(var_0, 7680)))), var_3));
            arr_122 [i_30] [6] = var_0;
        }
        for (int i_32 = 0; i_32 < 12;i_32 += 1)
        {
            arr_125 [i_30] [i_30] = 58444;
            arr_126 [i_32] [i_30] = var_1;
            arr_127 [i_30] [i_30] [i_32] = 15;

            for (int i_33 = 0; i_33 < 12;i_33 += 1)
            {
                var_43 -= 1826717287;
                var_44 = (max((1 + 4294967295), ((min(var_9, var_5)))));
            }
        }
        for (int i_34 = 3; i_34 < 9;i_34 += 1)
        {
            /* LoopNest 2 */
            for (int i_35 = 1; i_35 < 11;i_35 += 1)
            {
                for (int i_36 = 2; i_36 < 8;i_36 += 1)
                {
                    {
                        var_45 &= (var_3 < var_7);
                        arr_138 [i_34] [i_34] [i_34] = var_7;
                        arr_139 [i_34] [i_34] [10] = min(867568397, 4294967295);
                    }
                }
            }

            /* vectorizable */
            for (int i_37 = 2; i_37 < 11;i_37 += 1)
            {
                var_46 = 183962932;
                arr_142 [i_37] [i_37] |= var_7;
            }
            /* vectorizable */
            for (int i_38 = 1; i_38 < 10;i_38 += 1)
            {
                var_47 |= (var_8 / 32767);
                var_48 = var_1;
                var_49 = (((1 & -15) % var_4));
            }
        }
        for (int i_39 = 3; i_39 < 10;i_39 += 1)
        {

            /* vectorizable */
            for (int i_40 = 0; i_40 < 0;i_40 += 1)
            {
                arr_150 [i_40] = 2147483631;
                var_50 = (var_1 / var_4);
            }
            var_51 = ((max(8, var_6)));
            arr_151 [i_30] = (((var_8 / 65535) == (var_4 <= var_9)));
            var_52 = (10 / (var_5 / var_1));
            var_53 = var_9;
        }
    }
    #pragma endscop
}
