/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(-1152921504338411520, 559182316));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_11 += arr_1 [i_0] [i_1 + 1];
                arr_7 [i_0] [i_0] = 33816;
                var_12 += (((arr_2 [i_1] [i_0]) <= (-1 <= 10)));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 -= 4294967285;
                            var_14 -= (!1);
                            var_15 ^= (((arr_11 [i_0] [i_0] [i_2] [i_0] [i_3 + 1] [1] [i_1 + 2]) > (((!(arr_0 [i_2]))))));
                            var_16 = (arr_8 [i_0] [i_1] [i_3 - 1] [i_1 - 1]);
                        }
                    }
                }
                arr_12 [1] [9] [i_0] [9] = var_5;
            }
            var_17 -= ((((-(arr_3 [i_1]))) % (arr_1 [i_1] [i_1 - 1])));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_18 = (max(var_18, var_8));
            var_19 = (max(var_19, ((((((((var_6 ? 17293822569371140096 : -512))) ? ((max(var_5, (arr_2 [i_5] [i_0])))) : var_1)) < ((((~var_5) <= (arr_9 [i_5 + 1] [i_5 + 2])))))))));

            /* vectorizable */
            for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_19 [i_6] [i_5] [i_5] [i_0] = (512 > (arr_14 [i_5 - 1] [i_5 - 1]));
                arr_20 [12] [i_0] [11] [i_6] = ((-(arr_18 [i_0])));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_20 = (17293822569371140095 - 50311);
                arr_23 [i_0] [i_0] [i_0] = ((((((arr_10 [3] [i_0] [i_5 - 1] [i_5 + 3] [i_7] [5] [7]) ? var_9 : var_6))) ? 15225 : 358884970497309287));
            }
            /* vectorizable */
            for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_21 = (((arr_9 [i_5 + 3] [i_8 + 1]) <= (arr_9 [i_5 + 1] [i_8 - 2])));
                arr_28 [i_5] [i_5 + 1] [i_0] [i_0] = 0;
                arr_29 [2] [i_0] = ((!(arr_2 [i_5 - 1] [i_5 - 1])));
            }
            for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
            {
                arr_32 [i_0] [5] [i_0] [i_0] = ((var_2 >= (((arr_13 [i_5 + 2] [i_5]) ? (arr_13 [i_5 + 2] [11]) : var_2))));
                arr_33 [i_0] [i_5] = (arr_9 [0] [i_9]);
            }

            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_22 *= (((var_3 & 20098) << (((arr_13 [0] [i_10]) - 572761829616995536))));
                var_23 -= ((-((635655585720423218 ? ((var_1 ? var_3 : var_9)) : ((var_9 << (4163353615 - 4163353588)))))));
                var_24 = (max(21, ((((arr_14 [i_5 - 1] [i_5 + 3]) > var_4)))));
                arr_36 [i_0] [i_0] [i_0] [10] = ((~((~(((arr_3 [i_0]) ? var_1 : var_1))))));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                arr_39 [i_11] [i_0] [i_0] = (arr_1 [i_0] [7]);

                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_42 [i_0] [6] [i_0] [i_12] = (((arr_26 [6] [i_5 - 1] [6]) + var_5));
                    var_25 ^= (((arr_27 [i_0]) ? -127 : var_5));
                    arr_43 [i_0] [i_5] [i_0] [i_12] = 4294967295;

                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        arr_46 [13] [i_5] [i_0] [1] [i_13] [i_13] = (arr_15 [i_5 - 1] [i_5 + 1]);
                        arr_47 [i_5 + 3] [i_0] [i_12] [i_13] = 4;
                        var_26 = (arr_41 [i_0] [i_0]);
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_27 -= (arr_17 [0]);
                        var_28 += (((var_9 + 4) + 65));
                        arr_51 [i_0] = (((((-521 ? 4294967285 : 4294967278))) ? ((var_2 >> (1581258208 - 1581258188))) : (arr_6 [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                        arr_52 [i_0] [i_0] [i_0] [8] &= (((var_7 ? (arr_15 [i_5] [i_5]) : var_4)) != (arr_3 [i_0]));
                    }
                    var_29 = (max(var_29, var_3));
                }
                arr_53 [i_0] [i_0] [i_0] = -15225;
            }
            arr_54 [i_0] [9] [i_0] = (!var_8);
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 13;i_16 += 1)
            {
                {
                    arr_61 [i_0] [i_15] [i_0] [i_0] = (max(((-(arr_9 [i_15] [i_15]))), (arr_9 [i_15] [i_16])));
                    var_30 = ((max(((max((arr_9 [i_16] [i_15]), var_1))), 7)) < ((((min(var_6, 512))))));
                }
            }
        }

        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_31 = ((((((max(0, var_3)) - var_3))) ? 238837474804171854 : (((127 ? 2473203788 : var_0)))));

            for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                {
                    arr_70 [i_19] [i_0] [i_0] [i_19] = -1;
                    arr_71 [i_0] [i_0] [i_0] [5] = ((((var_4 <= (var_2 > 254))) ? -12 : (((((arr_58 [i_0] [i_0] [i_0]) > var_4)) ? (511 <= 11791987618027982740) : ((var_0 ? var_8 : (arr_17 [i_0])))))));
                    var_32 ^= (((((18446744073709551615 ^ (arr_63 [i_19] [i_18] [i_0]))) <= ((((arr_67 [i_0] [i_17] [i_18] [i_19] [i_19]) / (arr_41 [i_0] [i_0])))))));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    arr_74 [i_0] = (12 != 788196799);
                    arr_75 [i_0] [i_0] = (~23);
                    var_33 = (((var_7 % -73) << (((12 - -34) - 35))));
                    var_34 = (((((arr_68 [i_0] [i_0] [i_17] [i_18] [i_20] [i_17]) & (arr_22 [i_0] [i_17] [i_17]))) > (arr_21 [i_0] [i_0] [4] [i_0])));
                    arr_76 [i_20] [i_0] [i_17] [i_0] [10] = (((1 ? 7 : (arr_5 [i_0] [i_0] [i_20]))));
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {
                    var_35 = (((((1 ? 64 : 18446744073709551615))) ? -24 : (arr_26 [i_0] [i_17] [i_17])));
                    var_36 = (max(var_36, -1));
                }

                /* vectorizable */
                for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                {
                    arr_83 [i_0] [12] [i_18] [i_18] [i_18] &= (((((var_9 ? 1 : var_8))) ? (arr_9 [i_0] [i_17]) : -62));
                    var_37 -= (!-496);
                    arr_84 [i_0] [i_18] = var_3;
                    arr_85 [i_22] [i_0] [i_0] [6] = var_9;
                }
                for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
                {
                    arr_90 [i_0] [i_17] [i_18] [i_0] [i_23] [i_18] = (max(((-(~-521))), ((~(~-521)))));

                    for (int i_24 = 1; i_24 < 13;i_24 += 1) /* same iter space */
                    {
                        arr_94 [i_0] [i_0] [i_18] [i_23] [i_0] = 4;
                        var_38 = ((~((4294967282 ? 4294967295 : 1))));
                        var_39 = (max(((((min(17024342583481651659, 12706561448253458049))) ? (max((arr_44 [5] [i_0] [4] [i_0] [i_0]), (arr_67 [i_0] [13] [i_0] [i_23] [i_24]))) : -var_8)), ((((arr_40 [i_0] [13] [i_24 - 1] [i_17] [3] [13]) ? (arr_50 [10] [i_24] [i_24 + 1] [i_23] [i_24]) : (arr_40 [i_0] [i_17] [i_24 + 1] [i_23] [i_24 + 1] [i_24 + 1]))))));
                        var_40 = (((~1) ^ -0));
                    }
                    /* vectorizable */
                    for (int i_25 = 1; i_25 < 13;i_25 += 1) /* same iter space */
                    {
                        var_41 = (-((var_3 ? (arr_22 [i_0] [i_0] [i_0]) : 4294967284)));
                        var_42 = var_1;
                        var_43 *= ((9242203347389940720 ? 2097088 : 298311474));
                    }
                }
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 14;i_26 += 1) /* same iter space */
            {

                for (int i_27 = 1; i_27 < 13;i_27 += 1)
                {
                    arr_103 [i_0] [i_26] [i_27 + 1] = (~0);

                    for (int i_28 = 2; i_28 < 13;i_28 += 1) /* same iter space */
                    {
                        var_44 = 8868438819247185986;
                        arr_107 [i_0] [i_0] [i_17] [i_0] [7] [i_27] [i_28] = ((-var_3 ? var_9 : var_8));
                    }
                    for (int i_29 = 2; i_29 < 13;i_29 += 1) /* same iter space */
                    {
                        arr_111 [i_0] [0] [i_26] [i_26] [i_0] [i_0] = (arr_69 [i_0] [i_0] [i_26] [13]);
                        arr_112 [i_29] [i_0] [i_26] = 62287;
                    }
                }
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 14;i_31 += 1)
                    {
                        {
                            var_45 -= (((arr_98 [i_26]) || 120));
                            var_46 = 1;
                            var_47 = ((~(arr_88 [i_0] [2] [i_26] [2] [i_31])));
                        }
                    }
                }

                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    var_48 = (arr_93 [i_26] [i_26] [i_26] [0]);
                    arr_121 [i_17] [i_17] [i_0] [i_32] [i_32] = 43385;
                }
            }
            /* vectorizable */
            for (int i_33 = 0; i_33 < 14;i_33 += 1) /* same iter space */
            {
                var_49 *= (!135);
                arr_124 [i_0] [i_0] [i_0] [i_0] = var_0;
                arr_125 [i_0] = (arr_26 [i_33] [i_17] [i_0]);
                arr_126 [i_0] [i_17] [i_17] [i_17] = 1;
            }
            var_50 -= (((var_0 * (arr_31 [i_0]))));
        }
    }
    var_51 = 0;
    var_52 = var_2;
    #pragma endscop
}
