/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((min(34583, 0)) / (((arr_0 [i_0]) * (arr_1 [17])))));
        var_17 ^= ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 -= ((((1468177967 && (arr_1 [6]))) ? (((((((-(arr_4 [i_1] [i_1])))) || var_13)))) : (min((arr_3 [i_1]), var_3))));
        var_19 = ((((-var_14 % ((-(arr_3 [i_1]))))) + (max(-var_7, var_15))));
        var_20 = (((((max(-1468177967, 34591)) < var_8)) ? ((min(((17518 ? var_9 : 3314900044)), (arr_1 [i_1])))) : var_15));
        var_21 = (min(((~(max(var_9, var_7)))), -29));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = (!var_1);
        var_23 = ((var_2 ? (arr_9 [i_2] [i_2]) : 17519));
        var_24 = (((((arr_8 [i_2]) ? (arr_7 [i_2]) : (arr_3 [i_2])))) ? (((arr_0 [i_2]) ? var_5 : var_7)) : 109);

        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_25 = ((-(arr_7 [i_2])));
            var_26 = (((arr_8 [i_2]) ^ var_1));
            var_27 = ((17518 > ((1 ? var_15 : (arr_4 [i_2] [i_3])))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_28 *= ((~(arr_10 [i_3] [i_3])));
                var_29 = (((arr_0 [i_2]) ? (arr_5 [i_3]) : var_15));
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_30 &= 1264449483;
                            var_31 = (!-17519);
                            var_32 = (arr_7 [i_2]);
                        }
                    }
                }
                var_33 = (min(var_33, (var_0 % 1026548370)));
                var_34 = ((((var_11 ? var_9 : var_1)) * 45344));
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_35 = ((-(arr_24 [i_8])));
            var_36 = var_2;
        }
        var_37 = (((arr_11 [i_2]) ? (arr_8 [i_2]) : 8796093018112));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        var_38 = (min(var_38, var_9));
        var_39 = (((((arr_29 [i_9]) | var_8)) | var_4));
        var_40 = -866490847800290752;
        var_41 = ((!(arr_27 [i_9 + 1])));
        var_42 = -var_6;
    }
    var_43 = var_14;
    var_44 = var_7;
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_45 ^= ((127 ? (arr_35 [i_10]) : (!44251)));

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_46 = ((!(arr_29 [i_10])));
                            var_47 *= (((var_4 && (arr_36 [i_10] [i_14] [i_13 - 1] [i_14]))));
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            var_48 = (arr_45 [i_10] [i_11] [i_12] [i_10 + 3] [i_13 + 1]);
                            var_49 = var_10;
                            var_50 ^= 0;
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                        {
                            var_51 = -1;
                            var_52 = ((-(arr_0 [i_10])));
                            var_53 = (((arr_44 [i_10 + 3] [i_13 + 1] [i_13 + 1] [i_13 + 1]) ? 0 : -7396212391860114173));
                            var_54 = -var_10;
                        }
                        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                        {
                            var_55 = (arr_35 [i_11]);
                            var_56 = ((-(arr_38 [i_10] [i_11] [i_11] [i_13 + 1] [i_11])));
                        }
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_57 = 1468177959;

                        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                        {
                            var_58 |= var_10;
                            var_59 = 7546021828652717841;
                            var_60 = ((45344 ? var_13 : (arr_43 [i_19] [i_10 + 2] [i_10 + 2] [i_19] [i_19])));
                            var_61 = ((((((arr_47 [i_10] [i_19]) ? (arr_36 [i_19] [i_10] [i_10] [i_10]) : -478123983))) ? -var_13 : var_10));
                        }
                        for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                        {
                            var_62 &= (((!var_4) >> (((arr_51 [i_10 + 3] [i_10 + 3]) - 8942541573961523739))));
                            var_63 = (((arr_41 [i_10 + 3] [i_10] [i_18 - 1] [i_10 + 3] [i_20]) ? -85 : ((4294967280 ? var_10 : (arr_27 [i_10])))));
                            var_64 = (-2074098037087207378 > 1026548369);
                            var_65 = (var_4 ? (arr_46 [i_10] [3] [i_10 - 1] [i_10] [i_11] [i_10] [i_18 + 1]) : 1684);
                        }
                        for (int i_21 = 0; i_21 < 16;i_21 += 1)
                        {
                            var_66 = (arr_57 [i_18 - 1] [i_18 + 1] [i_18] [i_18] [i_18 - 1] [i_18 + 1] [i_18]);
                            var_67 = (((arr_41 [i_10] [i_10] [i_12] [4] [i_10]) ? var_3 : (arr_41 [i_10 + 4] [i_10] [i_10 + 3] [i_10 + 2] [i_18 - 1])));
                            var_68 = ((8388607 ? var_14 : (arr_50 [i_10] [i_18 + 1] [i_12] [i_12] [i_10 + 3] [i_10])));
                            var_69 = var_11;
                        }
                        var_70 = ((17518 ? (((-(arr_38 [i_10] [i_11] [i_11] [i_12] [i_18])))) : ((var_0 ? (arr_35 [i_11]) : 3242879364))));
                    }
                    var_71 = (max((arr_33 [i_10 + 4] [i_12]), (min((~var_10), var_12))));
                    var_72 = (max(var_72, ((max(((-(arr_58 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 2]))), (((!(((-(arr_43 [i_10] [i_10] [i_12] [i_11] [i_11]))))))))))));
                    var_73 += var_12;
                }
            }
        }
    }
    var_74 = (((((-var_13 ? var_9 : ((var_8 ? -1214848469 : var_11))))) ? var_13 : (((min(17518, var_3))))));
    #pragma endscop
}
