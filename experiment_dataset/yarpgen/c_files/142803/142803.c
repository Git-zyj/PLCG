/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 ^= arr_1 [20] [4];
        var_18 = var_13;
        var_19 = (min(var_19, -0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 *= var_9;
                    var_21 *= (((((((max((arr_0 [3]), (arr_6 [0] [i_0] [i_0])))) ? (((arr_7 [18] [i_2]) ? var_16 : var_12)) : ((min((arr_0 [i_1]), (arr_7 [i_1] [i_0]))))))) ? ((min((arr_6 [i_0] [i_1] [i_0]), (arr_1 [i_0] [i_0])))) : (((((min(var_15, (arr_7 [i_0] [i_0])))) ? ((var_2 ? (arr_5 [i_0] [i_0] [6]) : (arr_1 [i_0] [1]))) : ((var_13 ? var_1 : (arr_0 [i_1 + 4]))))))));
                    var_22 = (!16);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_23 = ((123 ? (max((((13 ? 2097150 : 4160749568))), 7762598058800630255)) : 448));
                                arr_16 [15] [i_1] [23] [i_2] [i_1] = (((arr_11 [i_1 - 1] [i_1] [i_1] [i_1 + 3] [i_1 + 2]) ? -4160749596 : (arr_11 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 1] [i_1 + 2])));
                            }
                        }
                    }
                }
            }
        }
        var_24 += min((((arr_9 [14] [i_0] [5] [i_0] [i_0] [i_0]) ? ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : var_12))) : var_11)), (max(134217732, -111539294)));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_5] [i_5] [i_5] [5] = (arr_9 [i_5] [i_5] [17] [22] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [1] [i_9] [i_8] [1] = 205;
                                arr_34 [i_9] = ((arr_11 [i_5] [i_7] [i_9] [i_9 + 2] [i_9]) ? (arr_19 [i_6]) : (((arr_11 [i_7] [i_6] [i_9] [i_7] [i_6]) ? var_16 : (arr_13 [11] [i_6] [i_6]))));
                                arr_35 [12] [i_8] [i_7] [i_6] [12] |= (arr_25 [i_5] [i_6] [i_5] [i_8]);
                            }
                        }
                    }
                }
                arr_36 [i_5] [i_6] [i_6] = var_3;
                arr_37 [i_6] [i_6] [i_6] = (((arr_27 [i_5] [i_5] [i_6] [i_6]) ? (((arr_29 [i_5] [i_5] [i_6] [i_6]) ? (arr_29 [i_5] [i_6] [i_6] [i_5]) : (arr_21 [i_5] [i_6] [i_6]))) : (arr_22 [i_6])));
            }
        }
    }

    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_41 [i_10] = (min((arr_1 [i_10] [i_10]), (arr_22 [i_10])));

        /* vectorizable */
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_25 ^= (arr_6 [6] [6] [2]);
            var_26 = var_7;
            arr_45 [i_10] [i_10] = (arr_10 [i_10] [i_11] [i_11] [i_11 + 1] [i_10] [i_11 - 1]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_27 += (arr_2 [i_12]);
            arr_50 [i_10] [i_10] [10] = var_2;
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        var_28 *= (arr_8 [i_13 - 1] [i_12] [i_13 - 1] [i_14]);
                        var_29 *= (arr_48 [i_13 - 1] [i_13 - 1] [i_13 - 1]);
                    }
                }
            }

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_60 [i_15] [i_15] = (((arr_48 [i_10] [1] [i_15]) ? (arr_54 [i_10] [i_12] [i_12] [i_15]) : (arr_29 [i_10] [i_12] [i_12] [i_10])));
                arr_61 [i_15] [6] [i_15] [i_15] = (((arr_52 [i_10] [i_10] [i_15] [i_15]) ? ((var_3 ? (arr_57 [i_10] [i_12] [i_15]) : (arr_21 [i_10] [i_10] [i_10]))) : (arr_8 [0] [i_12] [i_15] [1])));
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 7;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 9;i_17 += 1)
                    {
                        {
                            var_30 += var_4;
                            arr_66 [i_12] |= (arr_8 [i_16 - 2] [i_16 - 2] [2] [i_17 + 2]);
                        }
                    }
                }
            }
            for (int i_18 = 1; i_18 < 7;i_18 += 1)
            {
                arr_71 [i_10] [i_12] = (arr_51 [i_10] [i_18 + 4] [i_18 + 4]);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 9;i_20 += 1)
                    {
                        {
                            var_31 = (arr_57 [i_19] [i_12] [i_19]);
                            var_32 = (min(var_32, (~18446744073709551613)));
                            var_33 = (min(var_33, var_2));
                            arr_76 [i_19] [6] [i_18 + 3] = var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 9;i_22 += 1)
                    {
                        {
                            var_34 += (((arr_51 [i_18] [i_12] [i_10]) ? (arr_39 [i_10]) : (arr_31 [2] [i_12] [i_21] [i_21] [i_22])));
                            arr_83 [i_10] [i_21] [i_18 - 1] [i_21] [i_22] [i_21] [6] = arr_18 [i_10];
                            var_35 += (!123);
                            var_36 = (arr_79 [i_10] [i_10] [8] [8] [i_10] [3] [8]);
                            var_37 = (min(var_37, ((((var_0 ? (arr_11 [i_10] [i_10] [i_12] [i_21] [i_12]) : (arr_73 [i_12] [1])))))));
                        }
                    }
                }
                var_38 ^= (arr_29 [i_10] [0] [i_10] [11]);
            }
            var_39 += (arr_63 [i_10] [i_10] [i_10] [i_10] [i_12] [i_12]);
        }
    }
    for (int i_23 = 3; i_23 < 9;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 1; i_24 < 7;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 9;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 7;i_26 += 1)
                {
                    {
                        var_40 = (min(var_40, (((-var_9 ? (((!(arr_59 [i_26])))) : var_8)))));
                        arr_95 [i_26] [i_24] [i_24] [i_23 + 2] = arr_72 [i_24] [i_24] [i_24] [i_26 + 2];
                    }
                }
            }
        }
        arr_96 [i_23] [i_23] = var_8;
    }
    for (int i_27 = 0; i_27 < 15;i_27 += 1)
    {
        var_41 = ((((((((var_12 ? (arr_3 [i_27] [i_27]) : var_8))) ? var_12 : var_15))) ? ((-111539314 ? 255 : 255)) : (arr_2 [i_27])));
        var_42 += var_0;
        /* LoopNest 3 */
        for (int i_28 = 1; i_28 < 13;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 15;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 15;i_30 += 1)
                {
                    {
                        var_43 = (max(var_43, (arr_102 [i_27] [i_27] [13])));
                        var_44 ^= ((((arr_13 [3] [i_28] [i_28 - 1]) ? (arr_13 [i_27] [i_28] [i_28 + 2]) : (arr_13 [i_27] [i_27] [i_28 + 1]))));
                    }
                }
            }
        }
        arr_110 [i_27] [i_27] = (arr_0 [i_27]);
    }
    for (int i_31 = 0; i_31 < 25;i_31 += 1)
    {
        arr_113 [i_31] [i_31] = (((-(arr_7 [i_31] [i_31]))));

        for (int i_32 = 3; i_32 < 24;i_32 += 1)
        {
            arr_116 [i_31] [i_31] [i_32] = ((max(58, 2392763422)));
            var_45 = (arr_14 [i_31] [i_32 - 3] [i_31]);
            arr_117 [i_31] = (max(175, -1175599515));
        }
        arr_118 [0] [i_31] = (arr_111 [i_31]);
        arr_119 [i_31] [i_31] = ((((arr_7 [i_31] [i_31]) ? (arr_7 [i_31] [i_31]) : (arr_7 [i_31] [i_31]))));
    }
    #pragma endscop
}
