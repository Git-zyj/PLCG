/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_4 % ((12127 ? 111 : var_16))))) ? (!var_12) : (62557 || var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_1;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min((max(13109, 96)), (!150)));
                                arr_12 [i_0] [i_1] [i_0] [i_0] = 0;
                                var_21 = (((((7656 ? var_14 : 16736))) ? (((var_9 ? 0 : 64568))) : (max((arr_1 [i_0]), 16238266172935340230))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_22 += (min(7656, (~37500)));
                                var_23 = 58177;
                                var_24 = (max(((((max(15, 30045))) ^ var_14)), 61385));
                                var_25 = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_26 += (((10543584591620576049 & var_16) * (61378 < 19)));
                                var_27 = min((!227), 113);
                                var_28 -= ((((1 ? 0 : 1)) >> (((25 != (arr_20 [i_5 + 1] [i_1] [i_9 + 1] [i_5] [i_5 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_29 = 61401;
                                var_30 = (max(var_30, (arr_11 [i_0 + 1])));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_31 = (min(var_31, 1));
                        arr_37 [i_13] [i_0] [i_0] [4] = (237 > var_9);
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_32 = 14719;
                        var_33 = (((arr_38 [i_0] [i_1] [i_12] [i_14]) & 3434061491612198417));
                        var_34 -= ((2264017802 ? 146 : 0));
                    }
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        arr_44 [i_0] [i_0 + 1] [i_0] = 255;

                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            arr_47 [i_0 + 1] [i_1] [3] [i_0] = 1;
                            arr_48 [i_0] [i_0] [i_0] [i_12] [i_15] [i_0] = 5771344121428615605;
                        }
                        var_35 = 18446744073709551615;
                        var_36 += 148;
                        var_37 = (max(var_37, 0));
                    }
                    for (int i_17 = 3; i_17 < 15;i_17 += 1)
                    {
                        arr_51 [i_17 - 3] [i_0] [i_0] [i_0] = 64;
                        var_38 += (((!3143080564591038909) ? var_15 : 1532728153));
                        arr_52 [i_0] [i_0 + 1] [i_1] [8] [i_0] [8] = ((161 & (arr_17 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])));
                    }
                }
                for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                {
                    var_39 += ((13 ? 0 : 4129523711392916434));
                    arr_55 [i_0] [i_1] [i_1] [i_0] = (((61412 <= -7671471566925151399) ? 2 : 242));
                    arr_56 [i_0] [i_0] [11] = (max((-463162571340750055 - var_16), (max(3104813110, ((2208477900774211386 ? var_1 : 2208477900774211355))))));
                }
                for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    var_40 = 253;

                    for (int i_20 = 0; i_20 < 0;i_20 += 1)
                    {
                        arr_63 [8] [i_1] [i_19] [i_0] = var_7;
                        var_41 = 1;
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_42 = 121746882;
                        var_43 += max(1, 2447155822344430250);
                        var_44 = (min(var_44, ((min(23025, (!var_3))))));

                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 15;i_22 += 1)
                        {
                            var_45 -= 2447155822344430250;
                            var_46 = (max(var_46, (((111 ? (arr_41 [i_1] [i_19] [i_21] [i_22 + 1]) : 85)))));
                            arr_69 [i_0 + 1] [i_1] [i_0] [i_21] [i_0] = ((-(4294705152 <= 1849242543)));
                            var_47 -= ((arr_0 [i_0 + 1] [i_19]) >= (arr_41 [i_0 + 1] [i_0 + 1] [i_1] [i_1]));
                        }
                        var_48 += ((((((!var_0) && var_13))) | (~var_8)));
                    }
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        var_49 += ((((-(~var_11))) | ((~((250 ? 64 : var_9))))));
                        var_50 += ((((min(206, (arr_16 [i_0 + 1] [i_19] [i_0 + 1] [i_19])))) < (arr_30 [i_19] [i_0 + 1])));
                        arr_73 [i_0] [i_19] [i_0] [i_0] [i_1] [i_1] = (min(-4640, ((34 ? 1 : 229))));
                    }
                    arr_74 [i_0] [i_1] [i_0] = var_4;
                    arr_75 [i_0] = 75;
                    var_51 += (((max(var_17, 255))));
                }
            }
        }
    }
    #pragma endscop
}
