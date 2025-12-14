/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? (((0 ? 1 : -204168394337426175))) : (var_3 * 0)));
    var_17 = 4294967295;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = ((var_2 ? 238 : (min(var_2, (arr_2 [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, 1));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_4] = (arr_5 [i_3] [i_1] [i_2] [i_3]);
                                var_20 = ((((-5 ? -204168394337426156 : (arr_9 [i_2] [i_2] [i_4 + 1] [i_4] [i_2] [i_4]))) == (((((-5 ? (arr_2 [i_2] [i_2]) : var_6))) ? ((var_11 ? 533954527 : 9223372036854775807)) : (~var_6)))));
                            }
                        }
                    }
                    var_21 &= ((1 ? ((1 / ((16 + (arr_1 [i_0]))))) : ((min(1, (arr_2 [i_2] [i_1]))))));
                }
            }
        }
        var_22 = 18444143974186186554;
        var_23 -= ((((!(((var_6 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_5))))) ? ((var_2 ? 3145081832993036662 : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((1 ? var_11 : (min((arr_1 [i_0]), 1)))))));
        var_24 = (min(var_24, (((!(((((var_8 ? var_8 : var_1))) || ((max(18, 0))))))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((((max((arr_4 [i_5] [i_5] [i_5] [i_5]), 127))) ? (((((((arr_12 [i_5]) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (arr_1 [i_5])))) ? (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]) : (var_15 | var_11)))) : (((var_7 | 70368744177663) ? ((var_13 ? var_10 : var_14)) : var_2)))))));
        var_26 = ((((!(arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((!240) ? (((var_9 ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : 1))) : var_14)) : ((min(var_12, (arr_9 [i_5] [9] [i_5] [i_5] [i_5] [i_5]))))));
        var_27 = 1;
        arr_13 [i_5] = ((139 ? (((~(arr_2 [i_5] [i_5])))) : (((arr_6 [i_5] [i_5] [i_5] [i_5]) ? (arr_0 [i_5] [i_5]) : (arr_6 [i_5] [i_5] [i_5] [i_5])))));
        arr_14 [i_5] = ((-((((max(var_1, 268435455))) ? ((var_10 ? var_5 : 204168394337426185)) : 489294901))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_17 [i_6] [i_6] &= ((((((((var_2 ? 121 : 1))) ? (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : ((((arr_4 [i_6] [i_6] [i_6] [i_6]) ? var_8 : 7)))))) || ((((var_12 ^ var_3) & (((arr_4 [i_6] [i_6] [i_6] [i_6]) ? var_6 : -204168394337426183)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((((1583312539 ^ (var_5 & 1)))))));
                                arr_28 [i_9] [i_9] = (((((!(arr_21 [i_6])))) - ((-((var_12 ? 248 : 1))))));
                                var_29 = (i_9 % 2 == zero) ? (((((min((arr_20 [i_10 - 2] [i_10 - 2] [i_10]), (arr_24 [i_9] [i_9] [i_9] [i_6])))) && (((((var_15 >> (((arr_24 [i_6] [i_7] [i_9] [i_9]) - 11463278557118317217)))) | 1)))))) : (((((min((arr_20 [i_10 - 2] [i_10 - 2] [i_10]), (arr_24 [i_9] [i_9] [i_9] [i_6])))) && (((((var_15 >> (((((arr_24 [i_6] [i_7] [i_9] [i_9]) - 11463278557118317217)) - 1562314685613641960)))) | 1))))));
                                var_30 = ((((((arr_20 [i_7] [i_9] [i_10 - 1]) || 489294901))) >> ((((arr_20 [i_7] [i_7] [i_10 - 4]) && var_4)))));
                                var_31 = (max(var_31, var_11));
                            }
                        }
                    }
                    var_32 = (min(var_32, 1));
                }
            }
        }
    }
    var_33 = var_13;
    #pragma endscop
}
