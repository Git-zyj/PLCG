/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(91, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 = ((!(((arr_3 [18]) > 216))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 = (((((-1320833581 % (arr_10 [i_0] [i_1] [i_2] [10])))) ? (var_0 > var_18) : (arr_13 [i_0] [i_0])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [5] [5] = (((arr_8 [i_3] [i_2] [i_1]) / (arr_8 [i_3] [i_1] [i_0])));
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_23 = (((((1320833581 ? var_6 : -1320833581))) ? ((var_1 ? (arr_4 [16]) : var_2)) : (arr_5 [i_0] [i_4])));
            var_24 = var_7;
            var_25 = (((-1320833588 ? -709914727 : 30)));
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [15] [15] [i_0] = (~-112);
            arr_20 [i_0] [i_5] = (arr_6 [i_5]);

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                var_26 = ((var_7 ? (arr_12 [i_6 + 4]) : var_15));
                var_27 = (max(var_27, -93110269));
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                arr_26 [i_0] [i_0] [i_7 + 2] &= (arr_15 [i_7] [i_0]);
                var_28 += (arr_18 [i_0] [i_0] [i_7]);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_29 = ((((((arr_27 [i_0] [i_8] [i_0] [i_0]) / (arr_23 [i_5])))) ? (((var_10 ? (arr_4 [17]) : var_6))) : (((arr_12 [i_5]) ? (arr_2 [i_0]) : (arr_4 [i_5])))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_35 [i_0] [i_8] [i_8] [i_10] = 15;
                            var_30 = ((!(arr_27 [i_9 - 1] [i_8] [i_9 - 3] [i_9 + 1])));
                            var_31 = ((!(arr_25 [i_5] [i_8])));
                        }
                    }
                }
                var_32 *= ((1320833585 || (((685648132 ? var_8 : (arr_16 [i_0] [i_5] [i_8]))))));

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_38 [i_8] = (((~119) || var_6));
                    arr_39 [i_11] [17] [i_11] [i_8] [i_11] = ((-(((arr_34 [i_0] [3] [i_8] [0] [1]) * (arr_0 [i_0] [i_8])))));
                    var_33 = (((arr_3 [i_0]) ? var_3 : -614574277));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_43 [i_0] [2] |= ((arr_37 [i_12] [16] [16] [i_0]) ? var_3 : (arr_37 [i_0] [12] [i_8] [i_12]));
                    var_34 = arr_6 [i_12];
                    arr_44 [i_0] [i_5] [i_8] [i_8] [i_12] = (!1987057569);
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_35 = ((var_14 ? (((arr_5 [i_13] [i_5]) ? 65513 : var_14)) : 64));
                    var_36 = (3575 ? -3575 : var_12);
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    arr_49 [i_0] [i_0] [i_8] [i_8] = ((((~(arr_0 [i_0] [i_5]))) < var_10));
                    var_37 |= (arr_31 [i_0] [i_5]);
                    var_38 = ((!(~-1)));

                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_53 [i_8] [i_5] [i_5] = ((-(arr_1 [i_14])));
                        var_39 = (min(var_39, (((!(arr_32 [i_0] [i_0]))))));
                    }
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        arr_58 [i_0] [i_16] [i_5] [i_14] [i_8] [i_16] [9] = var_13;
                        var_40 = (((((-32767 - 1) != (arr_0 [i_8] [i_8]))) || var_14));
                        arr_59 [i_0] [i_0] [16] [i_8] [i_14] [i_16] |= (((arr_4 [16]) ? (((var_18 != (arr_11 [i_0])))) : (~77)));
                    }
                }
            }
            var_41 = (((var_16 ? var_0 : var_15)));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_42 = (min(var_42, (arr_22 [i_0] [i_0] [i_17])));
            var_43 = ((127 ? 0 : 102));
            var_44 = (((127 | 113) && (((var_1 ? (arr_10 [i_0] [i_17] [i_17] [i_17]) : (arr_33 [i_0] [i_0] [i_0] [i_0] [8]))))));
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_65 [i_0] [i_18] [i_18] = (((arr_25 [i_0] [i_18]) ? (arr_25 [i_0] [i_0]) : var_4));

            for (int i_19 = 1; i_19 < 22;i_19 += 1)
            {
                var_45 = (arr_11 [i_19 - 1]);
                arr_68 [i_19] = -30;
                var_46 ^= ((var_10 || (arr_62 [i_18])));
            }
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                var_47 = (-20 ^ 4194303);
                arr_72 [i_0] [i_0] [i_0] = var_15;
                var_48 = 127;
            }
        }
        arr_73 [i_0] = ((~(arr_5 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 14;i_21 += 1)
    {
        var_49 = var_18;
        arr_77 [i_21] [i_21] = var_7;
    }
    var_50 = var_7;
    var_51 = ((((((var_11 ? var_3 : var_12)))) ? (((var_15 || 65522) + ((var_5 ? 46437 : var_6)))) : ((min((-1320833581 || var_10), (!var_11))))));
    #pragma endscop
}
