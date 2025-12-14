/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] = ((~(((arr_0 [i_1] [i_1]) << (var_4 - 45588)))));
            var_19 = (((((arr_0 [i_0] [i_1]) || (arr_0 [i_0] [i_1]))) && var_16));
            arr_6 [i_0] = var_2;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_2] [i_1] [i_1] [i_1] [i_2] = var_9;
                        arr_14 [i_2] [i_1] [i_2] [i_3] [i_2 + 1] = var_1;
                        var_20 = -var_13;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_5] [i_0] [i_5] = (~-13215);
                            arr_24 [i_0] [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] = var_1;
                            var_21 = (max(var_21, (((~(arr_21 [i_5] [i_4] [i_1] [i_0]))))));
                        }
                    }
                }
                var_22 = (!var_6);
                var_23 = var_16;
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_29 [i_7] [i_0] = (((arr_1 [i_0] [i_1]) ? var_9 : var_0));
                var_24 = ((var_15 ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_7));
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                arr_32 [i_0] [i_1] [i_8] = (((arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]) ? 24667 : (arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] [i_8] [i_8])));
                var_25 = var_13;
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                var_26 = var_8;

                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_27 = (((((arr_22 [i_0] [i_0] [i_9] [i_10] [i_10] [i_0]) ? var_2 : var_6)) >> (((arr_37 [i_0] [i_9 + 1] [i_9 + 2] [i_10 - 1]) - 2235))));
                    arr_38 [i_0] [i_0] [i_10] [i_0] [i_0] = ((var_8 % (((arr_37 [i_0] [i_0] [i_9] [i_9]) ? var_13 : var_15))));
                    arr_39 [i_10] [i_9] [i_10] = ((var_6 << (((((arr_15 [i_0]) ? var_12 : var_6)) + 25))));
                    arr_40 [i_0] [i_1] [i_1] [i_10] = (((arr_10 [i_0] [i_0] [i_0] [i_10]) << (24689 - 24682)));
                    var_28 = ((((((arr_21 [i_0] [i_0] [i_9] [i_10 - 1]) ? (arr_27 [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_1] [i_10])))) && (arr_9 [i_10] [i_10 - 2] [i_10] [i_10 - 1])));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_43 [i_0] [i_1] [i_9] [i_11] = (((((var_10 ? 208 : var_10))) ? 102 : (var_2 && var_7)));
                    var_29 *= 54564;
                    var_30 = 65535;
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_46 [i_0] [i_0] [i_0] |= 11;

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_31 *= (((var_13 - var_2) ? (arr_16 [i_0] [i_9 - 2] [i_13]) : var_13));
                        var_32 -= 206;
                        arr_49 [i_0] [i_13] [i_9] [i_12] = (-26 & var_7);
                        var_33 ^= (((var_17 ? 65531 : var_9)));
                    }
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        arr_53 [i_0] [i_1] [i_9] [i_12] [i_14] = ((~(arr_28 [i_9 - 2] [i_9] [i_9 + 1])));
                        arr_54 [i_0] &= (((arr_19 [i_1] [i_1] [i_14]) >= 0));
                        var_34 = 219;
                    }
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_35 *= ((5772 == (-127 - 1)));
                        arr_58 [i_0] [i_1] [i_9] [i_12] [i_15] = 115;
                        var_36 = var_4;
                        var_37 = (min(var_37, ((((arr_7 [i_15] [i_15] [i_15]) ? (arr_7 [i_1] [i_1] [i_15]) : 24667)))));
                    }
                    var_38 = (max(var_38, var_4));
                    var_39 = (min(var_39, ((var_6 >> (((arr_36 [i_9] [i_0] [i_9] [i_9] [i_9 - 2] [i_9]) - 40332))))));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_62 [i_0] [i_16] = ((~((var_1 ? (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_44 [i_0] [i_0] [i_1] [i_0] [i_9] [i_0])))));
                    var_40 = (81 | var_7);
                }
            }
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_41 -= ((((((arr_18 [i_0] [i_0]) ? (arr_20 [i_0] [i_0] [i_0] [i_17] [i_17] [i_17] [i_17]) : -26505))) ? ((var_13 ? var_13 : (arr_60 [i_0] [i_0] [i_0]))) : ((9 ? -1 : 8))));
            var_42 ^= (((233 ? var_10 : -115)));
        }
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            var_43 = (arr_9 [i_0] [i_0] [i_18] [i_18]);
            arr_69 [i_0] [i_18] [i_18] = var_0;
            var_44 = ((+((var_0 ? (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_18]) : var_8))));

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                var_45 &= (((arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_56 [i_18] [i_0] [i_19] [i_18] [i_18] [i_18] [i_19])));
                arr_72 [i_0] [i_18] [i_18] = (((arr_10 [i_0] [i_0] [i_18] [i_19]) + (arr_45 [i_19] [i_18] [i_0])));
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 9;i_22 += 1)
                    {
                        {
                            var_46 = (var_11 - var_9);
                            arr_83 [i_0] [i_0] [i_18] [i_20] [i_20] [i_20] = var_4;
                        }
                    }
                }
                arr_84 [i_0] [i_18] [i_20] = ((65508 ? var_10 : 3));
            }
        }

        for (int i_23 = 4; i_23 < 9;i_23 += 1)
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 3; i_26 < 12;i_26 += 1)
                    {
                        {
                            arr_96 [i_0] [i_23] [i_24] [i_25] [i_26] = (arr_57 [i_26] [i_24] [i_0]);
                            var_47 = (min(var_47, 222));
                        }
                    }
                }
            }
            var_48 = (((arr_7 [i_0] [i_0] [i_23 + 3]) ? (arr_7 [i_0] [i_23 - 4] [i_23 + 2]) : (arr_7 [i_23] [i_23 - 1] [i_23 + 4])));
        }
    }
    for (int i_27 = 0; i_27 < 14;i_27 += 1)
    {
        var_49 = ((((((var_12 ? var_16 : 91)) ? (arr_99 [i_27] [i_27]) : 245))));
        arr_100 [i_27] = 219;
        var_50 = (min(var_50, ((min((((~43524) ? -28578 : (~190))), (var_12 - var_4))))));
    }
    var_51 = (~var_16);
    var_52 = var_9;
    #pragma endscop
}
