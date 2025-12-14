/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (var_4 ^ var_16);
    var_18 &= var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 76;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = var_9;
            arr_6 [i_0] [i_0] [i_0] = (((((var_14 << (((-77 + 103) - 22))))) ? (((var_10 ? var_16 : var_1))) : var_10));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 *= var_6;
                        var_20 -= -76;
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = 76;
                        var_21 = ((!((((0 << 1) % ((197504998 ? 1 : 1)))))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_14 [i_0] = var_3;
            arr_15 [i_0] [i_0] = -31606;
            arr_16 [i_0] [4] [8] &= ((!(arr_12 [i_0] [i_0] [i_0])));
            arr_17 [0] [0] [i_0] = (arr_4 [i_4] [i_4] [i_4]);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_20 [i_0] = arr_19 [2] [2] [i_5];
            arr_21 [i_0] [i_5] [i_5] = -64;
            var_22 = var_8;
            arr_22 [1] [i_0] [i_0] = (76 * var_0);
        }
        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            var_23 = (min(var_23, (((-76 ? var_11 : var_11)))));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_24 = var_4;
                    var_25 = 1;
                }
                arr_31 [i_0] [i_7] = (((((arr_29 [1] [i_0] [9] [i_7]) % 12351)) * ((((arr_8 [i_0] [i_0] [i_6 - 2] [i_7]) ? var_0 : 1)))));
            }

            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                arr_35 [i_0] [i_0] [i_0] = (var_9 ^ var_1);
                arr_36 [i_0] [i_0] [i_6 - 3] [2] = (((var_6 + 2147483647) << (((950776927326130589 || var_15) - 1))));
                var_26 &= (~var_10);
                var_27 = (max(var_27, 72));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_28 = ((96 ? (((42 ? var_14 : 1))) : ((var_14 ? 0 : -4458))));
                    var_29 = (min(var_29, (((((var_7 ? var_8 : (arr_7 [8] [i_9] [8]))) ^ var_8)))));
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_30 = (142989288169013248 || 130210320);

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_31 *= -1;
                    arr_43 [i_0] [5] [i_0] [i_12] = (((((arr_13 [i_6] [i_11]) ^ var_15)) ^ var_9));
                    var_32 = (max(var_32, var_5));
                    var_33 *= (~(arr_32 [i_0] [i_0] [i_0] [i_0]));
                    var_34 = (max(var_34, (arr_13 [i_6] [i_6])));
                }
                arr_44 [i_0] [5] [i_0] [i_0] = ((1 / 1050480745) || -58);
                var_35 = ((var_3 ^ (0 % 779019373)));

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_48 [i_0] [i_0] = 146;
                    arr_49 [i_0] [i_6] [i_0] = 7236;
                    arr_50 [i_0] [i_6 + 1] [i_6] [i_11] [11] [i_13] = 29360128;
                }
            }
            var_36 = (max(var_36, var_5));
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 19;i_14 += 1)
    {
        var_37 = ((16383 ? -4449 : ((-4458 ? var_9 : -4458))));

        for (int i_15 = 1; i_15 < 20;i_15 += 1) /* same iter space */
        {
            var_38 = (4 || 12291992519560393358);
            var_39 -= 0;
        }
        for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    {
                        var_40 -= var_11;
                        arr_63 [i_14] [i_14 - 1] [i_14 - 1] [i_14 - 1] = var_12;
                        var_41 = var_13;
                    }
                }
            }
            arr_64 [i_14] [i_14] [i_16 + 2] &= var_1;
            var_42 = (min(var_42, 4451));
            var_43 = (4449 ^ var_6);
            var_44 = (((~var_7) ? (arr_60 [i_14] [i_14] [i_14 + 3] [i_16]) : (var_4 >> 1)));
        }
        arr_65 [2] = var_5;
    }
    #pragma endscop
}
