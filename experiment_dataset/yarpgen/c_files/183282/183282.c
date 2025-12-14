/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_2 + 3] [i_3] = var_8;
                            var_20 ^= var_10;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    var_21 = (18446744073709551598 ? (arr_10 [i_0] [i_1 + 2]) : var_15);
                    arr_12 [i_0 - 1] [i_0] = var_10;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [i_5] = (~var_1);

                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [15] [i_0] = 1137435076;
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(arr_6 [i_0 - 3] [i_1 - 1]));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        arr_22 [9] [i_0] [i_5] [i_5] [i_0] = (165 * var_0);
                        arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((arr_21 [i_0] [i_7 - 1] [i_5] [i_1 - 3] [i_0]) * var_1);
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_5] [i_5] |= var_18;
                        var_22 |= ((var_5 ? (arr_13 [i_0 + 1] [i_5] [i_0 + 2]) : ((-1 * (arr_10 [i_5] [i_1 + 3])))));
                        arr_29 [i_0] = (var_8 * var_7);
                    }
                    var_23 = (4671302309487218756 / 255);

                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        arr_33 [i_0] [i_5] [i_1] [i_0] = (((arr_0 [i_1 + 3]) ? var_3 : (arr_0 [i_1 - 2])));
                        var_24 = -var_17;
                        var_25 = (max(var_25, (((var_9 * (arr_20 [i_9 + 1] [6] [i_9 - 3] [i_9] [i_9] [i_9 - 3]))))));
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_26 = (938707385 * (((arr_14 [i_0]) * var_15)));
                        arr_36 [i_0 + 3] [i_0] = ((!(arr_10 [i_0] [i_1 + 4])));
                        var_27 ^= 32762;
                    }
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        arr_40 [i_0] = (var_14 || -1);
                        var_28 = (max(var_28, (arr_5 [i_11] [i_11] [i_5] [i_1])));
                        var_29 = (min(var_29, (((((4530736069738701580 ? -1029559110 : -105881319))) ? var_11 : (244 * var_1)))));
                    }
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        arr_43 [i_0] [18] [18] [i_0] = (((arr_41 [i_1 - 3] [i_1 - 2] [i_0 - 3]) && (arr_41 [i_1 - 3] [i_0] [i_0 - 3])));
                        arr_44 [i_0] [i_5] [i_5] [i_0] &= ((((-4 ? 134217727 : var_17)) * ((((arr_24 [i_5] [i_5] [i_5] [i_5]) / var_12)))));
                    }
                }
                var_30 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        var_31 *= (152 && 41176);

                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            arr_59 [i_13] [16] [i_17] [i_16 + 2] [1] [i_17] [i_14] = var_5;
                            arr_60 [5] [i_14] [7] = (((arr_54 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]) * (((arr_57 [i_16] [i_16 + 4] [i_16] [i_16] [8] [i_16]) ? 3 : (arr_57 [i_16] [i_16 + 1] [13] [i_16] [i_16] [i_17])))));
                        }
                        var_32 = (((((arr_49 [i_14]) ? (arr_47 [i_13 + 1] [i_16 + 2]) : (var_14 / 4602678819172646912))) * 1750727385));
                    }
                    var_33 = (min(var_33, var_5));
                    arr_61 [i_13] [i_15] = (max(104, ((+(((arr_58 [i_14] [4] [i_15] [i_14]) ? 9223372036854775801 : 13103200618713071520))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_34 = (min(var_34, -1674447710));
                                var_35 = (((-1059035741 && 28360) * ((~((2047 ? (arr_48 [3] [i_14] [3]) : 30021))))));
                                arr_68 [i_19] [i_18] [i_18] [i_13] [i_18] [i_13] = ((var_15 || (((arr_54 [i_13] [i_13 + 1] [i_13 + 1] [i_18]) || (arr_54 [i_13] [i_13 - 1] [i_13 - 1] [i_18])))));
                                var_36 = (max(var_36, (((((min(((-(arr_67 [i_13] [i_14] [i_19] [i_13] [i_13]))), -var_9))) * (max((8318800543645120038 & 64740), (arr_63 [i_14]))))))));
                                var_37 = (max(var_37, (((((((arr_64 [i_13 - 3] [i_14]) ? (arr_64 [i_13 - 3] [i_14]) : (arr_64 [i_13 - 3] [i_19])))) ? (((arr_64 [i_13 - 3] [i_14]) / var_3)) : (((arr_64 [i_13 - 3] [i_14]) ? (arr_64 [i_13 - 3] [i_14]) : -516707380)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (min(var_38, (!var_16)));
    var_39 -= var_9;
    #pragma endscop
}
