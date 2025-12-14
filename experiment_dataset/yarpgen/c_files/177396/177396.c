/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_17));
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((var_6 ? var_8 : var_16))) ? ((var_13 ? var_9 : var_10)) : (var_12 | var_9)));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_2] |= (56 - 145);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((~(((!((max(var_12, var_1))))))));
                                var_21 = ((((~((var_11 ? var_0 : var_5))))) & (((var_11 << var_10) ? (var_9 + var_6) : var_1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((-(var_11 / var_4))) * -1078495257378607481)))));
                                var_23 = (max(var_23, ((((var_12 ^ var_4) > (((((max(var_6, var_16)) >= (252 | 0))))))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_2] = ((var_7 ? ((((var_17 ? var_3 : var_1)) ^ var_10)) : ((((!(((var_11 ? var_3 : var_11)))))))));
                }
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_26 [i_0 + 1] [i_0] [i_1] [13] = ((!(((var_9 + ((max(var_10, var_4))))))));
                    var_24 = (max((var_6 | var_16), (var_5 / var_16)));
                    arr_27 [i_0] = (((-8847693710777846847 ? 255 : 9)));

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_25 = ((((218 << (251 - 235))) - (3421357263 || 248)));
                        var_26 = ((((var_5 ? (var_3 - var_1) : var_0))) ? ((var_13 ? ((var_9 << (var_14 - 2043119249))) : (max(var_10, var_15)))) : ((var_7 ? var_10 : var_9)));
                        var_27 = (max(((var_17 ? var_12 : var_1)), ((max((39 >= 37), (max(680826041, 31)))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_0 + 1] [3] [i_7] [1] [i_7 + 1] [i_0] [i_9] = (var_14 ? var_16 : (var_16 > var_1));
                            var_28 = (var_13 & var_14);
                            var_29 ^= 255;
                            var_30 *= var_14;
                        }
                        var_31 = (max(-8315966289386718716, -676168417011314327));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_36 [i_0 - 1] [i_0] [i_7] [17] = var_15;
                        var_32 = 2671024768;
                        var_33 = (((((var_16 < var_10) > var_2)) || ((((-5048685943026051413 > 254) ? var_5 : var_4)))));
                        var_34 += 8;
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_35 = ((~117) | ((((var_15 ? var_1 : var_7)) & ((var_16 ? var_3 : var_10)))));
                        var_36 = ((9223372035781033984 | 2759043477) | var_4);
                        var_37 = (min(var_37, ((max(var_9, var_9)))));
                        var_38 = (max(var_38, (((~((((var_1 <= var_0) <= (var_12 ^ var_15)))))))));
                    }
                    arr_39 [i_0] [i_1] [i_0] [i_0] = (var_12 / var_10);
                }

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_39 |= var_3;
                    var_40 ^= -145;
                    var_41 = (max(var_41, ((((((var_7 | (max(var_12, var_2))))) ? (((((var_7 ? var_2 : var_11))) | var_14)) : 0)))));
                    var_42 = (max(var_42, (var_5 / var_12)));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_43 += (((4294967295 % 3073261831) <= ((var_6 ? var_0 : var_16))));
                            var_44 = (max(var_44, (((var_7 / (((var_5 ? (var_0 - var_14) : var_1))))))));
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_45 = (max(var_45, var_10));

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {

                        for (int i_17 = 2; i_17 < 18;i_17 += 1)
                        {
                            var_46 = ((var_1 / var_0) ? var_10 : var_10);
                            var_47 = (((((var_12 + (var_12 + var_15)))) || ((var_15 || (var_10 || var_9)))));
                            var_48 = var_12;
                        }
                        arr_53 [9] [11] [0] [i_0] [13] [9] = var_0;
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        var_49 = (min(var_49, ((((var_3 ? var_10 : var_8))))));
                        var_50 = -9167398479569224649;
                        var_51 = (((max(var_0, var_6)) % ((var_2 ? var_6 : var_14))));
                    }
                    for (int i_19 = 3; i_19 < 17;i_19 += 1)
                    {
                        var_52 = ((var_9 ? var_3 : var_14));
                        var_53 = (((~var_7) > ((var_8 ? var_12 : var_16))));
                    }
                }
            }
        }
    }
    var_54 = ((((max(var_9, (var_1 && var_8)))) && 188));
    #pragma endscop
}
