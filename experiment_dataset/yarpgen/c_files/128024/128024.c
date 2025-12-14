/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 ^= -70;
        arr_2 [12] |= (min((arr_1 [i_0]), (min(var_2, (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] &= ((var_0 == (arr_4 [i_1] [i_1 - 2])));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = (max(var_14, (((0 >> (3439714514 - 3439714506))))));
            var_15 = (((arr_3 [i_1 - 1] [i_1 - 1]) ? var_8 : 255));

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_1] = (((arr_11 [i_1 - 2]) ? var_12 : 0));
                var_16 &= ((arr_9 [i_1 - 1]) ? (arr_10 [i_3 - 2]) : (arr_10 [i_3 + 1]));
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((var_10 ? (arr_14 [i_4]) : (arr_14 [i_4])));
        var_17 -= (!(arr_7 [i_4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] [i_6] [i_4] = ((~(!var_9)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] = ((var_7 ? (!1) : var_4));
                                arr_28 [i_8] [i_4] [i_4] [i_6 - 1] [i_4] [i_5] [i_4] = (~var_8);
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_31 [i_4] [i_4] [i_6] [i_4] = (((((~(arr_26 [i_5] [i_5] [i_5] [i_5])))) ? (0 | 220) : (1 >= var_10)));
                        var_18 = (max(var_18, ((((((arr_1 [i_4]) ? (arr_5 [i_9]) : var_10))) && (arr_25 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [i_9] [i_9])))));
                    }
                    arr_32 [i_4] [i_5] = (!var_2);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] = arr_26 [i_10] [i_10] [i_10] [i_10];
        var_19 = (min(var_19, (((((109 >= (arr_17 [i_10] [i_10]))))))));

        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_20 = -21984;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_47 [i_10] [9] = 1;
                        arr_48 [i_10] [i_11] [i_12] [i_13] = ((arr_19 [i_13] [i_12] [i_10]) ? (arr_33 [i_10]) : var_1);
                        var_21 = (arr_13 [i_11 - 1] [i_11 - 1]);
                        var_22 *= var_6;
                    }
                }
            }
            var_23 = (min(var_23, (-32767 - 1)));
        }
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    {
                        var_24 = var_2;

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_17] = (~1);
                            arr_62 [i_10] [i_10] [i_17] [i_10] [i_10] [i_10] [i_10] = -21984;
                            arr_63 [i_10] [i_17] [i_17] [i_16] [i_16] [1] [i_17] = (~21958);
                        }
                        for (int i_18 = 1; i_18 < 9;i_18 += 1)
                        {
                            arr_67 [i_10] [i_14] [i_10] [i_16] [i_18] = (((arr_58 [i_14] [i_15 - 1] [i_18 - 1] [i_14] [i_18]) > (arr_33 [i_15 - 1])));
                            arr_68 [i_14] [i_14] [i_18] [i_16] [i_15] [i_14] = (((-4160314556208216958 + 9223372036854775807) >> var_6));
                            arr_69 [i_14] [i_14] [8] = (((arr_41 [i_16 + 2]) ? (arr_26 [i_16 + 2] [i_14 + 3] [i_15] [4]) : (arr_26 [i_16 - 3] [i_14 - 2] [i_14] [i_16 - 1])));
                        }
                        for (int i_19 = 2; i_19 < 7;i_19 += 1)
                        {
                            var_25 |= (~-4160314556208216958);
                            var_26 = (!var_5);
                            var_27 = (min(var_27, var_3));
                        }
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            var_28 = (min(var_28, (var_6 || var_6)));
                            var_29 ^= (((((97427799 ? -3707475922904932984 : 1))) && var_1));
                            var_30 = (min(var_30, (((-(arr_50 [i_14] [i_14 - 2]))))));
                            arr_75 [i_10] [8] [i_10] = (arr_9 [i_20]);
                            arr_76 [i_10] [i_14] [i_15] [i_14] [i_14] [i_16] = ((~((-(arr_35 [i_10] [i_14])))));
                        }
                        var_31 &= (arr_58 [i_14] [i_14 + 3] [i_16 + 2] [i_16] [i_10]);

                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            var_32 -= 97427799;
                            var_33 = (arr_52 [i_16 + 1] [i_21 - 1] [i_21]);
                            var_34 *= (((((var_11 ? var_2 : var_10))) * -2067551431));
                        }
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            var_35 = (min(var_35, var_0));
                            arr_84 [i_14] [2] &= 20874;
                            var_36 = (min(var_36, var_9));
                            var_37 ^= ((~(arr_29 [i_14] [i_14 + 3] [i_15] [i_15])));
                        }
                    }
                }
            }
        }
        arr_85 [i_10] = (((-127 - 1) <= (arr_64 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    var_38 = min(-127, -120);
    var_39 &= (min(((var_12 ^ (var_0 != var_8))), var_2));

    for (int i_23 = 2; i_23 < 21;i_23 += 1)
    {
        var_40 = (min(var_40, ((min(-97427800, var_12)))));
        arr_89 [1] [i_23] = ((~(max(97427799, 3))));
        var_41 = (min((((((32751 / (arr_87 [1]))) == (arr_88 [i_23 + 1])))), (min((max(var_7, -4638514190772272481)), (var_2 & 124)))));
    }
    #pragma endscop
}
