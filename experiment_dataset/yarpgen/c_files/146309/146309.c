/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 |= (arr_2 [i_1]);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 &= ((((max(16, (arr_4 [10] [1] [i_2])))) ? ((var_6 - (arr_4 [i_0 + 1] [i_1] [15]))) : ((var_9 ? 523776 : (arr_4 [i_0 - 1] [i_1] [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_12 = (var_1 ^ 11568206501425819991);

                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            var_13 = 6205938799265074575;
                            var_14 = (arr_7 [i_0] [i_2] [i_3] [10]);
                        }

                        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_15 = 523767;
                            var_16 ^= ((var_1 ? var_5 : (arr_14 [i_3 - 2] [i_3] [i_3 + 1] [i_5 - 2])));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_17 = var_6;
                            var_18 = (max(var_18, (((var_8 ? var_3 : (arr_6 [i_0 + 2] [3] [i_0 + 1]))))));
                            var_19 &= 523776;
                        }

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_20 = ((!(13281578752244912359 < var_8)));
                            var_21 = var_5;
                        }

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_22 ^= ((var_5 ? (arr_25 [i_0 + 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 1]) : 2604));
                            var_23 = (57 < 127);
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_24 = var_5;
                            var_25 = 112;
                            var_26 = 58372;
                        }
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_27 = 57405;
                            var_28 = ((((((max((arr_24 [14] [4] [i_1] [i_0]), var_4))) ? var_8 : (arr_11 [i_0] [i_1] [i_0] [i_2] [i_10] [i_11]))) & (arr_6 [1] [i_1] [i_1])));
                            var_29 = var_8;
                            var_30 = -193360170;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_31 ^= (max((arr_24 [i_10 + 1] [i_10] [i_10 - 1] [i_0 - 1]), (min((arr_11 [i_0] [i_10 - 2] [i_2] [i_10] [i_12] [i_0 + 1]), var_5))));
                            var_32 = (~128);
                            var_33 = (max(var_33, 5165165321464639256));
                        }
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            var_34 = (min(var_34, -var_4));
                            var_35 = (((((7138 ? 7610470833037270052 : ((max(var_0, (arr_30 [2] [2] [2] [i_10 - 2] [i_13 - 1]))))))) ? (((1073741824 >> ((((-(arr_21 [i_13] [i_13] [i_10] [i_2] [6] [i_0 - 1]))) - 366785795))))) : (~var_8)));
                            var_36 = ((var_9 && ((var_6 < (((arr_23 [i_13 + 2] [i_10] [i_10 - 2] [i_2] [i_1] [i_0 - 1]) & (arr_33 [i_0] [0] [i_2] [i_10] [16] [8])))))));
                        }
                        var_37 = 107;
                        var_38 = (((min((((var_5 != (arr_25 [i_0 + 1] [i_1] [i_2] [7] [i_10])))), (~5165165321464639257))) != var_4));
                        var_39 = (max((arr_0 [i_0]), (((7163 == var_1) ? (var_8 % var_0) : ((max(var_4, -57)))))));
                        var_40 = ((var_7 ? (((!(arr_36 [i_10 + 2] [i_1])))) : ((((!var_8) == (~var_5))))));
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        var_41 = (((~var_0) * (((16 ? 0 : 116)))));
                        var_42 = (arr_22 [i_14] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2]);

                        for (int i_15 = 3; i_15 < 13;i_15 += 1)
                        {
                            var_43 = ((5165165321464639257 && 8919394641814175431) ? (((max(var_6, -1)))) : var_4);
                            var_44 = (((((((arr_31 [i_0] [i_0] [i_2]) & var_0)) < -47)) ? (((min(-12, (arr_5 [i_0 - 1] [i_0 - 1]))))) : ((var_5 ? ((max(-1, var_6))) : var_1))));
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_45 = var_4;
                            var_46 = (min(((-48490960 ^ (var_8 && 0))), (((((!(arr_31 [4] [i_1] [i_1])))) & (~1)))));
                        }
                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 15;i_17 += 1)
                        {
                            var_47 = 224;
                            var_48 = (((arr_39 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_0 + 2]) / var_0));
                            var_49 = (arr_27 [i_17] [4] [i_2] [i_1] [i_0]);
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                {
                    var_50 = (max((max((((-48490963 ? -1345099666 : 523774))), var_1)), (max((((-(arr_9 [i_0] [1] [i_18])))), (max(var_0, var_1))))));
                    var_51 = var_2;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            {
                                var_52 = (max((((arr_20 [i_0 + 1] [12] [i_18] [i_19] [i_20]) & (arr_20 [i_0 + 1] [i_1] [i_18] [i_19] [i_20]))), var_6));
                                var_53 ^= var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 15;i_22 += 1)
                        {
                            {
                                var_54 = ((((max((-13 & 3), 3))) < var_5));
                                var_55 |= var_4;
                            }
                        }
                    }

                    for (int i_23 = 1; i_23 < 15;i_23 += 1)
                    {
                        var_56 = (arr_31 [i_0] [i_1] [i_18]);
                        var_57 = (121 % var_0);
                        var_58 = ((((((arr_2 [i_0]) ? (var_5 < var_3) : (arr_58 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) ? (((((max(var_7, var_5)) <= (arr_40 [i_0 + 2] [i_1] [5] [i_1] [i_23 + 1] [i_0 + 1] [i_0]))))) : (max((max(var_2, var_1)), (((!(arr_5 [i_0] [6]))))))));
                        var_59 = ((((!((min(1073741824, var_2))))) ? ((((arr_50 [1] [i_1] [i_18] [i_23 - 1] [i_0] [i_18] [i_1]) ? (arr_50 [i_0] [9] [i_18] [i_23 - 1] [i_1] [i_18] [i_0]) : (arr_50 [i_0] [i_1] [i_18] [i_23 - 1] [i_18] [i_1] [6])))) : ((-(min(-1, var_8))))));
                    }
                }
                for (int i_24 = 0; i_24 < 17;i_24 += 1) /* same iter space */
                {
                    var_60 = (max(var_60, (arr_19 [i_0 - 1] [0] [4] [12] [1])));
                    var_61 = (max((((48490959 && 18446744073709551598) ? var_6 : (var_8 % var_0))), var_1));
                }
            }
        }
    }
    var_62 = var_8;
    var_63 = (min(var_63, (48490985 % -1834963199)));
    #pragma endscop
}
