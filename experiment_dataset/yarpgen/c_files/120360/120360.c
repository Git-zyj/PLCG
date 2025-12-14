/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        var_19 = var_12;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] = var_7;

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_20 &= 6842936524540596007;
                            arr_15 [i_1] [9] [i_0] [i_0] [i_1] = var_11;
                            arr_16 [i_4] [i_1] [i_3] [i_3] [i_2] [i_1] [i_0] = 5797;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_21 = var_10;
                    arr_19 [i_2 + 2] [i_2] [2] [i_1] = 6333;
                    arr_20 [i_1] = var_12;

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_6] = var_17;
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = var_2;
                        arr_25 [i_1] [i_1] [i_5] [3] = 23741;
                        arr_26 [i_1] = (((var_14 ? var_14 : var_3)) / 23842);
                        var_22 = var_2;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_23 = (18446744073709551612 >> (32767 - 32725));
                        var_24 = var_2;
                        var_25 = var_9;
                    }
                }
            }
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                var_26 = ((-16777216 ? (((var_11 ? var_17 : -1185284087))) : ((64 ? var_0 : var_4))));
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_1] [i_10] = 118;
                            var_27 = (var_11 ? var_5 : var_6);
                            var_28 = var_6;
                        }
                    }
                }
                arr_39 [4] [4] [4] [i_1] = 23843;
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {

                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    arr_44 [i_1] [i_1] [i_1] = 4882;
                    arr_45 [i_1] = (((var_17 ? 3034534757338236486 : 11984396605632972547)));
                    var_29 = (((0 < var_11) ? var_10 : var_9));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    arr_49 [i_0] [i_1] [i_11] [i_1] = var_11;
                    var_30 = (((var_7 ? 59483 : var_6)));
                }
                arr_50 [i_0] [i_0] [i_1] [i_11] = ((var_16 ? var_12 : 4294967284));
                arr_51 [i_0] [i_0] [1] [i_1] = (((((16 >> (var_11 - 196)))) || var_17));
            }
            arr_52 [i_1] [i_1] = ((var_11 ? (var_2 & var_13) : var_7));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_31 = ((var_4 ? ((4 ? var_1 : var_14)) : var_5));
            arr_55 [i_0] [i_0] = (var_6 % var_1);

            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {

                for (int i_16 = 4; i_16 < 19;i_16 += 1)
                {
                    arr_60 [i_0] [i_16] [i_15 + 1] [19] = var_5;
                    arr_61 [i_16] [i_16] [i_14] [i_16] = 221757012;
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_32 = var_12;
                        arr_67 [i_0] [19] [i_15] [i_17] [5] = (((1 ? var_8 : var_4)));
                        var_33 = var_12;
                        var_34 += 27;
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_35 = var_0;
                        arr_70 [i_0] [i_0] |= (+-20);
                    }
                    for (int i_20 = 1; i_20 < 20;i_20 += 1)
                    {
                        arr_73 [i_17] [i_17] [i_15] = -1;
                        var_36 = (var_18 % var_5);
                        arr_74 [i_20] [i_17] [i_17] [12] [9] [12] [i_0] = (((((18446744073709551602 ? var_18 : 1))) ? var_1 : var_2));
                        var_37 = var_2;
                    }
                    arr_75 [i_17] [i_15 - 1] [i_15 + 2] [i_14] [i_0] = var_16;
                }
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {
                    arr_78 [i_21] [i_21] [i_14] [i_21] = 25898;
                    var_38 |= (-1784987151 > -4882);
                    arr_79 [i_21] = var_0;
                }
                for (int i_22 = 1; i_22 < 20;i_22 += 1)
                {
                    arr_82 [i_0] [i_22] [i_0] [i_0] [i_0] = 685164693;
                    arr_83 [i_22] [i_22] [i_14] [i_22] [19] = ((var_8 ? var_16 : -1270905742));
                }
                var_39 = var_8;
            }
            for (int i_23 = 1; i_23 < 18;i_23 += 1)
            {
                arr_87 [i_23] [i_14] = (var_12 ? var_5 : (~var_7));

                for (int i_24 = 1; i_24 < 20;i_24 += 1)
                {
                    var_40 = 18446744073709551600;
                    var_41 += (((var_18 > var_2) ? var_2 : -98));
                    var_42 = var_1;
                }
                arr_90 [i_0] [i_14] [i_0] [i_14] = ((var_11 ? 32767 : 5799));
                arr_91 [i_0] [i_0] [i_23] = ((var_2 | ((140298445 ? 9223372036854775807 : var_3))));
            }
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1) /* same iter space */
        {
            var_43 = 4052252442;
            var_44 ^= ((var_15 ? 18446744073709551612 : var_5));
            arr_95 [i_0] [i_25] = var_9;
        }
    }
    var_45 = (((((min(699952390, var_7)) + (min(var_3, 15370687087608759483))))));
    #pragma endscop
}
