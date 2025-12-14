/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 ^= 0;
        var_13 = (max(var_13, (((var_5 ? (arr_1 [i_0 + 2] [i_0 + 1]) : (-9223372036854775807 - 1))))));
        var_14 -= ((var_7 ? var_4 : -996972110775642924));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_15 = (max(var_15, var_3));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_9 [i_1 + 1] [i_1 + 1] [i_3] [i_1] = (1 != 15);
                    var_16 = (max(var_16, (((~((1794081650 ? 94 : 43)))))));
                    arr_10 [i_1] = (min((max((((var_3 ? 1 : var_5))), -1675413551126516731)), ((max((min(-15, var_4)), var_3)))));
                    arr_11 [i_1] [i_1] [13] = (max(((((!var_6) << ((var_6 >> (var_0 - 4587212012318298238)))))), (min(var_1, (max(var_0, var_9))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {
                        var_17 = (max(var_17, (((var_8 % ((122 << (104 - 99))))))));
                        arr_26 [i_7] = ((var_0 || (!var_0)));
                    }
                }
            }
            var_18 ^= ((18 ? (arr_5 [i_5]) : var_10));
            arr_27 [i_5] = (2305825417027649536 >> (var_1 + 126636963));

            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_19 = (((((var_4 + 2147483647) >> (2305825417027649528 - 2305825417027649499)))) - ((1 ? 2305825417027649536 : var_3)));
                var_20 = ((-15 ? 9223372036854775794 : 1));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_21 = 996972110775642907;
                arr_33 [i_4] [i_9] [i_9] [i_9] = 42;
                var_22 = (min(var_22, ((((var_10 ? -4974905483554713963 : var_6))))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_23 = var_11;
                arr_36 [i_4] [i_5] [i_4] [i_10] = ((((var_5 ? 76 : var_4)) < var_9));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_24 = 82;

                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_25 = (min(var_25, ((((arr_3 [i_4] [i_12 + 2]) ? var_5 : var_8)))));
                    var_26 += 108;
                }
                var_27 = (max(var_27, (((((((-9223372036854775807 - 1) ? var_8 : 9223372036854775794))) ? (~var_8) : 81)))));
            }
            arr_44 [i_4] [i_4] [i_4] = (var_0 && 1);
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_47 [i_4] [i_13] = -9223372036854775784;
            arr_48 [8] [8] [i_13] = ((arr_5 [i_4]) ? var_6 : -2127448501);
            var_28 = ((9223372036854775807 ? 0 : 9223372036854775807));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_29 = (max(var_29, ((var_4 ? (arr_12 [i_14] [i_14]) : var_6))));
            arr_51 [i_14] [i_14] = var_8;
            var_30 ^= var_5;
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_31 = (max(var_31, (((~(arr_1 [i_4] [i_15]))))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_32 = (max(var_32, var_1));
                            arr_65 [i_17] [i_17] [i_16] [i_15] [i_17] = ((var_9 ? 42 : 1));
                        }
                    }
                }
            }
            var_33 = (max(var_33, (arr_38 [i_4])));
            arr_66 [i_15] = var_4;
            var_34 += var_0;
        }
        for (int i_19 = 2; i_19 < 10;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            arr_80 [i_4] [i_19] [1] [1] [1] [i_19] [i_22] = ((arr_42 [i_20 - 1] [i_20 - 1] [i_20 - 1] [3] [i_20]) ? var_1 : var_3);
                            var_35 = (var_3 || var_0);
                        }
                    }
                }
            }
            arr_81 [i_4] [i_4] = (((((84 ? 0 : var_2))) ? (arr_68 [i_19] [i_19 - 2] [1]) : (203 % 1)));

            for (int i_23 = 3; i_23 < 11;i_23 += 1)
            {
                var_36 -= var_2;
                var_37 -= ((-127 ? -6798424844957780657 : var_1));
                var_38 = var_3;
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        {
                            arr_90 [i_4] [i_19 + 1] [i_23 - 2] [9] = var_11;
                            var_39 = (((var_3 * var_2) % var_1));
                        }
                    }
                }
            }
            arr_91 [i_19] &= (127 ? 1 : (arr_69 [i_19] [i_19 + 1] [i_19 + 1]));
        }
        arr_92 [i_4] = ((640599300 % 1) ? 6798424844957780657 : (arr_54 [4] [i_4]));
    }
    var_40 = (var_10 * var_9);
    var_41 = var_10;
    #pragma endscop
}
