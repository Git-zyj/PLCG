/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (var_13 + var_3);
        arr_3 [6] &= var_9;
    }
    var_15 = (((((~(var_12 - var_4)))) ? ((min(var_8, (((var_13 ? var_0 : var_13)))))) : ((-6 ? 2198949338798733808 : 11766286971483328464))));
    var_16 -= (min(var_6, ((-(2742353072 + -1)))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_17 *= ((var_3 ? var_13 : var_13));
            var_18 = (((((1 ? 1 : 7))) ? (max(var_4, var_11)) : (var_12 / var_12)));
        }
        var_19 = ((~(~2198949338798733795)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                arr_17 [i_4 + 1] [i_4] [i_5] [i_3] = ((((max(2893746835, 6680457102226223168))) ? 18 : 1));
                var_20 = (min(var_20, (((((max(((16491 ? 18636 : 66)), (max(var_2, var_0))))) || (10974812488415280813 - 112))))));

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_21 = (min(var_21, var_2));
                    arr_21 [i_6] = ((((var_8 ? ((var_11 ? var_12 : var_5)) : -var_3)) & ((var_0 ? ((max(var_13, var_10))) : (max(var_13, var_4))))));
                    var_22 ^= (-91 != -4582224001933847864);
                    var_23 = (!(~var_6));

                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        arr_26 [i_4 + 1] [i_5] [i_6] [i_7] = ((3 ? -77 : ((min(78, -24)))));
                        arr_27 [i_3] [i_6] [i_3] [i_6 - 1] = (var_8 ? var_5 : var_1);
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_6] = ((((max(var_7, ((var_12 ? var_12 : var_8))))) ? (min((~var_1), (max(var_1, var_4)))) : (((var_4 ? var_5 : var_6)))));
                        arr_29 [i_7] [i_6] [i_5] [i_6] [i_4 + 3] [i_3] [i_3] = ((((max(24561, (max(1, 0))))) ? (var_12 - 7471931585294270803) : (((-((max(1, 97))))))));
                        arr_30 [i_3] [i_6] [i_5] [i_5] [i_7] = ((-(~57535)));
                    }
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        var_24 = (max(var_24, (((((5456426960778957027 ? 97 : 0)) / var_2)))));
                        var_25 -= var_11;
                        var_26 = (min(var_26, ((((((var_3 ? var_1 : var_10))) ? ((var_6 ? var_10 : var_0)) : ((var_9 ? var_1 : var_11)))))));
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_27 = (max(var_27, (((((max(var_4, (!var_12)))) ? (((max(var_8, var_0)) * (((var_5 ? var_10 : var_9))))) : ((min(((var_12 ? var_9 : var_7)), var_4))))))));
                    var_28 = ((!((min((!var_12), var_6)))));
                }
                arr_37 [i_5 - 2] [i_4] [i_4 + 2] [i_3] = (((((((min(-66, 1))) ? var_1 : (~var_8)))) ? ((max(var_11, var_6))) : ((((var_9 ? var_5 : var_3)) | ((var_12 ? var_0 : var_4))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_29 = (1 | (!1622946278));
                var_30 *= var_8;
                arr_40 [i_4] = (!var_11);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_31 ^= (!var_8);
                            var_32 ^= var_3;
                            arr_45 [i_3] [i_4 + 2] [i_11] = ((var_3 ? var_1 : var_10));
                            var_33 -= (((var_2 + 2147483647) >> (var_5 - 85)));
                        }
                    }
                }
                arr_46 [i_10] [i_4] = -var_0;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                var_34 = (max(var_34, (!var_11)));
                var_35 ^= (~var_4);
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                var_36 = (min(var_36, (((((min(-15184, 1799060520))) ? ((((min(1, -6921283971448131779))) ? (var_1 > var_2) : var_13)) : ((var_10 ? var_6 : ((var_11 ? var_3 : var_1)))))))));
                arr_53 [i_3] [i_4 - 1] [i_14] = ((var_0 ? ((((var_13 ? var_6 : var_12)) >> (var_8 - 3054960066134656774))) : var_6));
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        var_37 = var_11;
                        var_38 = (max(var_38, (((-(var_4 - var_2))))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_63 [i_17] [i_15] [i_15] [i_15] [i_3] = (var_5 < 1);
                            arr_64 [i_3] [i_15] [i_15] = (var_10 - var_11);
                            var_39 -= var_13;
                        }
                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 20;i_18 += 1)
                        {
                            var_40 = ((var_9 ? var_3 : var_6));
                            var_41 = (min(var_41, (((~var_7) ? ((var_2 ? var_2 : var_9)) : var_0))));
                        }
                    }
                }
            }
            var_42 = (min(var_42, var_10));
            var_43 += ((((5456426960778957042 ? 46900 : 7875987267453311667))) ? (8707755669727811002 && 15184) : ((var_12 ? var_12 : var_11)));
        }
        arr_68 [i_3] = (min((1 | 3453386459), -902365884440583817));
    }

    /* vectorizable */
    for (int i_19 = 1; i_19 < 7;i_19 += 1)
    {
        var_44 = (~var_8);
        arr_71 [i_19] [i_19 + 2] = (((88 / -902365884440583833) & var_11));
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {
                    var_45 -= (((((var_13 ? var_6 : var_13))) ? var_12 : ((var_3 ? var_3 : var_13))));
                    var_46 = (((var_3 * var_3) ? var_5 : (max(-1204492417, 240))));
                }
            }
        }
        var_47 = (max(var_47, (((var_11 <= var_8) << (var_8 < var_3)))));
        arr_79 [i_20] &= var_11;
    }
    for (int i_23 = 4; i_23 < 9;i_23 += 1)
    {

        /* vectorizable */
        for (int i_24 = 3; i_24 < 6;i_24 += 1)
        {
            arr_85 [i_24] [i_23] [i_23] = ((var_11 ? var_2 : var_10));
            arr_86 [i_23] [i_24] [i_24] = ((var_8 ? var_5 : var_4));
            var_48 *= (((var_5 - var_6) ? (var_13 * var_6) : var_4));
            /* LoopNest 3 */
            for (int i_25 = 1; i_25 < 8;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 10;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        {
                            var_49 -= (var_0 > var_4);
                            arr_95 [i_25] [i_24] = ((((var_9 ? var_0 : var_6))) ? ((-78 ? 404304314 : 15233807878789481097)) : var_6);
                            var_50 = ((var_10 ? var_5 : var_13));
                            var_51 = (max(var_51, (((var_1 - var_3) ? var_9 : var_2))));
                        }
                    }
                }
            }
        }
        var_52 = (min(((var_8 << (((var_11 + 150) - 23)))), var_4));
    }
    #pragma endscop
}
