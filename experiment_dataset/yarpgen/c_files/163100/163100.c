/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_2] [i_1] [i_0] = (max(((48 ? (arr_2 [i_2]) : 15300)), (16383 * 18522)));

                            for (int i_4 = 2; i_4 < 12;i_4 += 1)
                            {
                                arr_11 [i_0 - 2] = var_1;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = (max(1, (48666 % 2)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_15 [i_5] [i_3] [i_2] [i_1 - 1] [i_0 - 1] = 34;
                                var_20 = 4208499904730061350;
                            }

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                arr_19 [i_6] [i_1] [i_2] [i_1] [i_0] = ((77 || (((var_11 ? 0 : 1)))));
                                arr_20 [i_0] = var_14;
                                var_21 ^= (((arr_6 [i_1] [i_1 + 1] [i_0 + 3] [i_0]) ? 32505856 : 34));
                                arr_21 [i_6] [i_0] [i_2] [i_1] [i_0] |= 4859895228806182811;
                                arr_22 [i_0] = (((25 ? 4294967295 : (arr_2 [i_2]))));
                            }
                            arr_23 [i_1 - 1] = ((-(min((max(var_16, 9128334977845071502)), (((var_4 ? 2240407103 : -32765)))))));
                            var_22 = (min(var_22, (((var_18 ? 148 : (((var_11 > (arr_10 [i_3] [i_2] [i_0])))))))));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    arr_27 [i_0 + 3] [i_1 + 1] [i_7] = var_14;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_23 = (min(var_23, -var_1));
                        arr_31 [9] [12] [i_7] [i_7 + 1] [i_8] [i_8] = 32505871;
                    }
                }

                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    arr_34 [i_0] [i_0] [i_1] [i_0] = 3513072554;
                    arr_35 [i_0] [i_1] [i_1] = var_13;
                }
                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    arr_38 [i_0] [i_1] [i_10] [i_0] = (((((((max(1, 7173103392632606720))) ? var_6 : ((var_0 ? 23485 : var_19))))) ? var_18 : (!var_10)));
                    arr_39 [i_0] [i_1] = (32830 == 0);
                    arr_40 [i_10] [i_1] [i_0] [i_0] = (((!(((var_0 ? var_12 : var_5))))) ? -1470 : 15977539900006421531);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_46 [i_0 + 2] [i_1] [i_1] [i_11] [i_12 + 2] = (((((min(var_4, var_6))))) ? ((min(1023, (1 >= 1447791564)))) : ((~(var_19 && var_1))));
                                var_24 = (max(var_24, (((((((((arr_1 [i_11]) ? 23485 : 32505871)) | 0))) ? (((!(1 % var_11)))) : ((((var_15 <= 8191) > ((3523970628 ? var_3 : var_17))))))))));
                                var_25 &= (max(127, (((min(66, var_18))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_49 [i_13] = (((arr_47 [i_13]) ? var_14 : var_16));

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_26 = 1048064;
            arr_53 [6] [i_14] [i_13] |= (((((-32505872 ? var_15 : -6279272923877250014))) ? var_4 : (~var_17)));
            arr_54 [i_13] = ((~(var_4 * var_4)));
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_67 [i_13] [i_16] [i_17] = (var_8 ? 225 : var_6);
                            var_27 -= (((arr_62 [i_18 + 1] [i_18 + 1] [i_16] [i_17] [i_18]) >= 1));
                        }
                    }
                }
                arr_68 [i_13] [i_13] = (((((var_4 ? var_0 : (-2147483647 - 1)))) % (var_7 & var_1)));
                var_28 |= (var_3 || var_7);
                arr_69 [i_13] [i_13] = var_4;
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                arr_72 [i_19] [i_13] [i_13] [i_13] = 4823280757661772411;
                var_29 += (0 ^ var_0);
            }
            var_30 = (min(var_30, ((~(!var_3)))));
            var_31 ^= (~var_8);
        }
        arr_73 [i_13] = (arr_65 [i_13] [i_13] [i_13]);
    }
    /* vectorizable */
    for (int i_20 = 4; i_20 < 15;i_20 += 1)
    {
        var_32 = (max(var_32, (~var_8)));

        for (int i_21 = 0; i_21 < 17;i_21 += 1)
        {
            arr_78 [i_21] [i_21] = var_10;

            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                arr_81 [16] |= -var_4;
                var_33 ^= 269024038;
            }
            arr_82 [i_20] [i_21] = (~var_13);
            arr_83 [i_21] [i_21] = (var_19 && var_12);
        }
    }
    #pragma endscop
}
