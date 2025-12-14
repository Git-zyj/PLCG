/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_16 -= (((arr_0 [i_0]) <= (arr_1 [i_0])));
        var_17 &= (((arr_1 [i_0]) & (arr_2 [i_0])));
        var_18 = var_9;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                arr_14 [i_2] [i_2] [i_1] = (31528 <= 31533);
                var_19 = (max(var_19, (((min(var_0, (min((arr_6 [i_1]), var_11))))))));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_20 = (min((((arr_16 [i_4] [i_2] [i_1]) < 31531)), ((-var_1 > (((max(29, (arr_10 [i_1] [i_2] [i_4] [i_4])))))))));
                var_21 = (((((min(var_2, 31528))) != (!202))));
                var_22 = (31528 ^ 18239);
            }
            var_23 = ((((((~65535) + 2147483647)) << (254 - 254))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_24 = (max(((-633789754 + (((arr_0 [i_5]) - (arr_7 [i_1]))))), -31546));
            var_25 -= ((~(((arr_12 [i_1] [i_1]) - ((-633789736 ? 1 : (arr_18 [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_6] = var_3;
            var_26 -= (min((((((((arr_22 [i_1] [i_6]) >= 31546))) == (~var_12)))), (((((arr_17 [i_1] [i_1]) ? var_13 : (arr_2 [i_1]))) << (((arr_15 [1] [i_1] [i_6] [i_6]) - 18164))))));
            arr_24 [i_1] [i_6] [1] = ((arr_1 [i_1]) && (arr_12 [i_1] [0]));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_27 = (((arr_19 [i_8] [i_7]) && (arr_27 [i_1] [i_1] [i_8] [i_8])));
                arr_29 [i_1] [i_7] [i_8] = (((arr_26 [i_1] [i_7]) && (~-31528)));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_28 = ((((arr_2 [i_8]) - 45963)));
                    var_29 = ((((-633789736 + 2147483647) >> 0)));

                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        arr_34 [i_1] [i_7] [8] [i_9] [i_10 + 2] [1] = 65535;
                        var_30 = (((var_0 && (arr_16 [i_1] [i_9] [i_10]))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_31 = (max(var_31, (arr_15 [i_1] [i_7] [i_7] [i_11])));
                        arr_39 [i_11] = -1;
                        var_32 = -1970506604404303681;
                    }
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        arr_43 [i_12] [i_1] [i_12] [i_9] [i_1] [i_12] [i_1] = ((((0 ? (arr_28 [i_1] [i_7] [i_8]) : (arr_20 [i_1] [i_1] [10]))) <= -633789736));
                        arr_44 [i_1] [i_1] [i_12] [i_1] = (((arr_8 [9] [i_8]) * 31544));
                        arr_45 [i_1] [0] [i_8] [i_9] [i_12 + 4] [i_12] = 59299;
                    }
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    var_33 = (arr_33 [i_1] [i_7] [i_8] [i_13] [i_7]);

                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_34 = (arr_8 [i_1] [i_7]);
                        arr_52 [i_1] = (((arr_0 [i_1]) << 11));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        arr_55 [i_13] [i_8] [i_7] [2] = (((arr_5 [i_1] [i_13]) * (arr_5 [i_7] [i_13])));
                        var_35 = (arr_31 [i_7]);
                        var_36 = (min(var_36, ((((arr_16 [5] [i_7] [i_8]) ? 13635 : (arr_46 [i_1] [i_1]))))));
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_37 = ((233 ^ (-127 - 1)));
                        arr_60 [i_1] [i_1] [i_1] [i_8] [i_8] [i_13] [i_16] = ((!(arr_47 [i_1] [i_7] [i_7] [i_13])));
                    }
                    var_38 = -43;
                }
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                arr_64 [3] = (((arr_58 [i_1] [i_7] [i_17] [i_7] [i_17] [i_1] [i_7]) * (arr_62 [i_1] [i_7] [i_17] [i_17])));
                var_39 = (max(var_39, (((-592491314 & (arr_22 [i_1] [i_7]))))));
            }
            var_40 = (max(var_40, (((10513 ? -268435456 : -1623893527)))));
        }

        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
        {
            arr_69 [i_1] [i_1] = ((((((((arr_20 [7] [7] [i_18]) / 2143289344)) * var_12))) ? (arr_22 [i_18] [i_1]) : ((((arr_62 [i_1] [i_1] [i_18] [i_18]) == (arr_38 [i_1] [i_1] [i_1] [i_18] [i_18] [i_1] [i_1]))))));
            arr_70 [i_1] [i_18] = ((((min(1, (max((arr_68 [i_18] [0] [i_18]), (arr_10 [i_1] [3] [i_1] [i_18])))))) & ((((65535 > (arr_9 [i_1] [i_1] [i_1]))) ? 173 : ((var_8 - (arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        }
        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
        {
            arr_73 [i_19] = ((765198826 ? ((min((arr_12 [i_1] [i_19]), (min(var_13, var_11))))) : (min((!65535), (-10069 % 219592001)))));
            var_41 = ((~(max((1 * 6113149153127493131), ((max((arr_0 [i_19]), -12660)))))));
            arr_74 [i_1] [i_1] [7] = (min((arr_15 [i_1] [i_1] [i_1] [i_1]), (((max(var_10, var_13))))));
            var_42 = (max(((-((max(20306, 22626))))), var_8));
        }
    }
    var_43 = (max(2724248682, 1623893520));
    var_44 = (((max(((4503599627370495 ? -1 : var_10)), (var_9 == var_0))) >> (((((var_13 ^ var_7) % 1119230089)) - 118))));
    #pragma endscop
}
