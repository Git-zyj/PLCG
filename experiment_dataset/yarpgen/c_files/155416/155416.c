/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 ^= (max((21 ^ var_1), ((-2147483625 ? 0 : (arr_2 [i_0] [i_0])))));
        var_16 -= ((~((max((arr_0 [i_0]), 118)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_1 [i_1] [i_0]);
            var_17 ^= (((arr_1 [i_0] [i_1]) & (arr_1 [i_1] [i_1])));
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_18 -= ((1925558988 ? 1 : (1 == -2147483617)));
        arr_10 [i_2] = (((127 | (arr_8 [i_2]))) % ((var_4 ? (((arr_8 [i_2]) | (arr_8 [8]))) : (~var_0))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_19 *= (((arr_7 [i_3]) / 1925558988));
        var_20 = (min(var_20, var_14));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_4] = (((((arr_0 [i_3]) ? 165 : (arr_12 [i_4]))) & (arr_0 [1])));
            var_21 &= (arr_16 [i_3] [i_3] [8]);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_22 ^= (-1385713468 ? 16383 : 1);
                var_23 *= ((arr_8 [i_5]) ? (arr_8 [i_3]) : ((1 ? 0 : 0)));
                var_24 = (((~var_2) ? (arr_4 [i_3] [i_4] [i_5]) : (-127 - 1)));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_25 -= (~var_1);
                arr_23 [i_3] [i_4] [i_3] [i_6] |= ((~(arr_22 [i_3] [16] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_26 *= var_0;
                            var_27 = (min(var_27, ((((((47 ? 390491234 : 3549837253))) ? ((var_13 / (arr_20 [i_8] [i_4]))) : var_11)))));
                        }
                    }
                }
                arr_31 [i_4] [i_4] [i_4] = var_10;
                var_28 = var_11;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_36 [i_4] [i_9] = (arr_12 [i_3]);
                arr_37 [i_4] = (((var_9 ? var_7 : (arr_29 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                arr_38 [i_9] [i_9] [i_9] &= (((((-116 ? 1959132798 : 745130042))) ? -9178 : 0));
                var_29 = (((1 & var_4) * -87));
            }
            var_30 = 6;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            arr_41 [i_10] = ((+((var_5 ? (arr_24 [i_3] [i_3] [i_3] [i_10]) : (arr_13 [i_3] [i_10] [i_10])))));
            var_31 = ((~var_10) ? (arr_30 [i_3] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : 3549837236);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_46 [i_11] [i_3] [i_11] = ((((127 ? -510053157 : -1925558982))) ? (((!(arr_20 [i_3] [i_11])))) : var_14);
            arr_47 [i_3] [i_11] = (((arr_4 [1] [i_3] [i_3]) && (((var_11 ? (-2147483647 - 1) : var_4)))));
            var_32 = (~var_12);
            arr_48 [i_3] [i_11] [i_3] = 121;
        }
        arr_49 [i_3] [i_3] = var_1;
    }

    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_33 -= ((((((3549837236 ? var_2 : (arr_50 [i_12])))) ? -var_12 : (arr_52 [i_12] [i_12] [i_13]))));
            arr_54 [i_13] [i_13] [i_12] &= ((((max((arr_51 [i_13]), var_7))) ? var_9 : (((arr_51 [i_13]) ? (arr_51 [i_13]) : (arr_51 [i_13])))));
        }
        arr_55 [i_12] = (-((max((236 && -1695559758), ((var_0 && (arr_51 [i_12])))))));
        var_34 = (max(((max(0, (arr_50 [i_12])))), 745130059));
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_35 = (min(var_35, ((((1 & 2151696092) ? (max(var_6, var_7)) : ((((var_11 && (arr_51 [i_14]))))))))));
        arr_58 [i_14] [i_14] = ((!1416882246) && var_14);
        var_36 *= ((~(((((arr_56 [i_14]) > (arr_57 [i_14]))) ? ((((var_11 && (arr_51 [i_14]))))) : -127))));
        var_37 = (~-2147483625);
    }
    #pragma endscop
}
