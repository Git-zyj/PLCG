/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = 374135753;
                    var_11 = (max((((-47 ? 47 : 51))), (((var_3 ? var_6 : var_0)))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {
                        var_12 = 9617;
                        arr_18 [i_3 + 2] [i_5] [i_5] [1] = 51;
                        var_13 = ((63 ? ((47 << (((~-291664975) - 291664970)))) : (291664974 != 1)));
                        arr_19 [i_4] = (((((min(16, 79)))) < ((16 >> ((((var_0 << (var_4 + 109))) - 3620723890))))));
                        var_14 = (((~51) | ((min(var_8, -28727)))));
                    }
                }
            }
        }
        var_15 = (((min((~-48), 16663)) ^ 51));
        arr_20 [i_3 + 1] = ((((((1 && 1) ? var_5 : (min(var_5, 9223372036854775807))))) ? 1552728657 : (((var_3 != 896) ? (~973452547) : ((min(var_8, -71)))))));
        var_16 = ((-((0 ? var_1 : (arr_5 [i_3 + 2] [i_3])))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_17 &= var_8;
            var_18 = var_3;

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_19 = ((-((var_2 ? var_3 : var_9))));
                var_20 |= ((-(((arr_4 [i_7] [i_3 - 1] [3]) ? var_1 : (arr_4 [15] [i_3 + 1] [i_3])))));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_21 = ((min(58, (min(51, var_7)))));
                var_22 = (min(var_22, ((min(((1999470513 ? 1 : 52)), 1)))));
                arr_30 [i_3] [i_7] [i_9] = (((((var_4 ? 4294966400 : -1253014903))) ? ((((15 + 65535) ? (((1 ? var_1 : var_1))) : ((var_3 ? 1133187769 : 4249095944))))) : -1827533138661869615));
                var_23 |= (((~896) ? (arr_16 [i_3 - 1] [8] [8] [i_3] [i_3] [i_3]) : (74 | var_3)));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_24 = var_4;
                var_25 = var_4;
                var_26 = (min(var_26, (((var_6 ? (arr_29 [i_7] [i_3 - 1] [i_3 + 1] [i_3 + 2]) : 1)))));
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                var_27 = (min(((min(112, 0))), (((var_1 ? var_3 : var_1)))));
                arr_36 [i_3] [i_3 + 2] [1] = var_0;
                var_28 += ((max(((min(var_2, 241))), (~-1253014910))) >> ((((((min(1, 13511))) | (((-1253014903 + 2147483647) << (1253014903 - 1253014903))))) - 894468725)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_29 += ((((min(-1, var_4)))));
                            arr_42 [i_13] = var_6;
                            var_30 = ((((min((arr_5 [i_3 + 2] [i_11 - 1]), var_8))) ? ((20255 ? 838371932 : var_3)) : (min((arr_5 [i_3 - 1] [i_11 - 1]), 3438144380))));
                            var_31 = (max(var_31, (((8387584 << (((((max((arr_11 [15] [i_13] [i_13]), var_7)) & (var_1 ^ var_6))) - 1562442993049030734)))))));
                        }
                    }
                }
                var_32 *= (min((min(var_2, ((var_7 ? var_3 : (arr_5 [i_11] [i_3]))))), (max(((var_4 ? var_3 : -32476)), (var_8 / var_4)))));
            }
            arr_43 [i_3] [i_7] [i_3] = 232;
            var_33 -= (((8 + var_8) ? ((min(-5, var_2))) : (((((min(1253014903, var_4))) ? var_4 : ((min(var_2, var_8))))))));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
        {
            var_34 |= ((((((arr_26 [i_3] [i_3 + 1] [i_3] [i_14]) ? ((((arr_13 [12] [i_14] [13]) ? 67108352 : 1899479767))) : (min(55904, var_5))))) ? (min(1253014903, (max(var_0, 14907)))) : ((((1814067680 ? var_4 : 1))))));
            var_35 = var_4;
        }
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        var_36 = (max(-var_5, (min(((var_6 ? -30873 : var_5)), (~4)))));
        var_37 += (~var_5);
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                {
                    var_38 = 0;
                    arr_60 [i_16] [i_17] [0] = var_4;

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_63 [i_16] [10] [1] [8] [i_18] [i_19] = (((((min((arr_59 [i_16]), 1)))) != (arr_59 [i_18])));
                        var_39 -= (min(2855315142, 25557));
                        arr_64 [i_18] [17] |= -88;
                        var_40 = ((var_2 ? var_8 : (((max(var_4, var_4))))));
                        var_41 = (min(var_41, (((0 ? var_1 : 220)))));
                    }
                    var_42 = (-1253014920 - (var_0 < var_4));
                }
            }
        }
    }
    var_43 = (min((min((min(0, -7780960892349608696)), (1391803750 && var_6))), ((min(1253014902, var_1)))));
    #pragma endscop
}
