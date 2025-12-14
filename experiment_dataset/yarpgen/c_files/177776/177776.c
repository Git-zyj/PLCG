/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((~((14237 ? var_4 : (14237 == var_10)))));
    var_12 = 2797884749;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 = ((var_7 | (-2147483647 - 1)));
        var_14 = 2047;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_15 ^= 2125429507;
                    var_16 += (max(((max(-63488, (~60)))), (max((((arr_9 [i_2]) ? var_8 : (arr_3 [0]))), (arr_4 [10] [10] [i_1])))));
                }
            }
        }
        var_17 = (~4194303);

        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_18 = (((arr_5 [i_4]) > (arr_7 [i_4] [i_4])));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = var_5;
                            arr_21 [14] [i_4] [i_5] [12] [i_6] [i_7] = (((var_4 && var_9) != (-2147483647 - 1)));
                        }
                    }
                }
                var_20 = (((arr_4 [i_1] [i_4 - 1] [i_4]) ? (arr_1 [i_4 - 1] [i_5 - 1]) : (arr_11 [i_4] [i_4])));
                arr_22 [i_4] = ((!((!(arr_6 [i_5] [i_5] [i_5] [i_5])))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_30 [i_5 - 1] [i_5] [i_4] [3] = (arr_7 [i_5 - 1] [i_4]);
                            arr_31 [i_1] [i_5] [i_8 + 1] [i_9] &= ((((7 ? 54 : -112)) - var_0));
                            var_21 = ((-(((arr_18 [5]) ? 0 : 1496289702))));
                            var_22 = 2147483647;
                        }
                    }
                }
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_23 |= (~var_9);
                var_24 = (max(var_24, (((var_9 ? (arr_6 [i_10 - 1] [i_10] [i_10 + 3] [i_4 - 1]) : (arr_6 [i_10 - 1] [i_10] [i_10 + 4] [i_4 - 1]))))));
                var_25 = ((68719476735 ? var_9 : var_6));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_26 += ((var_4 / (arr_33 [i_12] [14])));
                            arr_41 [i_4] [i_4 - 1] = arr_4 [i_4] [i_4] [i_4];
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        arr_44 [i_13] = (((arr_43 [i_13]) <= (arr_43 [i_13])));
        arr_45 [i_13] = 144112989052600320;

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_27 = ((((arr_23 [i_14] [i_14] [i_13 - 2] [i_13 + 3] [i_13]) ? (arr_29 [i_13 + 1] [2] [i_14]) : (arr_14 [i_13] [i_14] [i_14]))));
            arr_49 [i_14] [i_14] [i_13] |= (18446744004990074880 >> 15);
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            arr_62 [i_13] [i_13] [i_16] [i_17] [i_13] = (!971348579);
                            arr_63 [i_17 + 1] [i_13] [i_15] [i_16] [i_18] = 18446744073709551607;
                        }
                    }
                }
                arr_64 [i_16] [i_13] [i_13] = ((!(arr_3 [i_13 - 2])));
                arr_65 [13] [i_13] [i_16] = (!-0);
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        {
                            var_28 = var_10;
                            var_29 = 516601359;
                        }
                    }
                }
            }
            arr_76 [i_13] = (((arr_3 [3]) ? var_0 : -61));
            var_30 = (max(var_30, var_10));
        }
        for (int i_22 = 2; i_22 < 14;i_22 += 1)
        {
            arr_79 [i_13] = ((10702 ? (arr_23 [i_13 + 3] [i_22 - 1] [i_13 + 3] [i_22] [i_22]) : 16383));
            var_31 = 31034;
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    {
                        arr_87 [i_13] [i_23] [i_22] [i_13] = (~var_1);

                        for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
                        {
                            arr_90 [i_13] [i_22] [i_23] [i_25] = 65533;
                            arr_91 [i_13] = ((!(arr_34 [i_22 - 2] [i_22 - 1] [i_13 + 3])));
                            arr_92 [13] [i_13] [i_24] [i_24] [i_24] = ((!((((arr_4 [i_22 + 1] [i_23] [i_13]) ? (arr_81 [i_22] [i_23] [9] [5]) : (arr_77 [i_13]))))));
                            arr_93 [i_13 + 1] [i_22] [i_23] [2] [i_23] [i_24] [2] &= (((arr_39 [2] [i_22 - 2] [i_13 + 3] [i_24]) / 14237));
                        }
                        for (int i_26 = 0; i_26 < 15;i_26 += 1) /* same iter space */
                        {
                            var_32 = (((arr_7 [i_13 + 2] [i_13]) & var_10));
                            var_33 = var_9;
                            arr_97 [i_13 + 2] [i_22] [4] [3] [i_24] [i_24] [i_13] = 23887;
                            var_34 = -5778274800286042674;
                            var_35 = var_1;
                        }
                        var_36 = (min(var_36, (var_10 * var_2)));
                    }
                }
            }
        }

        for (int i_27 = 3; i_27 < 14;i_27 += 1) /* same iter space */
        {
            arr_100 [i_13] [i_13] = ((14231 ? var_2 : 63));
            var_37 = (((arr_9 [i_13 - 1]) == (arr_23 [11] [i_27 - 1] [i_27 - 1] [i_27 - 3] [i_13 + 2])));
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 15;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 15;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        {
                            var_38 = var_3;
                            arr_111 [i_13] [i_29] [i_28] [2] [i_13] = (arr_103 [i_28] [i_28] [i_28] [i_29]);
                        }
                    }
                }
            }
            var_39 += (((~var_5) ? 14216 : (~0)));
        }
        for (int i_31 = 3; i_31 < 14;i_31 += 1) /* same iter space */
        {
            var_40 = (arr_15 [i_31 + 1] [7] [i_13] [7]);

            for (int i_32 = 4; i_32 < 14;i_32 += 1)
            {
                arr_117 [i_13] = arr_51 [9];
                var_41 += var_2;
            }
            var_42 += var_1;
            var_43 = (min(var_43, (arr_0 [18] [i_31 - 3])));
        }
        for (int i_33 = 3; i_33 < 14;i_33 += 1) /* same iter space */
        {
            var_44 = var_4;
            arr_121 [i_13 + 2] [i_33] [i_13] = (arr_32 [i_13 + 1]);
            /* LoopNest 3 */
            for (int i_34 = 0; i_34 < 1;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 15;i_35 += 1)
                {
                    for (int i_36 = 1; i_36 < 14;i_36 += 1)
                    {
                        {
                            var_45 = ((var_10 ? (arr_0 [i_13] [i_33 + 1]) : (((~(arr_43 [i_13]))))));
                            var_46 = (((arr_48 [i_36 + 1]) | (arr_48 [i_36 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_47 = (max(var_47, var_10));
    #pragma endscop
}
