/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_11 ? var_6 : (var_7 + var_12))));
    var_15 = ((var_9 ? (~var_3) : (min((min(1496388745, var_11)), var_13))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 1;
                var_16 = (((var_2 != 373486119) | (~1496388754)));
                arr_5 [i_0] [i_1] [i_1] = var_3;
                var_17 = 237;
                arr_6 [i_0 - 2] = (-2147483647 - 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_18 = (1513867893 && var_13);

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_2] [i_3] [i_2] = var_10;
                    arr_16 [i_3] [i_3] [i_3] = (((~var_2) == (((2781099380 ? var_2 : var_12)))));
                    var_19 = ((((max(var_13, var_5))) ? (((~var_10) ^ ((~(arr_14 [i_3]))))) : (max((((arr_11 [i_2] [1] [i_4]) >> (-32756 + 32785))), (arr_13 [i_4] [i_4] [i_3] [i_2])))));
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_3] [i_3] [i_3] = ((max(1522199408, (arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]))));

                    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_3] [i_5] [i_3] = (-9223372036854775807 - 1);
                        var_20 += ((((arr_22 [4] [i_5 - 1] [i_5] [i_5 + 1] [0] [i_6 - 2]) << (var_6 + 4848))));
                        var_21 = (-((-(902698921810824999 & 0))));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_22 = var_5;
                        var_23 = (min(var_23, (((~((11298 ? 39127 : 32)))))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_24 = (min(var_24, var_10));
                            var_25 = -33;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_26 -= ((!((((arr_24 [i_2] [i_2] [i_3] [i_5] [i_5] [i_9]) ? var_4 : var_5)))));
                        var_27 = -7691308775532733071;
                    }
                }
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        var_28 = (max(var_28, (((((((((var_1 ? 32755 : var_3))) ? (var_5 / 190) : -var_13))) ? ((~(arr_18 [i_10 + 1] [8] [i_11 - 1]))) : (arr_11 [i_11] [1] [1]))))));
                        arr_38 [i_3] = (arr_26 [i_10 + 1] [i_11 - 2] [i_11 - 1] [i_10 + 1] [i_11 - 3]);
                        var_29 = ((39106 | (var_7 + var_6)));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_30 = 2798578570;
                        var_31 = (max(var_31, (arr_37 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])));
                        var_32 = (~0);
                        arr_42 [i_12] [i_10] |= ((var_6 + (((-3236835232856562318 != var_6) % (0 || var_12)))));
                    }
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        var_33 |= var_8;
                        var_34 = 1231102149;
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_49 [i_3] [4] [8] [5] [i_3] = ((var_7 & (((min(var_0, (arr_31 [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 2])))))));
                        arr_50 [i_3] = (arr_36 [1] [i_3] [i_3] [i_10 + 1] [12]);
                    }
                    arr_51 [i_2] [i_2] &= var_4;
                }

                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {

                    for (int i_16 = 4; i_16 < 16;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_35 ^= var_10;
                            arr_60 [0] [i_3] [i_15] [i_3] [i_2] = (arr_20 [i_16 - 2] [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16] [i_16 + 1]);
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_36 = 1799455948;
                            arr_64 [i_18] [i_3] [i_15 + 1] [i_3] [i_2] = -var_10;
                            arr_65 [i_3] [i_3] [i_3] [i_16] [i_3] [i_16] [i_16] = var_3;
                            var_37 += -var_4;
                            var_38 = (min(var_38, (arr_48 [i_16 - 1] [i_15 + 1] [i_16 - 1] [i_16])));
                        }
                        for (int i_19 = 2; i_19 < 15;i_19 += 1)
                        {
                            var_39 = (min(var_39, var_5));
                            arr_68 [i_2] [i_2] [i_2] [i_19] [i_2] [i_2] &= (arr_24 [i_19] [i_19] [16] [i_19] [i_19] [1]);
                            var_40 = (((((((-19 + 2147483647) >> (-1714303266 + 1714303285))))) % var_5));
                            arr_69 [i_19 + 1] [2] [i_3] [i_3] [i_2] = ((~(((arr_66 [i_19 + 2] [i_19 + 2] [i_15] [i_19] [i_3] [i_2]) ? 2798578572 : var_7))));
                        }
                        arr_70 [i_3] [i_3] [i_15 - 1] = ((+((var_3 ? (arr_45 [i_15 - 1] [i_15] [i_15] [i_15] [i_15 - 1]) : var_1))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        var_41 = (max(var_41, (((1714303266 ? ((var_4 ? var_8 : var_1)) : (arr_11 [i_15 + 1] [i_3] [i_15 + 1]))))));
                        var_42 += (!var_3);
                    }
                    var_43 *= var_5;
                }
            }
        }
    }
    #pragma endscop
}
