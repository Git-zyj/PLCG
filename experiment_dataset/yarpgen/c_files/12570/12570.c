/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_14 = 4;
                        var_15 = ((((26480 ? var_11 : 18446744073709551614)) & var_0));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_16 = (arr_4 [i_2] [i_0]);
                            var_17 = (arr_11 [i_0]);
                        }
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_18 = (((arr_7 [i_0] [i_1 - 1] [i_2] [i_5 - 1]) ? (arr_15 [i_2] [4] [i_0] [i_5] [i_5] [i_5] [i_1]) : (arr_15 [i_0 + 1] [i_2 + 2] [i_0] [i_3 - 3] [i_2 + 2] [i_3] [i_0])));
                            var_19 += ((var_1 ? (arr_2 [i_0 - 2]) : (!var_5)));
                            arr_17 [i_0] [i_3] [i_1] [i_1] [i_0] = var_10;
                            var_20 = (((144115188075855616 / 26461) << var_2));
                            arr_18 [4] [16] [8] [i_2 + 2] [i_3] [i_3] [8] |= (arr_10 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3]);
                        }
                        var_21 = (arr_8 [i_0] [i_0] [i_2] [i_3 - 2]);
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_22 -= 30;
            arr_23 [i_0] [i_0] [0] &= (arr_19 [i_0] [i_0] [16]);
        }
        for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_30 [i_8] [i_0] [3] = var_7;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_23, (arr_19 [i_0] [i_7] [i_10])));
                            var_24 -= (-4 / var_3);
                            var_25 -= (((arr_27 [i_0 - 2] [15]) < ((((arr_31 [i_0] [i_10] [i_7] [i_0] [i_10] [i_10]) < var_3)))));
                            var_26 = var_3;
                        }
                    }
                }
                var_27 = (max(var_27, (((-4 - -4) | 65535))));

                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    arr_40 [3] [i_0] [i_0] [i_0 - 2] = var_12;
                    var_28 = (min(var_28, (12348607652301863856 & -3)));
                    arr_41 [i_0] [i_0] = (arr_4 [i_7 + 1] [i_0]);
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_29 = ((((var_11 / (arr_43 [i_0] [i_12] [i_8] [i_0] [i_12] [i_0]))) >= (arr_19 [i_7] [1] [i_0])));
                    var_30 = (((arr_9 [i_0] [i_7] [i_0 - 3]) ? (arr_9 [i_0] [i_12] [i_0 - 1]) : (arr_19 [i_7 + 3] [i_7 + 3] [i_0])));
                    arr_44 [i_0] [i_7] [i_0] [i_12] [i_8] = (arr_6 [i_0] [i_7] [i_0]);
                    var_31 = (max(var_31, (((39055 ? 0 : (arr_42 [i_0] [i_0] [i_0 - 1] [6]))))));
                    var_32 = (4294967295 >= (((arr_16 [i_0] [i_0] [i_0] [i_0] [0] [i_0] [10]) % var_0)));
                }
            }
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                var_33 = 4294967295;
                var_34 = (!(((arr_14 [i_0] [i_0] [5] [i_0 - 2] [i_0] [i_0] [i_0]) < var_2)));
                arr_48 [i_0] [i_0] [7] [i_0] = (((arr_26 [i_13 - 1] [i_0] [i_13]) != 2));
            }
            var_35 = -1;
        }
        for (int i_14 = 2; i_14 < 15;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_36 |= 0;
                        arr_56 [i_16] [i_0] [1] [i_14] [i_0] [i_0 - 2] = ((1 ? var_11 : (arr_25 [i_16])));
                    }
                }
            }
            arr_57 [i_0 + 1] [i_0] = ((!(((1 ? var_10 : 26480)))));
            var_37 = (min(var_37, var_11));
        }
        var_38 = (max(var_38, var_1));

        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            arr_61 [i_0] = 39055;
            var_39 = (max(var_39, (((-(arr_25 [i_0 - 3]))))));
        }
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            arr_72 [i_21] [i_0] [i_19] [0] [i_0] [i_0] = ((!(arr_9 [i_0] [i_0 + 1] [i_0])));
                            var_40 = ((arr_55 [i_0] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 3]) ? (arr_55 [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0]) : 39055);
                            var_41 = (min(var_41, var_6));
                        }
                    }
                }
                arr_73 [i_19] [i_19] &= ((arr_46 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (!11) : (arr_0 [i_19]));
            }
            for (int i_22 = 0; i_22 < 18;i_22 += 1) /* same iter space */
            {
                var_42 = (arr_4 [i_0 + 2] [i_0]);
                arr_77 [i_0] = (arr_2 [i_0]);
                arr_78 [17] [i_0] [i_22] = (((arr_67 [i_0] [i_0 - 3]) ? -6277 : (arr_67 [i_0] [i_0 - 2])));
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    {
                        arr_83 [i_0] [i_18] [i_23] [i_0] = (((arr_67 [i_0 + 1] [i_0 - 2]) & (arr_67 [i_0 + 1] [i_0 - 2])));
                        var_43 ^= (arr_66 [i_18] [i_18] [i_18] [i_0]);
                        var_44 = (max(var_44, -var_5));
                        arr_84 [i_0] [i_0] [i_0] [i_0] [4] |= ((65523 ? (arr_53 [i_0 + 1] [i_0 - 2] [i_0 - 1]) : var_4));
                    }
                }
            }
            var_45 = ((var_4 / var_7) ? (arr_1 [i_0]) : var_2);
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 18;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 17;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_46 = var_8;
                            var_47 = ((var_9 ? (arr_38 [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0 + 2]) : (arr_38 [17] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 1])));
                        }
                    }
                }
            }
            arr_94 [i_0] = (((arr_54 [i_0]) % (arr_50 [i_0 - 3])));
        }
        for (int i_28 = 0; i_28 < 18;i_28 += 1)
        {
            var_48 = (((arr_89 [i_0] [13] [i_0] [7] [7]) | (2886082376 < var_9)));

            for (int i_29 = 0; i_29 < 18;i_29 += 1)
            {

                for (int i_30 = 2; i_30 < 16;i_30 += 1)
                {
                    var_49 -= ((-(arr_7 [i_28] [i_29] [i_29] [i_30 - 1])));
                    arr_104 [1] [1] [i_0] [i_30] = (((arr_68 [7] [i_0] [i_0] [6] [7] [i_30 + 2] [1]) ? (arr_68 [i_0] [i_0] [i_0] [i_0] [i_30] [i_30 - 1] [i_30]) : (arr_68 [i_28] [i_0] [7] [i_30 + 1] [0] [i_30 + 2] [i_30])));
                    var_50 &= (((arr_33 [i_0] [i_28] [i_30 + 1] [i_30] [i_28] [i_0 - 3]) / (arr_33 [i_30] [i_28] [i_30 - 1] [i_30] [10] [i_0 + 1])));
                    var_51 ^= (((arr_76 [i_0] [i_28] [i_30] [i_30]) ? (-127 - 1) : var_8));
                }
                for (int i_31 = 1; i_31 < 16;i_31 += 1)
                {
                    var_52 -= 3896171118;
                    var_53 = (min(var_53, var_9));
                    arr_109 [i_0] = var_2;
                }
                var_54 = (min(var_54, var_2));
            }
            arr_110 [i_0] = var_2;
            arr_111 [i_0] [i_0] = ((var_8 / (arr_98 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])));
            var_55 -= (arr_88 [i_28] [i_28] [i_28] [i_28] [i_28] [i_0 - 1]);
        }
        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            var_56 = var_8;
            var_57 = ((!var_8) ? (var_8 || -16058) : (arr_9 [i_0] [i_0] [i_0]));
        }
    }
    var_58 = (min(var_58, var_1));
    #pragma endscop
}
