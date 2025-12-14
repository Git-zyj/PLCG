/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-18 ? 2964710759654834320 : -32));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (28874 ? ((((((var_4 + 2147483647) << (28874 - 28874)))) ? ((8 ? (-127 - 1) : 28874)) : (((var_10 || (arr_0 [i_0])))))) : (max(((17 ? -28874 : -7335)), (var_7 && 65519))));
        var_19 += 1;
        var_20 = (max(var_14, ((~(min(25, -7326))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 = (max(var_21, ((((((var_1 ? var_0 : 28))) ? (((181 >> (-1 + 17)))) : ((32 % (arr_1 [1]))))))));
        var_22 = -1;
        arr_4 [i_1] = ((13 ? (arr_1 [i_1]) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_7 [i_2] = ((((((1 ? 28862 : 7336))) != ((65532 ? 18 : (arr_0 [i_2]))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_23 = (1 ^ -109);
            var_24 = (max(var_24, ((min(((((arr_0 [i_2]) > (arr_3 [i_2])))), (max((!var_3), ((var_9 ? var_12 : (arr_6 [i_2] [i_2]))))))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_13 [i_2] [i_4] = (35 ? ((((arr_2 [i_3]) != 159))) : var_14);
                var_25 += (var_6 != 61414);
                var_26 = (((((arr_0 [i_4]) > -101)) ? ((-(arr_12 [i_2] [i_3] [i_3] [i_4]))) : ((-79 & (arr_10 [i_3] [i_3])))));
            }
            var_27 = var_5;

            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_28 = (min(var_28, ((((arr_2 [i_2]) ? var_10 : (arr_11 [1] [i_2]))))));
                var_29 = ((9 ? 3900143095 : (((arr_3 [i_2]) ? (arr_14 [6] [i_3] [i_5] [i_5]) : 3992961550))));
            }
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                arr_19 [3] [i_3] [i_2] [i_2] = (min((((-15 != (arr_17 [i_6] [6] [i_6 - 2] [12])))), 4));
                var_30 = var_7;
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                var_31 ^= ((-((((min(252, 17))) >> (((max(3992961558, -3499052800905376522)) - 3992961553))))));
                var_32 = (max(var_32, (((-(~19))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_26 [i_2] [6] [i_7 - 3] [i_8] [i_8] [i_7] [i_9] = (((arr_16 [5] [i_7 + 1] [i_3] [i_2]) / ((-(arr_2 [i_2])))));
                            var_33 *= ((((~(~4294967280))) * (arr_6 [i_2] [i_2])));
                            arr_27 [i_7] [i_9] [i_8] [0] [7] [4] [i_7] = ((var_13 == ((((((-(arr_3 [i_8])))) >= ((-121 ? (arr_20 [13] [11] [13]) : -22)))))));
                        }
                    }
                }
                var_34 = ((var_13 || ((max((min(3058410868, 62405)), ((max((arr_1 [i_3]), (arr_22 [i_7] [i_3] [i_7])))))))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_35 = ((~(!var_11)));
                var_36 *= ((var_2 / (arr_5 [i_2])));
                var_37 = (max(var_37, (arr_12 [i_10 + 1] [i_10 - 1] [i_10 + 2] [i_10])));
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        arr_35 [i_11] [i_11] = (arr_34 [i_11]);

        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            arr_39 [i_12] [4] = ((-(arr_37 [i_12] [i_11])));
            var_38 -= ((((~(arr_33 [i_11])))) ? (arr_37 [i_11] [i_11]) : var_16);
            var_39 &= (arr_34 [i_11]);
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_40 = (((arr_38 [i_11] [i_11]) || (arr_34 [16])));

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_41 = ((!(arr_41 [i_14] [i_11])));

                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    var_42 -= ((65521 ? ((~(arr_36 [i_11] [9]))) : ((~(arr_41 [i_11] [i_11])))));
                    arr_49 [1] [1] [i_14] [i_15] = -7335;
                    arr_50 [21] [i_15] [i_15] [18] [i_13] [i_11] = (((arr_47 [i_14]) - (~var_9)));
                    arr_51 [6] [i_14] [i_13] [i_11] = (arr_48 [i_14] [i_15] [i_14] [i_15] [i_13]);
                }
            }
            var_43 = (((arr_43 [i_13]) ? (arr_1 [i_11]) : var_14));
        }
    }
    #pragma endscop
}
