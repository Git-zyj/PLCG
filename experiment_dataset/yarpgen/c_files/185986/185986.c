/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [1] = (max(0, (min(var_1, (arr_3 [i_2] [i_2 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = 254;
                                arr_14 [4] [i_1] [i_0] [i_1] [i_1] = (min((arr_2 [i_2 - 1]), 954));
                            }
                        }
                    }
                    var_21 = (arr_11 [i_2] [i_2] [8] [9] [i_0] [0] [i_0]);
                }
            }
        }
        var_22 -= (arr_10 [i_0] [6] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        var_23 = (var_3 * 29192);
        arr_18 [10] [i_5] = var_8;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [14] [i_7] [i_6] [i_7] [i_7] = (-76 & -47);
                        var_24 = (0 > ((2766 ? (arr_16 [i_5]) : 1)));
                        var_25 = ((1 ? -18014398505287680 : 28160));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_26 = (min(var_26, 19824));
                        var_27 = (!(arr_23 [4] [1] [3]));

                        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_28 = var_9;
                            arr_34 [i_10] = var_14;
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_29 = (arr_20 [i_6] [i_5]);
                            var_30 = ((6697873522545411087 ? 18014398505287693 : -11670));
                            var_31 = (min(var_31, ((((arr_19 [i_5]) ? ((-(arr_21 [1] [i_6] [i_9]))) : -1)))));
                            var_32 = ((var_13 ? var_1 : (((arr_33 [i_5] [8] [i_10] [i_5] [1] [i_10] [i_5 - 1]) / 1))));
                        }
                        for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_33 = ((-(-16098 | var_17)));
                            var_34 &= var_1;
                            var_35 = (min(var_35, (((-(((arr_19 [0]) ^ (arr_24 [i_13] [1] [i_9] [7] [i_5] [i_5 + 1]))))))));
                        }
                        for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            var_36 = (((var_0 ? var_1 : 1)));
                            var_37 = ((!(((arr_21 [8] [i_14] [i_10]) && (arr_36 [i_5] [i_5 - 1] [4])))));
                            arr_44 [i_14] [i_10] [i_9] [i_5 - 3] [i_10] [i_5 - 3] = (arr_21 [i_14] [13] [i_6]);
                            var_38 = ((~(((((arr_30 [i_5] [i_5] [i_5]) + 2147483647)) << (((arr_27 [i_5] [1] [i_5]) - 181))))));
                            var_39 += (((2781 ? 19 : 253)));
                        }
                        var_40 = (max(var_40, 32424));
                        var_41 = (((arr_31 [i_5 - 4] [i_5 - 4]) ^ 2766));
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_42 -= (~5174);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        var_43 = (arr_32 [i_5 - 3] [i_15] [1] [i_15] [i_17]);
                        arr_52 [i_5] [i_15] [1] [i_17] [i_15] = ((55 ? (arr_50 [i_5] [i_5] [i_5 - 1] [i_16] [i_17] [i_17]) : (arr_50 [i_5] [2] [i_5 - 2] [7] [i_5] [1])));
                        arr_53 [i_5] [14] [i_16] [14] [i_5] [i_17] &= 41;
                        var_44 = -8643;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_45 = -47;
                        var_46 = (arr_25 [16] [i_15] [i_15] [i_15]);
                    }
                }
            }
        }
        for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
        {
            var_47 = (((9 >= -6334) - ((var_9 ? (arr_49 [i_5 - 3] [i_5] [i_5 - 3]) : (arr_41 [i_20])))));
            var_48 = (arr_31 [i_5] [10]);
            var_49 = 0;
            var_50 = (~76);
        }
        var_51 += (((arr_38 [i_5 + 1] [i_5] [4] [i_5] [6] [i_5]) ? (arr_27 [i_5] [i_5] [i_5 - 4]) : 1));
    }
    var_52 = (((((((var_9 ? -7540079857611882186 : var_11)) * var_13))) ? (((var_4 == ((min(var_17, 33111)))))) : var_4));
    #pragma endscop
}
