/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, var_16));
        var_21 = var_17;
        var_22 ^= var_9;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_3] = (((var_9 ? -1924693065 : 242703310)));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((-(((arr_7 [i_1] [i_1]) - (arr_9 [i_1] [i_3] [i_1])))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_3] [i_3] = var_12;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = var_12;
                            var_23 ^= (((arr_3 [i_3] [i_3]) ? (((arr_0 [i_5]) ? (arr_1 [i_1]) : 2)) : (arr_7 [i_1] [i_1])));
                            var_24 = (arr_13 [i_1] [i_3]);
                            var_25 -= (((arr_13 [i_1] [i_5]) >= ((((arr_13 [i_1] [i_5]) || (arr_4 [i_4] [i_4]))))));
                        }
                        arr_19 [i_1] [2] [2] [i_1] &= (((-905546749 ^ 9) ? 35 : ((~(arr_6 [i_1] [i_1] [i_1])))));
                        var_26 = ((var_3 == ((233 ? 191 : -67))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_3] = var_11;

                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_27 = (arr_17 [i_2] [i_3] [i_2]);
                            var_28 = (233 && var_4);
                        }
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, (((var_12 ? (((arr_16 [8] [i_1] [i_1] [i_1] [8]) ? 91 : -6)) : 165)))));
                        arr_30 [i_3] [i_3] [i_3] = (((arr_21 [i_1] [i_1] [i_3] [i_3]) ? ((1905503735 ? 7418469031450375487 : var_3)) : (!-122)));
                        arr_31 [i_3] [i_3] = ((-1689885394391188494 ? -118 : var_19));
                        arr_32 [i_1] [i_1] [i_3] = ((-(((-103 == (arr_9 [i_8] [i_3] [i_8]))))));
                    }
                }
            }
        }
        var_30 = -123;
        arr_33 [i_1] = arr_5 [i_1];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_31 = (min(var_31, -6539380871150775744));
        var_32 = (max(var_32, (((~var_4) ? (((arr_35 [i_9]) ? var_6 : var_8)) : (arr_35 [i_9])))));
        var_33 = var_16;
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {
                var_34 += (arr_34 [i_10]);
                var_35 *= (5912784292293405335 >= 1689885394391188490);
            }
        }
    }

    for (int i_12 = 4; i_12 < 16;i_12 += 1)
    {
        var_36 ^= (max(var_12, (arr_35 [i_12])));
        arr_43 [i_12] = var_16;
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_37 = -var_3;
                                var_38 = (max(var_38, (((((min(-95, 1689885394391188494))) ? ((((var_5 + 2147483647) << (((((((arr_51 [i_13] [i_13] [i_13] [i_13]) ? -26003 : var_19)) + 26020)) - 17))))) : (arr_20 [i_13] [i_13] [i_13] [i_13]))))));
                                var_39 = (max(61, 91));
                            }
                        }
                    }
                    arr_58 [i_15] [i_13] [i_15] = var_2;
                    var_40 &= var_8;
                }
            }
        }
    }
    #pragma endscop
}
