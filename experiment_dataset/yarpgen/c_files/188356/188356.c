/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_2 [7]);
        var_13 &= 49383;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_8 [i_2] = (((32767 & 16137) ? var_7 : ((var_0 ? var_4 : (arr_7 [i_1 - 2])))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_14 = ((~(arr_2 [i_1 + 1])));

                for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_15 = (min(var_15, (1312883142 < 21375)));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_16 = ((((((arr_13 [i_5]) ^ 524287))) ? (arr_3 [6] [i_5]) : (arr_6 [i_4 - 2] [5] [3])));
                        var_17 &= var_5;
                        var_18 = (arr_5 [i_2 - 2]);
                        var_19 = (((var_9 >> (((arr_1 [i_1] [i_2]) - 2318580411721554256)))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_20 = (max(var_20, var_4));
                        var_21 = (min(var_21, (arr_10 [0] [10] [i_4] [i_4 - 1])));
                        var_22 *= 15;
                        var_23 = (arr_17 [i_3] [i_3] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 ^= ((~(arr_14 [3] [3] [i_2 + 2] [i_2] [i_2 - 2] [i_7])));
                        var_25 = (!-95);
                        arr_22 [i_1] [i_1] [i_1 - 1] [i_3] [i_1 + 1] = (arr_11 [7] [7] [7] [i_4]);
                        arr_23 [i_1 + 1] [i_2] [i_3] [i_4] [i_3] = ((32764 | (arr_10 [i_3] [i_2 + 2] [i_2 + 2] [7])));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_27 [i_8] [i_1 + 1] [i_3] [i_4] [9] [9] = (-(((-4 + 2147483647) << (((-8 + 20) - 12)))));
                        var_26 = (((arr_19 [i_1 - 2]) ? (arr_25 [i_1] [8] [6] [i_8] [10]) : (arr_21 [i_8])));
                    }
                    var_27 = (arr_13 [i_3]);
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, ((((((-(arr_2 [i_2])))) / (arr_19 [i_3]))))));
                    var_29 = (max(var_29, (arr_9 [i_1] [4])));
                    var_30 = (((arr_3 [i_2 + 3] [i_3]) ? (((!(arr_13 [i_3])))) : 2047));
                    var_31 = (arr_10 [i_3] [i_3] [i_3] [i_9]);
                }
                var_32 = ((((var_6 ? var_10 : 12865746410778165800)) / ((((arr_11 [i_1] [i_1] [i_1 - 1] [1]) ? 354907731 : (arr_2 [i_3]))))));
                var_33 += arr_14 [i_1] [i_2] [i_3] [i_3] [i_2 + 3] [i_3];
                var_34 = (max(var_34, ((((arr_9 [i_1 - 1] [10]) ? (arr_16 [i_1] [i_1] [2] [i_2 - 3] [i_1 - 1]) : (arr_12 [i_2 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
            }
            arr_30 [i_2] [i_1] = ((!(arr_11 [i_2 - 2] [i_2 - 1] [i_2] [i_2])));
        }
        var_35 = 5580997662931385816;
        arr_31 [i_1] [i_1] = (arr_3 [2] [i_1]);
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_36 = (arr_18 [i_10] [8] [i_10 + 1] [i_10 - 2] [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_37 = (arr_10 [i_10] [i_10] [i_10] [i_12]);

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_45 [i_10] [i_11] [i_12] [i_12] = ((-(arr_12 [i_10 - 1] [i_11] [i_11] [6])));
                        var_38 = (var_10 / var_8);
                        arr_46 [6] [i_10] = ((((((arr_10 [i_10] [i_12] [i_11] [i_10]) >> (-2047 + 2048)))) ? (arr_3 [i_11] [i_12]) : 1108852014));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_39 = (max(var_39, ((((var_9 < (arr_13 [2])))))));

                        for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            var_40 = -42;
                            arr_54 [i_10] = (arr_4 [9]);
                        }
                        for (int i_16 = 1; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            var_41 ^= ((-var_5 ? (~var_2) : var_3));
                            var_42 = ((~(~-1)));
                            arr_59 [i_10] [i_11] [i_12] [i_14] [i_14] [i_16] = (+(((arr_50 [7] [7] [3] [i_14] [i_16]) ^ 11353794605166084727)));
                        }
                        var_43 ^= ((var_6 ? (((-103 ? (arr_47 [i_10] [i_11] [i_12] [i_10]) : (arr_20 [i_10 + 1] [i_11] [i_12] [i_12] [i_14])))) : (((arr_28 [i_11] [10] [i_14]) ? 38 : 5580997662931385808))));
                    }
                }
            }
        }
        arr_60 [i_10] [i_10] = ((!(arr_26 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 - 2])));
        arr_61 [8] |= arr_48 [i_10 - 1] [i_10] [i_10] [i_10] [i_10];
    }
    var_44 *= -91;
    var_45 = (max(0, var_6));
    var_46 = (((((((var_1 ? 16151 : -8051555474798448099))) ? (var_8 * 4294967280) : (~var_11))) < var_10));
    var_47 = (var_0 * var_9);
    #pragma endscop
}
