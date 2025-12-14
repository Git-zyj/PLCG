/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = var_0;
    var_20 = ((var_14 + (var_3 & var_15)));
    var_21 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_1] = var_16;
            arr_6 [i_1] = (~var_5);
            var_22 ^= (arr_2 [i_1] [i_1]);
        }
        for (int i_2 = 1; i_2 < 6;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_23 = arr_13 [i_4];
                            var_24 ^= var_16;
                            arr_19 [i_0] [i_2 + 3] [i_3] [i_2 + 3] [i_5 - 1] [i_0] = (((var_4 || var_4) ? ((var_9 ? (arr_15 [i_5 + 1] [i_2] [i_3] [i_4] [i_5] [i_2] [i_5]) : var_9)) : (arr_9 [0] [i_3] [i_2])));
                        }
                    }
                }
            }
            arr_20 [i_2] [i_0] [i_0 + 1] = (arr_12 [i_0 - 1] [i_0 + 2]);
            var_25 = ((((var_17 ? (arr_12 [i_0] [i_2]) : var_6)) & ((var_14 ? var_13 : (arr_1 [i_0])))));
        }
        arr_21 [i_0] = (var_10 > var_6);
        arr_22 [i_0] [i_0] = (var_17 ^ var_13);
    }
    for (int i_6 = 4; i_6 < 14;i_6 += 1)
    {
        var_26 = ((var_14 || ((((-(arr_24 [8])))))));
        var_27 = (min((min(var_7, (min(41511, (arr_24 [i_6]))))), (arr_25 [i_6])));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = var_3;

        /* vectorizable */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_28 = ((((-(arr_35 [i_7] [9] [i_9] [i_10] [10] [i_11])))) ? (((!(arr_34 [i_7])))) : (arr_36 [i_11 + 1] [i_8] [i_8] [i_10] [1] [i_7]));
                            var_29 = ((((var_10 ? (arr_41 [i_11] [8] [8] [i_10] [i_11]) : (arr_32 [i_11]))) * (var_0 <= var_9)));
                            var_30 = ((~(~var_6)));
                            var_31 = var_14;
                            var_32 ^= var_8;
                        }
                    }
                }
                arr_42 [i_7] [i_7] = (~var_4);

                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    var_33 = ((((arr_41 [i_12] [i_9] [i_9] [i_8] [i_7]) + 2147483647)) << (var_1 - 154));

                    for (int i_13 = 3; i_13 < 20;i_13 += 1)
                    {
                        var_34 = (~var_8);
                        var_35 = (((((~(arr_44 [i_7] [14] [i_12 + 2] [i_13])))) || var_9));
                    }

                    for (int i_14 = 2; i_14 < 19;i_14 += 1)
                    {
                        var_36 = (min(var_36, var_4));
                        arr_51 [i_7] [i_8 + 2] [9] [i_8 + 2] [i_14] = (64 / 81);
                        var_37 = (min(var_37, var_12));
                        var_38 = (arr_38 [i_12] [i_12] [i_12 + 2]);
                    }
                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        var_39 ^= ((~(arr_29 [i_7])));
                        var_40 = ((var_7 & ((var_16 ? var_1 : (arr_43 [i_7] [i_8] [1] [i_9] [i_12] [i_15 - 1])))));
                        var_41 = var_1;
                    }
                    arr_54 [i_7] [4] [i_9] [i_12] [17] = -var_13;
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_42 ^= var_10;
                    arr_57 [i_7] [i_8] [i_7] [i_9] = ((-var_9 ? var_10 : (arr_43 [11] [i_8] [1] [i_8] [i_9] [i_16])));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                {
                    arr_61 [i_7] [i_7] [i_7] = ((-var_9 * ((var_14 / (arr_55 [i_17] [i_17] [i_17] [5] [i_17] [i_17])))));
                    var_43 ^= var_7;
                    arr_62 [i_7] [i_8] [i_9] [i_17] [i_17] [i_17] = (arr_52 [i_7 + 1] [i_8] [i_9] [i_17]);
                }
            }

            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                var_44 ^= (~var_3);

                for (int i_19 = 1; i_19 < 20;i_19 += 1)
                {
                    arr_67 [i_7] [i_19] [7] [i_19] = var_1;
                    arr_68 [i_7] [i_19] = var_3;
                }
                for (int i_20 = 0; i_20 < 0;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 3; i_21 < 20;i_21 += 1) /* same iter space */
                    {
                        var_45 = (arr_26 [i_18] [i_8]);
                        arr_73 [i_7] [i_7] [i_18 + 1] [i_21] [i_21] = 50243;
                        var_46 ^= (var_6 & -var_1);
                    }
                    for (int i_22 = 3; i_22 < 20;i_22 += 1) /* same iter space */
                    {
                        var_47 = var_5;
                        var_48 *= -var_9;
                    }

                    for (int i_23 = 1; i_23 < 18;i_23 += 1)
                    {
                        var_49 = var_17;
                        arr_79 [i_23] [i_20 + 1] [i_18] [i_7] [i_23] = var_7;
                        var_50 = (((((-(arr_30 [i_7] [4])))) ? var_5 : -var_14));
                    }
                    for (int i_24 = 1; i_24 < 19;i_24 += 1)
                    {
                        arr_83 [i_7] [i_7] [i_18] [i_20] [i_18] = (((!-55) || var_17));
                        var_51 = (((arr_46 [i_7] [i_7] [i_7] [i_7] [i_7]) ^ ((-64 ? 124 : var_6))));
                    }
                    for (int i_25 = 1; i_25 < 19;i_25 += 1)
                    {
                        var_52 = (min(var_52, var_12));
                        var_53 = (max(var_53, var_8));
                        arr_87 [i_7] [i_7] [1] [i_7] [i_7 - 3] = ((-(var_5 && var_4)));
                        var_54 = ((~(arr_84 [i_7 + 1] [i_8] [i_18] [i_20])));
                    }
                    var_55 = (((var_8 ? var_13 : var_2)));
                }
                for (int i_26 = 0; i_26 < 0;i_26 += 1) /* same iter space */
                {
                    var_56 = var_13;
                    var_57 = arr_33 [i_7 - 3] [i_8] [i_18] [i_26];
                    var_58 = ((82 ? (arr_49 [i_26 + 1] [8] [i_8]) : (arr_65 [i_26] [i_26] [i_8 + 2] [i_26] [i_7])));
                    var_59 = ((var_17 << (var_14 - 156)));
                }
            }
            var_60 = var_6;
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 0;i_27 += 1)
            {
                for (int i_28 = 2; i_28 < 19;i_28 += 1)
                {
                    {
                        var_61 = ((-var_13 ? ((var_4 * (arr_52 [i_7] [i_8] [i_27] [i_28 - 1]))) : var_11));
                        arr_96 [i_28] = var_14;
                        arr_97 [i_28] [i_8] = ((((var_3 <= (arr_37 [i_7] [i_27] [i_7]))) ? var_4 : var_7));
                        var_62 *= var_1;
                        arr_98 [i_7] [i_7] [i_27] [i_7] [i_27] [i_28] = (~var_5);
                    }
                }
            }
        }
        for (int i_29 = 1; i_29 < 17;i_29 += 1)
        {
            var_63 = (!((((min((arr_94 [i_7 - 1] [i_29] [i_7]), var_6))) < ((var_17 | (arr_34 [i_29]))))));
            /* LoopNest 2 */
            for (int i_30 = 1; i_30 < 1;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    {
                        var_64 *= (min(((((arr_60 [i_7] [i_29] [i_30] [i_31]) > (arr_43 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))), ((+((var_12 ? (arr_50 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_17))))));

                        for (int i_32 = 0; i_32 < 21;i_32 += 1)
                        {
                            var_65 = (max(var_9, (((!(((-(arr_64 [i_30])))))))));
                            var_66 ^= (arr_63 [i_30] [9] [i_30 - 1] [i_30 - 1]);
                        }
                        for (int i_33 = 1; i_33 < 19;i_33 += 1)
                        {
                            var_67 = var_13;
                            arr_112 [i_7 - 2] [i_29] [i_7 - 2] [i_29] = ((-(max(-var_17, (var_9 / var_17)))));
                        }
                        var_68 ^= ((max((!var_14), (arr_35 [i_7] [19] [i_30] [i_31] [i_31] [i_29]))));
                        arr_113 [i_7] [i_29] [i_7] [i_7] = (arr_101 [i_29] [i_29]);
                    }
                }
            }
            var_69 ^= var_5;
        }
        for (int i_34 = 4; i_34 < 20;i_34 += 1)
        {
            /* LoopNest 3 */
            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                for (int i_36 = 2; i_36 < 20;i_36 += 1)
                {
                    for (int i_37 = 2; i_37 < 20;i_37 += 1)
                    {
                        {
                            arr_124 [i_7] [i_34] [i_34] [i_7] [i_36] [16] [i_36] = var_6;
                            var_70 = var_16;
                            arr_125 [i_7] [i_34] [i_35] [i_36] [i_37] = (min((arr_27 [1]), (~var_15)));
                        }
                    }
                }
            }
            var_71 = var_14;
            var_72 = (min(var_72, var_11));
        }
    }
    #pragma endscop
}
