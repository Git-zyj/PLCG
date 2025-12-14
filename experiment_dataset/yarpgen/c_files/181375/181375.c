/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(var_14 ^ var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0] [i_0]) != var_13));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_20 = (((!var_14) || (arr_1 [i_1 + 1] [i_1 + 1])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_21 = ((((arr_0 [i_0]) % var_17)) | 15699);
                var_22 &= (((arr_4 [i_0] [i_1 - 2] [i_0]) ? (arr_2 [i_0]) : -var_5));
            }
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_23 = (max(var_23, ((var_2 >> (((((arr_7 [i_0] [i_0] [i_3] [i_0]) & 120)) - 98))))));
                var_24 = 205;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1 - 1] [i_5] [i_1 - 1] [6] &= var_1;
                            var_25 = (min(var_25, (var_4 > var_0)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_21 [i_1] [i_0] [i_1 - 3] [i_1 + 1] [i_3 + 2] [i_6 - 3] [i_7] = ((var_3 ? (arr_10 [i_6 - 1] [i_6 - 1] [i_1]) : (arr_10 [i_6 + 1] [i_6] [i_1])));
                            var_26 -= ((((var_2 ? 52893 : 52893)) != (arr_5 [i_6])));
                            var_27 = (13191322092488904870 * var_6);
                            var_28 = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_3] [i_8] [i_8] [i_9] [i_9] = ((5326880928933584775 >> (136 - 91)));
                            arr_28 [i_1] [5] [i_1] [i_3] [i_3] [0] [i_9] = var_13;
                            var_29 = ((~(arr_25 [i_1] [i_1] [16] [i_0] [i_9])));
                            var_30 = ((arr_11 [i_0] [i_1 - 2] [i_3] [i_8]) ? var_12 : (!var_11));
                        }
                    }
                }
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                arr_33 [i_0] [i_1] [i_1] [i_1] = (24 + var_0);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_31 = (((arr_7 [i_1 - 2] [i_10 - 2] [i_1 - 2] [i_1 - 2]) || (arr_7 [5] [i_10 + 1] [i_1 - 2] [i_1 - 2])));
                            var_32 = (max(var_32, ((((arr_36 [i_0] [i_1 - 2] [20] [i_11] [i_12] [i_11]) << (((arr_13 [i_0] [i_1 - 2] [8] [i_11] [i_12] [i_11] [i_11]) - 14229)))))));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_42 [i_0] [i_1] [i_1 - 1] = (((arr_25 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]) ? var_14 : (arr_25 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_33 = (((arr_13 [i_0] [i_1 - 1] [i_0] [i_14] [i_1 - 1] [6] [i_14]) == (var_10 < var_8)));
                            var_34 = var_5;
                        }
                    }
                }
            }
        }
        for (int i_16 = 2; i_16 < 18;i_16 += 1)
        {
            var_35 -= (((((!(arr_34 [i_0])))) * (!var_5)));
            var_36 = ((6976848614036681857 <= ((-(arr_34 [i_0])))));
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_37 = ((+((103 ? (arr_6 [i_18] [i_16] [i_16 + 1]) : var_6))));
                            var_38 = 181;
                            var_39 = (2472012490338113339 ? -var_4 : (arr_13 [i_17 + 3] [i_17] [i_17] [i_17 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]));
                            var_40 = (min(var_40, (((~(((arr_46 [i_0] [i_16] [i_17] [10] [i_19]) ? var_8 : 17231466433363038110)))))));
                            var_41 &= 923468056;
                        }
                    }
                }
            }
            var_42 = (arr_12 [i_0] [i_0] [i_16] [i_16 - 2] [i_16] [i_16] [i_16]);
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    {
                        var_43 = ((-(arr_5 [i_22])));
                        var_44 *= ((((var_10 ? 24 : var_8)) > (var_12 == 16384)));
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 11;i_23 += 1)
    {
        var_45 = ((((arr_61 [i_23]) && ((((arr_25 [i_23] [8] [i_23] [i_23] [12]) + 12643))))));
        arr_72 [i_23] = 52906;
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 21;i_24 += 1)
    {

        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            /* LoopNest 2 */
            for (int i_26 = 1; i_26 < 20;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 21;i_27 += 1)
                {
                    {
                        var_46 = -var_2;

                        for (int i_28 = 0; i_28 < 21;i_28 += 1) /* same iter space */
                        {
                            arr_87 [i_25] [i_25] [i_25] [i_27] [i_27] [i_27] = ((var_17 & 12670) >> (((~var_1) + 34916)));
                            var_47 = (((var_15 % var_6) ^ (arr_22 [i_24] [i_25] [i_26 - 1] [i_27] [i_27] [i_28])));
                            arr_88 [i_25] [i_25] = (((var_12 && var_9) / (arr_19 [7] [i_28] [i_24] [i_27] [i_26 - 1])));
                        }
                        for (int i_29 = 0; i_29 < 21;i_29 += 1) /* same iter space */
                        {
                            var_48 = (min(var_48, (((((((!(arr_51 [i_24] [i_24] [i_26 + 1]))))) | var_17)))));
                            var_49 = ((!(var_15 || var_3)));
                            arr_91 [i_25] [i_27] [i_27] [i_26] [i_25] [i_25] = var_14;
                        }
                        for (int i_30 = 0; i_30 < 21;i_30 += 1) /* same iter space */
                        {
                            var_50 = ((var_8 >= (arr_47 [i_24] [i_26] [i_27])));
                            arr_94 [8] [i_25] [i_26] [20] [i_25] [i_24] = (((arr_67 [i_24] [12] [i_27] [i_30]) ? (((arr_39 [i_25] [i_25]) + var_2)) : var_4));
                        }
                    }
                }
            }
            var_51 = (arr_11 [i_24] [i_25] [i_25] [i_24]);
        }
        for (int i_31 = 0; i_31 < 21;i_31 += 1)
        {
            var_52 = (arr_35 [i_24] [i_24] [i_31]);
            var_53 = (var_16 * var_1);
        }
        var_54 = var_5;
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 21;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 21;i_33 += 1)
            {
                {
                    var_55 |= 31824;
                    var_56 = var_10;
                }
            }
        }
        var_57 &= (((arr_31 [i_24] [i_24] [i_24] [5]) * (arr_31 [i_24] [i_24] [i_24] [i_24])));
    }
    var_58 = (((((min(var_9, var_2)))) ? var_12 : var_10));
    #pragma endscop
}
