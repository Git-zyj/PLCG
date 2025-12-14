/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((~var_7), ((var_9 ? var_7 : var_6))))) ? var_4 : (~var_15));
    var_20 = (max(var_7, ((var_10 ? 34 : var_9))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = ((!((max(255, (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((((max(1, 8))) ? ((((((max(var_10, var_11)))) == ((var_16 / (arr_1 [i_0])))))) : var_7));
        var_22 = ((((((var_6 ? 1 : (arr_2 [i_0] [i_0])))))) < ((1 ? 2596486192 : 1)));
        var_23 = (min(var_23, (((max(var_18, (arr_1 [i_0])))))));
        var_24 = (((arr_2 [i_0] [i_0]) & (((~var_14) * 2596486194))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_25 = ((2596486215 ? 10 : -6));
        var_26 = (min(var_26, (arr_4 [i_1] [i_1])));
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            var_27 = (max((arr_12 [i_2] [i_3] [i_3 - 4]), var_11));
            var_28 = (1 || 7);
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_29 = (min(var_29, (((var_11 % (var_3 - var_8))))));
                        var_30 = var_8;
                        var_31 = arr_8 [i_2];
                        var_32 = ((!(((((12 ? 8388607 : var_4)) >> (var_1 - 3801831391))))));
                        var_33 = ((((var_14 - (arr_13 [i_2] [i_2] [i_2] [i_2]))) & (((((var_11 << (65535 - 65527)))) ? (max(var_5, var_6)) : var_11))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_34 = (((arr_20 [i_2] [i_2] [i_2]) | -13));
            var_35 = ((var_15 ? ((var_13 ? var_2 : (arr_17 [i_2] [i_6] [i_6] [i_6]))) : (arr_13 [i_2] [i_2] [i_2] [i_2])));
            var_36 += var_5;
            arr_22 [i_2] = var_18;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_37 = (-4 != -11);
            var_38 = 286916499;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_39 = var_4;
                            arr_35 [i_8] [i_10] = (!2596486210);
                            arr_36 [i_7] &= (var_12 >= (arr_28 [i_10] [i_8 + 1] [i_10] [i_9]));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_39 [i_11] = max((~3943063990), (arr_14 [i_2] [i_11] [i_2]));
            var_40 = (max(var_40, ((((~var_15) ? var_18 : (((((-(arr_8 [i_11])))) ? ((var_1 ? var_11 : var_4)) : 469762048)))))));
            var_41 = (min(((-(max(var_16, var_4)))), var_14));
            var_42 = (arr_13 [i_2] [i_2] [i_2] [i_11]);
        }
        var_43 = (max((~2596486177), ((max(15791, var_6)))));
        arr_40 [i_2] = ((var_3 ? 1 : (((var_3 + 6144) ? ((((arr_19 [i_2] [i_2]) == (arr_10 [i_2])))) : ((max(49745, 248)))))));
    }
    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        var_44 ^= (((((((~(arr_42 [i_12]))) ^ 42))) ? (min(((var_17 * (arr_24 [i_12]))), ((max((arr_20 [i_12] [i_12] [i_12]), var_10))))) : ((((var_3 && ((max((arr_25 [i_12]), 14)))))))));
        var_45 &= (min((((var_4 ? var_14 : 1))), var_14));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_46 [i_13] &= (((((((8536 ? var_6 : var_1)) - (arr_23 [i_13] [i_13] [i_13])))) ? ((max((arr_15 [i_13] [i_13] [i_13] [i_13]), (arr_17 [i_13] [i_13] [i_13] [i_13])))) : var_10));
        var_46 = var_16;
    }
    for (int i_14 = 3; i_14 < 9;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_47 = (((((min(8661, 65535)))) <= ((1 ? (arr_23 [i_14 - 2] [i_14 - 3] [i_14 - 1]) : 1698481098))));
            var_48 = 1;

            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_49 = var_17;
                var_50 ^= var_16;
                var_51 = (min(var_51, var_4));
                arr_57 [i_14] [i_16] [i_14] [i_14] = (((1698481120 >= 469762048) + (((((arr_42 [i_14]) % (arr_55 [i_15])))))));
            }
            for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
            {
                var_52 ^= (((((((arr_18 [i_17] [i_14 - 2] [i_17 + 1]) ^ -576007439))) ? (((255 ? var_7 : (arr_21 [i_14 - 3])))) : (arr_42 [i_14 - 2]))));
                var_53 = (max((arr_18 [i_14] [i_15] [i_15]), (~var_14)));
            }
            for (int i_18 = 1; i_18 < 8;i_18 += 1) /* same iter space */
            {
                var_54 = var_0;
                var_55 = var_18;
            }
        }
        var_56 = 3181517495;
        var_57 |= (max((((min(var_17, var_15)) & (arr_11 [i_14 - 1] [i_14 + 1]))), (max((arr_55 [i_14]), (min(2047, var_16))))));
        var_58 = ((!(25068 <= -232)));
        var_59 = (((max((arr_6 [i_14 - 1]), (27 + var_5)))) ? (min((var_0 > 1698481100), (0 - var_1))) : (max(40163, var_1)));
    }
    var_60 = (min(var_60, ((((((((var_10 ? var_16 : var_17))))) % ((var_4 ? ((var_2 ? var_1 : var_15)) : (-24 * var_12))))))));
    #pragma endscop
}
