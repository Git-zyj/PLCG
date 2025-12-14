/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = 486589029;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_13 = 0;

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_1] [i_1 - 3] [i_1] = (((arr_6 [10] [i_1] [i_2] [i_1 + 1]) ? (arr_6 [14] [14] [14] [i_1 + 1]) : 18));
                arr_10 [i_0] = (arr_1 [i_0] [i_1 - 1]);
                var_14 += (arr_6 [i_0] [i_1] [i_2] [i_1]);
                var_15 = (var_8 * (arr_7 [i_1] [i_2]));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_16 = ((170502625 ? (arr_7 [i_0] [i_3]) : (arr_4 [i_0] [6] [6])));
                var_17 *= (10 >= var_6);
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_18 = ((var_5 ? (arr_12 [13]) : (((arr_5 [i_0] [i_1] [i_0]) ? var_9 : 1847))));
                arr_17 [i_0] [i_1 - 3] [i_1] [14] = (var_10 * 2);
                arr_18 [i_0] [i_1] [i_4] = (6704511001700962345 <= 129);
                arr_19 [i_1] [i_4 + 3] = 1864011877;
                arr_20 [i_4] [i_1 - 2] [i_0] = var_7;
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((var_3 | (arr_4 [i_0] [i_1 - 2] [i_5])));
                var_19 = ((-28 ? -28215 : 28217));
                arr_25 [i_0] [8] = (((!18446744073709551604) ? ((28940 ? var_4 : var_9)) : (var_9 || 255)));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_20 = (((arr_7 [i_1 - 1] [i_5 + 2]) && 100));
                            arr_31 [i_0] [i_6 - 3] [i_5] [i_0] = (arr_22 [i_1 + 3] [i_6 + 1] [i_6 + 1] [i_6]);
                            arr_32 [3] [i_1 + 1] [i_5] [i_6] [i_7] = (((!(arr_12 [i_6]))));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_35 [i_0] [i_1] = ((-125 ? var_4 : (arr_26 [i_1 - 1] [11] [i_0])));
                var_21 = 4294967290;
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_22 = var_10;
                arr_38 [i_0] = ((~(((arr_28 [i_9]) << (var_10 - 9811)))));
            }
            arr_39 [i_0] [i_0] = 25;
            var_23 = (((var_10 ? 1044344366 : var_3)));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_0] = ((((arr_23 [i_0]) & var_4)) * (-55 <= 3541530259));

            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
            {
                arr_46 [i_0] [9] [i_11] [i_11] = ((~((var_9 ? var_8 : (arr_43 [i_11] [i_11] [i_10] [i_0])))));
                var_24 = var_11;
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_25 &= var_3;
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((96 ? var_5 : 1044344365)) / var_10));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_10] [i_0] [i_0] |= var_3;
                var_26 = var_3;
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
            {
                arr_58 [i_0] [i_0] [i_0] = (((3175990483 >= var_6) != 2528620139));
                arr_59 [9] [i_0] [i_10] [i_15] = var_9;
                arr_60 [i_0] [i_0] [15] [i_15] = (((((arr_22 [i_0] [i_0] [9] [5]) ? var_6 : var_10)) / 5));
                var_27 = var_10;
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_28 = (((arr_45 [i_0] [i_10] [i_10] [i_10]) <= (arr_45 [i_16] [i_10] [i_10] [i_0])));
                arr_64 [i_0] = (var_3 + 2465120193153437228);
                var_29 = arr_11 [i_0] [i_10] [i_16];
            }
            var_30 = (max(var_30, (arr_23 [i_10])));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    {
                        var_31 = ((var_0 << (var_1 - 56644)));
                        arr_69 [i_0] [i_0] [i_0] [i_10] [15] [i_18] = var_0;
                        arr_70 [i_17] = (!4194302);
                        arr_71 [14] [i_17] [i_18] = (((3175990479 >= 162578221) ? (var_11 <= var_7) : (3175990478 & var_1)));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
        {
            var_32 = (2385550633468857147 << (var_5 + 123));
            var_33 = (max(var_33, (arr_6 [i_0] [i_0] [i_0] [i_0])));
            var_34 = (min(var_34, (((2 ? 47 : 72535895)))));
            var_35 = (arr_29 [i_0] [i_0] [i_19] [i_19] [15] [i_19] [i_19]);
        }
        arr_74 [i_0] &= ((((((arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 18446744073709551607 : var_2))) ? var_3 : (arr_14 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 21;i_20 += 1)
    {
        var_36 += ((var_1 << (15980708409899529902 != 7)));
        arr_79 [i_20] = var_7;
    }
    for (int i_21 = 0; i_21 < 10;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 10;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 8;i_23 += 1)
            {
                {
                    var_37 = ((((var_5 ? (min((arr_43 [i_21] [i_22] [i_22] [i_23]), (arr_5 [i_23] [i_22] [i_22]))) : (max((arr_52 [i_21] [i_21] [i_21] [i_21]), (arr_22 [i_21] [i_22] [i_23] [i_23]))))) - ((((arr_48 [i_23 + 1] [i_23 + 1] [i_23 - 1]) & var_6)))));
                    var_38 = (max(var_38, 44875));
                    var_39 = ((~((((arr_26 [i_21] [i_21] [i_21]) >= (arr_26 [i_21] [i_22] [i_23 - 1]))))));
                    var_40 -= var_0;
                }
            }
        }
        var_41 = var_6;
    }
    for (int i_24 = 0; i_24 < 12;i_24 += 1)
    {
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 12;i_26 += 1)
            {
                {
                    var_42 = arr_76 [16];
                    var_43 = (max((((max(var_7, -78)) << (((arr_62 [i_24] [i_24] [i_24] [i_24]) - 41)))), (((arr_43 [i_24] [i_24] [i_25] [i_26]) ? var_7 : (arr_40 [i_25])))));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 12;i_28 += 1)
                        {
                            {
                                var_44 = (((~(arr_54 [i_25] [i_25] [i_25]))));
                                var_45 = ((((var_8 || var_6) >> (arr_44 [i_24] [i_26] [i_27]))));
                                var_46 = (arr_2 [13]);
                            }
                        }
                    }
                    arr_101 [i_26] = ((-(arr_89 [i_26] [i_25])));
                }
            }
        }
        var_47 += ((((((max(var_5, 14))) || (arr_48 [i_24] [i_24] [i_24]))) ? ((-(arr_67 [0] [i_24] [0] [i_24] [i_24] [i_24]))) : (arr_56 [i_24] [5] [i_24])));
        arr_102 [i_24] = (max(((((var_8 ? var_11 : var_4)))), ((((max(-117, 46))) ? (arr_13 [i_24] [i_24]) : var_8))));
    }
    var_48 &= 10246192192209074009;
    var_49 = var_1;
    #pragma endscop
}
