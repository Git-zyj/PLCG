/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((84 ? 82 : -126));
        var_20 &= (max(((((-30748 ? 36 : 6)))), (~-2147483638)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 *= (((~118) ? (arr_11 [i_1] [8] [8] [i_1]) : var_16));
                        arr_13 [13] [i_1] = (((((var_14 ? var_4 : (arr_8 [i_1] [i_1])))) ? (arr_4 [i_1]) : (arr_5 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_5] [i_5] = ((var_17 ? (((var_17 ? var_1 : var_0))) : var_14));
                        var_22 *= ((((((arr_5 [i_1]) ? var_9 : -2147483611))) ? (var_14 & var_3) : (~36)));
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_20 [i_1] [i_2] [i_1] [i_6] = var_3;
                        var_23 = (max(var_23, var_11));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 = (arr_19 [i_7] [i_2] [i_3] [4]);
                            var_25 = (arr_14 [i_1] [i_2] [i_3] [8] [8]);
                            arr_23 [i_1] [14] [i_3] [i_6] [i_7] = (~((-14850 ? 178 : -116)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_26 [5] [i_8] [i_6] [4] [1] [i_2] [i_1] = var_2;
                            var_26 = var_7;
                            var_27 = (arr_7 [3] [i_3]);
                            var_28 = 1;
                            arr_27 [i_2] [i_2] [3] [i_2] = ((var_1 % (arr_24 [i_8] [i_6] [i_3] [i_2] [i_1])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_1] [14] [i_1] [i_6] [4] = ((-(arr_22 [i_1])));
                            var_29 = 2147483647;
                            var_30 = min((((arr_11 [8] [11] [11] [8]) ? (arr_11 [i_1] [i_2] [i_6] [i_9]) : (arr_11 [i_1] [i_1] [i_1] [i_1]))), (((arr_11 [i_1] [i_1] [i_1] [19]) ? (arr_11 [i_9] [i_6] [i_1] [i_1]) : var_16)));
                        }

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_35 [i_1] [i_2] [i_3] [i_6] [i_10] = (1 + 189);
                            var_31 = ((~(arr_21 [i_1] [i_2] [i_3] [i_3] [i_1] [i_6] [i_10])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_1] [i_1] [1] [i_1] = var_3;

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] = 79;
                            arr_43 [5] [5] [i_12] [i_1] [i_3] [i_3] = (!var_18);
                            var_32 = ((~(arr_40 [i_3] [i_12] [i_3] [i_11] [i_12] [i_12])));
                            arr_44 [i_1] [i_2] [i_2] = 1;
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            arr_47 [i_1] = 1;
                            var_33 = var_7;
                            var_34 = var_10;
                            var_35 = 3101970748972634231;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_50 [i_1] [i_1] [i_2] [i_3] [i_11] [i_14] = var_14;
                            var_36 = ((((max(14, -2098866734))) ? ((max(1, var_18))) : (arr_17 [i_11] [i_3] [i_1])));
                        }
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                    {
                        var_37 = -var_12;
                        var_38 = (((arr_14 [i_1] [i_1] [11] [i_1] [i_1]) ? (var_7 == var_8) : -var_10));
                        var_39 = (~((104 ? var_2 : 242)));
                        arr_55 [i_1] [i_1] [i_2] [i_2] [5] [i_15] = var_5;

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_40 -= var_3;
                            var_41 = var_15;
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_42 |= (~0);
                            var_43 = ((((min(var_6, (arr_28 [i_1] [i_15] [i_3] [i_2] [i_1])))) ? ((var_12 ? 1156049353 : (arr_36 [13] [i_2] [i_3] [i_15] [i_15] [i_17]))) : -1011388481));
                        }
                        /* vectorizable */
                        for (int i_18 = 3; i_18 < 19;i_18 += 1)
                        {
                            var_44 = ((66 ? (((var_19 >= (arr_28 [3] [i_2] [i_3] [i_15] [i_18])))) : (!1)));
                            var_45 = ((2147483638 ? (!var_19) : 2317352632));
                            var_46 = (arr_48 [i_18 + 1] [i_18 + 1] [13] [i_18 - 3] [i_15] [i_15] [i_3]);
                            var_47 = 3138917943;
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            var_48 = -22053;
                            var_49 = var_19;
                            var_50 = var_0;
                            arr_67 [i_1] [9] [i_1] [i_1] [i_19] = (~var_14);
                        }
                    }
                }
            }
        }
        var_51 = var_14;
        var_52 *= var_7;
    }

    for (int i_20 = 2; i_20 < 24;i_20 += 1)
    {
        arr_72 [i_20] [22] = ((((~(arr_69 [i_20])))));
        var_53 *= var_9;
        var_54 = ((((-3122025550879062893 ? (min((arr_71 [i_20]), var_17)) : var_10)) > (((-(-16 && -26367))))));
        var_55 = var_18;
    }

    for (int i_21 = 2; i_21 < 17;i_21 += 1)
    {
        var_56 = var_13;
        var_57 = 42173;
    }
    #pragma endscop
}
