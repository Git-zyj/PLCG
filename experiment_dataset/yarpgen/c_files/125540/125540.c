/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = 22;
                    arr_6 [i_0] [i_1] = var_0;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_10 [i_3] = var_6;
        var_11 = var_6;
        var_12 = ((-(((((arr_8 [i_3]) >> (var_7 + 274830454))) - ((((arr_8 [i_3]) > var_6)))))));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        arr_15 [i_4 + 1] = -8556186350598083525;
        arr_16 [i_4] [i_4] |= ((((((((arr_11 [i_4 - 3] [i_4]) ? var_0 : var_2))) ? -7081992478183726025 : var_6)) + (arr_1 [i_4 - 3] [i_4 - 3])));

        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_13 = (max(var_13, 48043));
            arr_20 [i_5] = (var_4 < var_7);
            arr_21 [i_4 + 2] [i_5] = -8556186350598083506;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_14 = ((-(arr_25 [i_5] [i_6 + 3] [i_5] [i_5] [i_5])));
                        var_15 = ((var_5 * ((var_2 ? (0 | var_5) : (arr_19 [i_5] [i_5] [i_4 - 2])))));
                        arr_28 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] |= ((((var_4 + 2147483647) << (var_6 - 6))) != 10);
                        arr_29 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] = ((((((var_4 ? -22 : (~var_8))) + 9223372036854775807)) << ((((((var_4 ? (~3075) : var_3)) + 3110)) - 34))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_39 [i_5] [i_5] [i_5] [i_9] [i_9] = (((!-5352980986892289412) ? (-70 == 6) : (arr_30 [i_5] [i_5] [i_5])));
                            var_16 ^= var_5;
                            var_17 = (var_1 >> (((-9223372036854775807 - 1) & var_6)));
                        }
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
        {
            var_18 = (max(var_18, var_3));
            arr_44 [i_11] [i_11] = -5352980986892289411;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    {

                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            arr_57 [i_4 + 3] [i_11] [i_12] [i_4 + 3] = var_4;
                            arr_58 [i_4] [i_11 - 1] [i_11 - 1] [i_12] [i_11] [i_11 - 1] = var_7;
                            var_19 ^= 248;
                        }
                        arr_59 [i_4] [i_11] [i_4] [i_4] [i_4] = 3591620881;
                    }
                }
            }
            arr_60 [0] |= (~((var_4 ? var_0 : (764090458059311884 ^ 47261))));
            arr_61 [i_11] = ((((var_3 ? -2057652921 : 3591620881)) != ((((!(((0 & (arr_51 [i_4] [9] [i_4] [i_4] [9]))))))))));
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {
                        var_20 = (min(var_20, (((-(((((var_7 ? var_5 : var_4))) ? var_9 : 1)))))));

                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            var_21 |= (1 << (((~-113) & ((252 ? 8 : var_4)))));
                            var_22 = (min(var_22, (((arr_67 [i_4 + 3]) ? 8 : -134217728))));
                            var_23 += ((((((arr_48 [i_16] [i_16 + 1] [i_4 + 3] [i_4 + 3]) + -134217728))) || var_5));
                        }
                        var_24 = (min(var_24, var_9));
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_25 = var_2;
            arr_74 [i_19] = (var_0 - var_8);
        }
    }
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        arr_78 [i_20] = var_5;
        var_26 = (min(var_26, (((~var_0) ? var_7 : (arr_77 [i_20] [i_20])))));
        var_27 -= -594006061;
    }
    for (int i_21 = 3; i_21 < 8;i_21 += 1)
    {
        arr_81 [i_21] = (((65535 | var_4) ? 1 : var_8));
        var_28 = 1211525713;
    }
    var_29 = (max(var_29, var_7));
    var_30 = -3318766525260828667;
    #pragma endscop
}
