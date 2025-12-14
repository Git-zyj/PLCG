/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((min(var_12, -var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = (min((((60621 ? (arr_0 [i_0] [i_1]) : (~var_2)))), (((arr_4 [i_2] [i_1] [i_1] [i_1]) ? (arr_3 [i_0] [3]) : (~var_2)))));
                    var_20 = var_5;
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((-1 ^ 32) ? (((var_18 != (!var_17)))) : var_7));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_21 = (arr_11 [i_4] [i_3]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_4] [i_4] [i_5] [13] [i_6 + 1] |= var_15;
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = (((arr_3 [i_3] [i_4]) ? var_11 : 241));
                        var_22 = 0;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_23 = ((var_17 ? ((-8894721838665837715 ? (arr_9 [i_3]) : (arr_9 [i_7]))) : ((((arr_16 [i_3] [i_3] [i_3] [i_3]) ? ((max(var_14, (arr_5 [i_7])))) : var_10)))));
            arr_24 [i_3] [i_7] [i_7] = ((min(2, ((2 ? 32 : -8894721838665837713)))));

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {

                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    var_24 = arr_16 [i_3] [i_7] [i_8] [i_9];
                    arr_30 [i_3] [i_8 + 2] [i_8] = ((((((arr_3 [i_3] [11]) ? var_15 : (arr_0 [i_3] [i_7]))) != (((var_10 ? (arr_10 [i_3]) : (arr_0 [i_3] [i_3])))))) ? (((var_10 ? var_15 : (arr_18 [i_9 - 2] [i_9 - 2] [i_9] [i_9] [i_9 - 2] [i_9 - 2])))) : (min((max(var_8, var_13)), (((232 ? -115 : var_16))))));
                    arr_31 [i_3] [i_7] [i_8] [i_9] [i_9] = (((((arr_17 [i_9] [i_9 + 2] [i_3] [i_3]) != (arr_18 [i_9 - 3] [i_9 + 2] [i_9] [i_8 + 1] [i_8 + 1] [i_8]))) ? (~65408) : ((-((min(212, 27)))))));

                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        var_25 = ((((!(arr_29 [i_3] [i_7] [i_3] [i_9 - 1] [i_10])))));
                        arr_34 [i_8] = (max(1048448, var_9));
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = (max(((((max((arr_29 [i_3] [14] [i_3] [i_3] [i_3]), (arr_27 [i_3] [17] [i_8] [i_11])))) ? ((var_1 ? var_9 : -4)) : ((var_1 ? var_15 : var_16)))), (arr_36 [i_11] [i_7] [i_7] [i_3])));
                    arr_37 [i_3] [i_7] [i_8] = var_3;
                    arr_38 [i_3] [i_8] [i_8] [i_11] [i_7] = (((-(arr_12 [i_8] [i_8 + 1] [i_7]))));
                }
                arr_39 [i_8] [i_7] [i_8] = var_15;
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_27 = var_8;
                            var_28 = var_18;
                            var_29 = ((!-65535) > var_10);
                            arr_47 [i_3] [i_7] [9] [i_12] [i_13] [i_8] = (min(232, ((((((2305843009146585088 ? (arr_43 [i_13] [i_12 - 1] [i_8]) : var_6))) > (min(var_5, 32)))))));
                        }
                    }
                }
            }
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_54 [i_3] [19] [i_14 + 1] [i_15] [1] [i_16] = var_12;
                            var_30 = ((((min(((var_17 ? (arr_41 [i_3] [i_3] [i_3] [i_3]) : 4293918848)), 5855018466230795007))) ? (var_16 <= var_7) : (max((arr_46 [i_3] [i_14 - 2] [i_3] [i_16] [i_16 + 3]), (arr_42 [i_3] [i_3] [i_14] [i_15] [i_14 + 1])))));
                            var_31 -= 31;
                            var_32 = (max(var_32, ((min((arr_50 [i_3] [i_7] [i_14] [i_7] [i_3]), ((var_1 ? (((arr_11 [i_3] [i_16]) ^ (arr_27 [i_3] [18] [6] [i_15]))) : (((var_17 > (arr_17 [i_14] [i_14] [i_7] [i_3])))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_33 = (min((!var_13), (arr_13 [i_3])));
                            arr_62 [i_3] [1] [1] [i_17] [i_17] [i_18] = arr_0 [i_3] [i_7];
                            arr_63 [i_3] [i_7] [i_7] [i_17] = (min(36166, 8817));
                        }
                    }
                }
            }

            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_34 = (min(32, -109));
                            var_35 *= var_14;
                        }
                    }
                }
                var_36 = (min(var_36, var_8));
                arr_72 [0] [i_7] = (max(-31, 0));
                var_37 = (max(var_37, (((((-9223372036854775807 - 1) ? (((arr_60 [i_3] [i_3] [i_7] [i_19] [i_7]) ? 31 : (arr_70 [i_3] [i_3] [i_19] [i_19] [i_7] [i_3]))) : ((((arr_18 [i_3] [i_3] [i_3] [i_7] [i_7] [i_19]) >> var_14))))) != ((((!(~var_16)))))))));
                var_38 = (min(((12 & (arr_36 [i_19] [2] [i_3] [i_3]))), ((max((arr_36 [i_3] [i_7] [i_7] [i_19]), var_7)))));
            }
        }
        var_39 = (max(112, 65535));
    }
    #pragma endscop
}
