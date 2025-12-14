/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        var_13 = (arr_0 [i_0]);
        arr_4 [i_0] = (max(var_9, 3818799935));
        arr_5 [i_0] = ((var_0 ? (((((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max(0, 1)) : (((var_3 * (arr_0 [i_0])))))) : var_10));
        arr_6 [i_0] = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (((arr_8 [i_1]) >> (((arr_9 [i_1]) - 17297316596041678022))));
        arr_10 [i_1] = ((var_12 ? var_10 : var_11));
        arr_11 [i_1] = ((((var_0 ? 445709724141265371 : var_3)) | ((((1 >= (arr_7 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_16 [i_2] = (((arr_15 [i_2]) != (((arr_14 [i_2]) ? (arr_13 [i_2]) : var_9))));
        var_15 = var_6;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_16 = ((-(arr_20 [i_2] [i_4] [i_4])));
                var_17 = (((arr_15 [i_3]) ? var_7 : (((arr_21 [i_4] [i_4] [i_4]) >> (((arr_13 [i_2]) - 16352))))));
                var_18 = ((((((var_5 + 2147483647) >> var_4))) ? 1 : 4294967295));
                var_19 ^= (arr_9 [i_4]);

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_20 = ((((((arr_13 [i_3]) >= 1))) - var_11));
                    var_21 &= var_1;
                }
            }
            var_22 = (((((var_9 ? var_5 : -46549987094793148))) ? (((arr_12 [i_2]) / (arr_7 [i_2]))) : 32111));
            arr_25 [i_2] [i_2] = var_9;
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    arr_34 [i_2] [i_2] [i_2] [i_2] [i_7] [i_8] &= var_3;
                    arr_35 [i_2] [i_2] [i_6] [i_2] = ((~(arr_8 [i_2])));
                    var_23 = (((arr_22 [i_2] [i_2] [i_6 - 1] [i_7] [i_8 - 1]) ? var_4 : (arr_0 [i_6])));
                }
                arr_36 [i_2] [i_6 - 3] [i_6] = (var_12 && var_11);
                arr_37 [i_2] [i_6] [i_2] = var_2;
                var_24 = (((arr_33 [i_6] [i_6 - 3] [i_6 - 3]) | 48));
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_40 [i_6] [i_6] [i_9] = -2931697162;

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_43 [i_6] [i_6 - 3] [i_6] [i_6] [i_6 - 1] = arr_7 [i_2];
                    var_25 |= ((~(arr_7 [i_10])));
                    arr_44 [i_6] [i_9] [i_6] [i_6] = var_3;
                }
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    arr_47 [i_2] [i_6] [i_6] [i_6] = ((((((-32767 - 1) - var_11))) ? 2931697162 : ((var_2 ? var_8 : var_12))));
                    arr_48 [i_2] [i_6] [i_2] [i_2] [i_2] = 445709724141265362;

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        arr_52 [i_2] [i_6] [i_9] [i_11] [i_12] [i_6] = var_12;
                        var_26 |= (((~var_8) ? ((~(arr_30 [i_12] [i_12] [i_9] [i_9]))) : (arr_14 [i_11])));
                        var_27 *= (((arr_2 [i_12]) ? (((arr_0 [i_2]) ? (arr_2 [i_11]) : (arr_1 [i_12]))) : var_12));
                        arr_53 [i_2] [i_6] [i_6] [i_11] [i_2] = var_3;
                    }
                    var_28 += (arr_33 [i_11] [i_6] [i_11 + 2]);
                    arr_54 [i_6] [i_6] [i_11 + 2] = (arr_30 [i_6] [i_9] [i_9] [i_9]);
                }
                var_29 = var_5;
            }
            var_30 = (((((1466727914 ? 0 : 1))) >= ((9591245858195919389 - (arr_51 [i_2] [i_6] [i_6] [i_2] [i_6] [i_2])))));
            arr_55 [i_6] = arr_0 [i_6];
        }
        var_31 = (((arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_50 [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_32 = 480;
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 14;i_15 += 1)
            {
                {
                    arr_63 [i_14] = (32136 && 3227305052640827156);
                    var_33 = var_7;
                }
            }
        }
        arr_64 [i_13] [i_13] = var_4;
        arr_65 [i_13] = 4317;

        for (int i_16 = 4; i_16 < 16;i_16 += 1)
        {
            arr_69 [i_13] [i_13] [i_16] = ((((((1 ? var_9 : 21)))) ? ((-(arr_58 [i_16 - 4] [i_16] [i_16 - 4]))) : ((((((var_7 ? 24741 : (arr_61 [i_13]))) == var_4))))));
            var_34 = var_1;
            arr_70 [i_13] [i_16] [i_16] = ((var_12 ? ((((((1 ? 1 : (arr_68 [i_13] [i_13] [i_16 - 4])))) ? ((min(var_12, var_6))) : -20136))) : (max((((var_9 ? var_2 : (arr_68 [i_13] [i_16] [i_16])))), ((292873441 ? var_1 : var_8))))));
            var_35 = (var_10 | 4324);
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_36 *= (3965948251 > -7452);
            var_37 ^= 26563;
            arr_73 [i_17] = 18001034349568286255;
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            arr_76 [i_13] [i_18] = ((+((((var_4 ? (arr_60 [i_13] [i_18]) : (arr_66 [i_13] [i_13] [i_18])))))));
            var_38 += var_7;
        }
        arr_77 [i_13] = ((~((var_11 ? (var_2 & 3411934424512040183) : var_2))));
    }
    var_39 = var_8;
    var_40 = var_10;
    #pragma endscop
}
