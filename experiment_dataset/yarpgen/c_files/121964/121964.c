/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 >= var_2);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, (-5166385026121221626 > 65535)));
        var_14 &= (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_15 = (arr_4 [i_1] [i_1 + 1] [i_1 - 2]);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_16 = (!30);
                    var_17 = ((arr_4 [i_0] [7] [i_0 - 2]) >= ((((arr_2 [i_0] [i_1 + 2]) >= (arr_1 [i_2])))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_18 = (arr_3 [i_2] [i_1]);
                    var_19 = (arr_5 [i_0] [i_0] [i_0]);
                    var_20 = (max(var_20, (17756277775764386602 >= 5166385026121221626)));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_21 = ((~(((arr_9 [i_1 + 1] [i_0] [i_0 - 2] [i_1 + 1]) * (arr_9 [i_1 - 1] [i_5] [i_0 - 2] [i_4])))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] = (~29801);
                        arr_17 [i_0] [i_4] [i_0] [i_1] = ((-(4294967239 <= 115)));
                        arr_18 [11] [11] [i_2] [i_1] [i_5] = (0 <= 18446744073709551602);
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_22 ^= (arr_2 [i_0] [i_0]);
                        var_23 = (arr_2 [i_4] [i_2]);
                        var_24 ^= (((arr_0 [i_0 - 2] [i_0 - 2]) << (arr_4 [i_2] [i_1 + 2] [i_2])));
                        var_25 = (((!0) <= ((((arr_12 [i_2] [i_2]) <= var_4)))));
                        var_26 = (arr_15 [i_4] [i_4] [i_2] [i_2] [i_4] [6]);
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_27 = (arr_7 [i_1] [i_1 - 1] [i_7 - 1]);
                    var_28 *= (arr_14 [i_0 + 1] [i_1 - 1] [i_2] [2] [i_7 - 1]);

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_29 = (max(var_29, var_11));
                        arr_25 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (((var_7 % var_1) >= (arr_20 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])));
                        arr_26 [i_8] [i_7] [i_8] [i_1] [i_0] |= (arr_2 [12] [i_8]);
                        var_30 = (arr_3 [i_1 - 2] [i_1]);
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_31 = (arr_5 [i_0] [i_2] [i_2]);
                        var_32 = (max(var_32, ((((46416 & 16777215) ^ 16777232)))));
                        var_33 &= ((((((arr_4 [i_1 + 2] [i_1 + 2] [i_9 - 1]) > (arr_4 [i_1 + 1] [i_1 + 1] [i_9 - 1])))) >= (-5166385026121221626 == 1)));
                    }
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        var_34 = var_8;
                        arr_31 [i_1] = ((arr_23 [i_7] [i_7] [i_0] [i_7] [i_10] [i_1]) > (arr_8 [i_1] [i_2] [i_1] [i_10]));
                    }
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_35 = (arr_10 [i_1] [i_1] [i_1] [i_11 - 1] [i_11]);
                    arr_35 [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_15 [i_2] [i_2] [i_2] [0] [i_2] [i_0]);
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_36 = (arr_34 [i_12] [i_1] [i_1] [i_1] [i_0]);
                    arr_40 [i_12] [i_2] [i_1] [i_1] [i_1] [i_0 - 2] = arr_38 [i_0] [i_1] [i_1] [i_1] [i_1 - 1] [i_1];
                    var_37 = ((var_11 % ((var_9 * (arr_30 [i_0] [i_12] [i_0] [i_0] [i_0] [i_1 - 1] [i_0])))));
                }
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    var_38 = ((((((arr_2 [i_0] [i_1 - 1]) && var_0)) && ((var_4 || (arr_6 [i_0] [i_1 + 1] [i_1]))))));
                    var_39 = var_7;
                }
                var_40 |= (arr_19 [0] [0]);
            }
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_41 = var_9;
        arr_46 [1] &= var_8;
        arr_47 [0] [i_14] |= (arr_32 [i_14] [i_14] [i_14] [i_14] [12] [i_14]);
        var_42 = (arr_6 [i_14] [i_14] [i_14]);
        var_43 = ((var_11 ^ (((((arr_0 [i_14] [i_14]) ^ (arr_44 [i_14] [i_14]))) | (arr_32 [14] [i_14] [14] [i_14] [i_14] [i_14])))));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            {

                /* vectorizable */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_44 = var_3;
                    var_45 = (((arr_48 [i_15]) / (arr_51 [i_15])));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_46 = (max(var_46, (arr_48 [i_15])));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 19;i_20 += 1)
                        {
                            {
                                var_47 = (arr_56 [i_15] [i_16] [i_16] [i_16]);
                                var_48 = (arr_50 [i_15] [i_16] [i_19]);
                                var_49 &= (((arr_50 [i_15] [19] [i_15]) << (((arr_50 [14] [14] [i_18]) - 2554))));
                                var_50 = (arr_59 [i_20 - 1] [i_20 + 1] [i_20 + 3] [i_20]);
                                var_51 |= ((var_5 > (arr_61 [i_20 + 3] [i_20 + 1] [i_20 + 1] [i_20 + 3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 20;i_22 += 1)
                        {
                            {
                                var_52 = (((arr_65 [i_15] [i_15] [5] [i_22 - 2] [i_15]) - (((((arr_60 [i_21] [i_21] [i_21]) <= (arr_53 [i_15] [i_18] [i_21])))))));
                                arr_70 [i_16] [i_16] [i_15] [i_21] [i_22] [i_21] [i_16] = var_0;
                                var_53 = (((arr_65 [i_15] [i_18] [i_22 - 2] [i_21] [i_16]) ^ (arr_65 [i_22 - 1] [i_21] [i_22 - 2] [i_21] [i_15])));
                            }
                        }
                    }
                }
                var_54 = (((((~(arr_60 [i_16] [i_16] [i_15])))) || (((~(~var_8))))));
            }
        }
    }
    var_55 &= (((((var_1 > var_1) && var_4)) && -var_7));
    var_56 ^= var_10;
    #pragma endscop
}
