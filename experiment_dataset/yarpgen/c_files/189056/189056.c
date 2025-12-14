/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((arr_4 [i_0]) & (((arr_0 [i_1]) + (635652102 + 3659315165)))));
                arr_5 [i_1] = 3659315172;
                var_19 = (((max(1, (max((arr_2 [i_1]), 3659315187)))) < (max(((var_9 ? (arr_4 [i_0]) : 635652108)), ((((arr_2 [i_1]) | var_16)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_20 = ((var_14 ? (arr_4 [i_2 + 2]) : (arr_2 [i_2 - 1])));
        arr_8 [i_2 + 2] [i_2] = var_2;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_21 = (max(var_21, ((max((arr_4 [i_4]), 9223372036854775807)))));
            arr_13 [i_3] [i_3] = (!-5388286224207839456);
            var_22 = ((((((((arr_1 [i_3]) ? var_7 : (arr_9 [i_3])))) & 38644)) ^ var_2));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_19 [i_3] [i_5] = var_0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 *= var_9;
                            arr_25 [i_8] = (((((26921 ? (arr_12 [i_3] [i_5] [i_6]) : (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])))) ? ((((635652108 || (arr_21 [i_3]))))) : 3659315195));
                        }
                    }
                }
                arr_26 [i_6] [i_3] [i_3] |= (var_16 & 2271587283);
            }

            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                arr_30 [i_3] [i_3] [i_3] [i_3] = ((var_2 ^ (((arr_23 [i_3] [i_3] [i_9] [i_3] [i_3]) ^ var_4))));
                var_24 = (635652108 > -5360391803008566756);
                arr_31 [i_3] [i_3] = ((127 << (((var_8 + 115) - 2))));
                arr_32 [i_5] = 635652122;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_3] [i_5] [i_10] [i_10] [i_12] [i_3] = var_4;
                        var_25 = (min(var_25, var_16));
                        arr_42 [i_3] [i_3] [i_3] [i_5] [i_12] [i_10] = ((-(arr_22 [i_5 - 1] [i_10] [i_5 - 1] [i_3])));
                    }
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        var_26 = (arr_7 [i_10]);
                        arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] |= (((arr_33 [i_5 - 1]) ^ 2271587312));
                    }
                    arr_47 [i_10] [i_10] [i_10] [i_10] = (var_12 & 3659315204);
                    arr_48 [i_3] [i_5] [i_10] [i_11] = (var_15 <= -127);
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_27 ^= var_1;
                    arr_51 [i_3] [i_3] [i_10] [i_14] [i_10] [i_5] = var_2;
                    var_28 = (7289097007845275867 & 3659315180);
                    var_29 &= (2023380012 == 2271587295);
                }
                var_30 = ((var_3 ? var_16 : (arr_29 [i_5 - 1] [i_5 - 1] [i_10])));
            }
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                arr_55 [i_3] = (-120 / 1007426237);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_31 |= var_9;
                            arr_61 [i_3] [i_17] [i_15 - 1] [i_17] [i_3] = (((var_16 ? (arr_9 [i_3]) : 16)));
                            var_32 = ((var_6 / ((var_0 / (arr_56 [i_3] [i_16] [i_3] [i_5 - 1] [i_3])))));
                            var_33 *= (((arr_53 [i_15 + 3] [i_15 + 3] [i_5 - 1]) ? (arr_53 [i_15 - 1] [i_15 + 1] [i_5 - 1]) : (arr_53 [i_15 + 3] [i_15 + 3] [i_5 - 1])));
                            var_34 = 127;
                        }
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 9;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_71 [i_19] = (var_14 + var_5);
                        arr_72 [i_3] [i_18] [i_19] [i_19] [i_19] [i_3] = ((arr_43 [i_18] [i_18 - 2] [i_18 - 1] [i_18] [i_18 - 2] [i_18 - 2] [i_18 - 2]) <= (arr_35 [i_18 - 1] [i_18 - 2] [i_18 + 3] [i_18 + 2]));
                        arr_73 [i_3] [i_20] [i_19] [i_3] = var_1;
                    }
                }
            }
            arr_74 [i_3] = (-((min(122, (-127 - 1)))));
            arr_75 [i_3] = 9262737605219577268;
        }
        var_35 &= ((((arr_68 [i_3] [i_3] [i_3] [i_3] [i_3]) | 16)));
    }
    #pragma endscop
}
