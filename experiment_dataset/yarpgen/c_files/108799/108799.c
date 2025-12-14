/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_7, var_5));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 *= (arr_0 [1]);
        var_16 = 172;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_17 -= (((227 > -1639223439) ? ((var_4 >> (var_10 - 2138035451))) : (arr_3 [6])));
        arr_6 [i_1] [i_1] = ((var_8 ? ((255 * (arr_3 [i_1]))) : (var_7 * var_5)));

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = var_6;
                        var_19 = 64;
                    }
                }
            }
            var_20 = (((arr_11 [i_2 - 1]) / var_7));
            var_21 ^= (arr_10 [16]);
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_5] [i_6] = ((var_1 ? ((min(((min(1, var_12))), var_2))) : (((var_0 * var_12) * 184))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_22 *= ((((((arr_3 [1]) ? -13 : var_4))) - (max(var_7, (((arr_26 [12] [12]) ? 387739762 : var_7))))));
                var_23 -= ((((arr_1 [i_5]) ? 49152 : (arr_1 [i_5]))));
                var_24 = (((49 ? 0 : -13)) == var_9);
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_32 [i_6] [i_5] [i_6] = ((1 + (arr_5 [i_6])));
                var_25 *= (max(((172 ? var_13 : 1)), (min((arr_13 [i_8] [i_6] [i_5]), ((max(var_8, (arr_2 [0]))))))));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_35 [i_5] [i_5] [i_5] = ((((min(var_3, (var_10 / var_10)))) ? ((((arr_4 [i_5]) ? (((min((arr_20 [i_5] [i_5] [i_5]), (arr_20 [i_5] [i_6] [i_5]))))) : 4082080159))) : (max((~1044480), (-7379076913618018670 ^ 51092)))));
                arr_36 [i_5] [i_6] [i_6] = (((((-9 ? (arr_21 [i_5]) : 164)))) ? (min(((var_7 ? var_6 : -1)), var_0)) : (((((var_8 ? (arr_27 [i_6]) : var_8)) >= var_10))));
                arr_37 [i_9] [i_9] [i_9] [i_9] |= ((!(arr_12 [i_5] [i_9])));
                arr_38 [i_5] [i_6] [i_5] = ((~((((~-668645719063315827) >= (~231))))));
            }
            arr_39 [i_5] [i_5] [i_5] = 937108857;
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_42 [i_5] = (((-31 / -2114145107) ? ((var_12 / (((arr_14 [i_5] [i_5] [i_5] [i_5]) / var_8)))) : (min(-109, (arr_14 [i_5] [i_5] [i_5] [i_5])))));
            var_26 = (arr_15 [i_5] [i_10]);
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_46 [i_5] [i_5] [i_11] = ((~((var_5 ? var_12 : (arr_3 [i_5])))));
            var_27 = (min((min((arr_33 [i_11] [i_11] [i_5]), (((-8 ? 0 : 34525))))), ((min(var_6, (arr_12 [i_11] [i_11]))))));
            var_28 = (((max((arr_28 [i_5]), (arr_28 [i_5])))) ? -29 : ((max((arr_28 [i_5]), 195))));
            arr_47 [i_5] [i_5] = ((((((max(127, -109))) ? -var_6 : ((var_10 ? 0 : 1640957875)))) - (((min(var_1, (arr_18 [i_5])))))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_29 = ((~((((min(var_10, 1021856201))) ? ((var_4 & (arr_14 [i_5] [i_5] [i_5] [i_12]))) : ((var_8 ^ (arr_17 [i_12])))))));
            arr_50 [i_5] = (arr_16 [i_5] [i_12]);
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (+((((max((arr_30 [i_14] [i_14] [i_14] [i_5]), var_4))) ? (arr_17 [i_15 - 2]) : -var_9)));
                        arr_60 [i_5] [i_14] [i_15] = ((((min(var_11, var_3))) ? (~var_13) : ((min(var_12, 0)))));
                    }
                }
            }
        }

        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            arr_64 [i_5] = min(((((arr_9 [i_16 - 1] [i_16 - 1]) ? (arr_9 [i_16] [i_16 + 1]) : (arr_9 [i_5] [i_16 + 1])))), ((-(arr_8 [i_16 + 1] [i_16 - 1]))));
            arr_65 [i_5] [i_16] [i_5] = min(((min(((min(var_8, var_13))), (min(var_13, 15935))))), var_7);
            arr_66 [i_5] [i_16] [i_5] = var_9;
        }
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_30 ^= ((var_8 <= (((var_10 ? 232 : var_10)))));
        arr_69 [i_17] = ((var_5 - (~var_8)));
        arr_70 [i_17] [i_17] = (arr_26 [i_17] [i_17]);
    }

    for (int i_18 = 3; i_18 < 9;i_18 += 1)
    {
        arr_73 [i_18] = 127;
        var_31 = -50;
    }
    for (int i_19 = 1; i_19 < 17;i_19 += 1)
    {
        arr_76 [i_19] = (((~13) ? ((min((arr_53 [i_19 - 1] [i_19 - 1]), var_0))) : (max(((var_0 ? var_5 : var_8)), ((var_1 ? 76 : var_10))))));
        var_32 = (max(((min((max(var_3, var_0)), ((((arr_62 [6] [6]) <= (arr_9 [i_19] [i_19]))))))), ((((((arr_26 [i_19] [2]) / var_3))) ? ((var_3 - (arr_31 [i_19 + 1] [i_19]))) : var_7))));
    }

    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        arr_80 [i_20] [i_20] = ((1640957875 ? ((var_10 / (min(-116, var_10)))) : -194689883));
        var_33 *= ((+(((arr_15 [i_20] [i_20]) - (6648917212161420714 / var_7)))));
    }
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        var_34 += ((((((var_0 + var_5) ? ((var_7 ? var_3 : var_4)) : var_7))) ? (var_10 || var_1) : (~var_9)));
        var_35 = ((((((var_1 == var_7) % -127))) ? var_5 : var_10));
    }
    #pragma endscop
}
