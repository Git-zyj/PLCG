/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_9 || (max((-24665 || 0), var_7))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~(~var_15)));
        arr_3 [i_0] &= ((!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = (max(var_18, (((!(arr_7 [i_2] [i_1] [i_3 - 2] [i_0]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_15 [i_4] [i_1] [i_3 + 1] [i_4]) - 65525));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_2] = (((((arr_15 [i_0] [i_1] [i_2] [i_0]) ? (arr_9 [i_2] [i_1] [i_2] [i_2]) : var_3)) - (arr_5 [i_0])));
                    var_19 = ((((-107 + 2147483647) >> (65525 - 65500))) << ((((-1 ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_2]) : var_8)) - 3549433869)));
                    var_20 = (-107 ? -15 : 91);
                }
            }
        }

        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_21 = ((!(((arr_6 [i_0] [i_5 - 1] [i_5 + 2] [i_5 - 1]) || (arr_14 [i_0] [i_5] [i_5] [i_0])))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = (((~(arr_8 [i_5]))));
                            var_23 &= var_13;
                        }
                    }
                }
            }
            var_24 = (max(var_24, ((((arr_20 [i_0] [i_5] [i_5]) ? (arr_20 [i_0] [i_5] [i_0]) : (arr_20 [i_0] [i_5 - 3] [i_5 + 1]))))));
            var_25 = (((arr_22 [i_5] [i_5] [i_0] [i_5 - 1]) | (arr_22 [i_0] [i_5] [i_5] [i_5 - 3])));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_26 -= (arr_20 [i_0] [i_10] [i_10]);
                arr_31 [i_10] = var_15;
                var_27 -= -91;
                arr_32 [i_0] [i_10] = (arr_14 [i_0] [i_9] [i_10] [i_9]);
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_28 -= (arr_1 [i_0]);
                            var_29 = (max(var_29, (arr_22 [i_0] [i_9] [i_0] [i_11])));
                        }
                    }
                }
                var_30 = (max(var_30, (arr_1 [i_0])));

                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    var_31 = ((var_14 ? (arr_36 [i_0] [i_9] [i_14 - 1] [i_0] [i_11]) : (arr_36 [i_0] [i_14] [i_14 + 1] [i_0] [i_0])));
                    var_32 = (max(var_32, (((var_7 ? (arr_42 [i_0] [i_9] [i_0] [i_9] [i_11]) : 27232)))));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_33 |= (!(arr_14 [i_0] [i_11] [i_11] [i_15]));
                    arr_46 [i_0] [i_9] [i_11] [i_15] = (((((!(arr_21 [i_9] [i_9] [i_11] [i_15])))) * (arr_4 [i_0] [i_9] [i_11])));
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_34 = ((var_9 < (arr_47 [i_0] [i_0] [i_11] [i_11] [i_16])));
                    arr_51 [i_0] [i_11] [i_11] [i_11] [i_0] [i_11] = ((((arr_49 [i_0] [i_9] [i_11] [i_11] [i_16] [i_11]) ? -103 : (arr_48 [i_0] [i_9] [i_11] [i_16] [i_0]))));
                    arr_52 [i_0] [i_9] [i_0] [i_16] |= 147;
                }
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    arr_55 [i_11] = arr_37 [i_11] [i_11];

                    for (int i_18 = 2; i_18 < 15;i_18 += 1)
                    {
                        arr_59 [i_0] [i_9] [i_11] [i_11] [i_18 - 2] = 1;
                        var_35 = ((-2147483631 == (arr_25 [i_18] [i_18] [i_18 + 1] [i_18] [i_18])));
                        var_36 |= (arr_50 [i_18 - 2] [i_0] [i_11]);
                        var_37 &= ((((((arr_45 [i_9] [i_9] [i_11] [i_17]) ? 4213968805 : var_9))) ? (((arr_49 [i_0] [i_0] [i_18] [i_17] [i_18] [i_18]) ? var_2 : 1)) : ((((arr_0 [i_11]) == (arr_9 [i_18 + 1] [i_9] [i_17] [i_17]))))));
                    }
                    arr_60 [i_17 + 1] [i_11] = ((-(arr_7 [i_0] [i_17 - 2] [i_11] [i_11])));
                }
            }

            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_38 = (max(var_38, 1792));
                            var_39 = (((arr_12 [i_19] [i_9] [i_20 + 1] [i_20] [i_21] [i_21] [i_21]) ? (arr_12 [i_0] [i_19] [i_20 + 1] [i_21] [i_21] [i_19] [i_19]) : (arr_12 [i_0] [i_19] [i_20 + 1] [i_20 + 1] [i_21] [i_0] [i_21])));
                        }
                    }
                }
                arr_68 [i_0] [i_9] = arr_22 [i_0] [i_9] [i_19] [i_9];

                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    arr_72 [i_0] [i_22] = (!1);
                    var_40 = (arr_0 [i_19]);
                }
            }
        }
        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {

            for (int i_24 = 4; i_24 < 12;i_24 += 1)
            {
                var_41 = (((!1416636642) ? (arr_7 [i_0] [i_23] [i_24 + 1] [i_24]) : (arr_24 [i_23] [i_24 + 4] [i_24] [i_24] [i_24])));
                var_42 = (((arr_5 [i_0]) || ((((var_10 + 2147483647) >> (((arr_4 [i_24] [i_23] [i_24 - 2]) - 34936)))))));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    for (int i_26 = 4; i_26 < 15;i_26 += 1)
                    {
                        {
                            var_43 ^= var_15;
                            arr_85 [i_0] [i_0] [i_23] [i_24] [i_25] [i_26] &= ((~(arr_6 [i_24] [i_24] [i_24 - 4] [i_24])));
                        }
                    }
                }
            }
            arr_86 [i_0] [i_23] [i_23] = (arr_39 [i_0] [i_23] [i_0] [i_0] [i_0] [i_0] [i_23]);
        }
        var_44 ^= ((!(arr_83 [i_0] [i_0])));
    }
    var_45 &= 4213968818;
    #pragma endscop
}
