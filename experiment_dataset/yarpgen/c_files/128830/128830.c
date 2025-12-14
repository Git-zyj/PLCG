/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (min((((arr_3 [i_0]) ^ var_9)), ((var_6 ? -1 : -1))));
            var_13 = ((!(((((min(var_7, (arr_2 [i_0])))) ? var_0 : (~var_7))))));
        }
        arr_5 [i_0] = ((-((min(var_9, 15)))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_14 = 184;
        arr_8 [i_2] [i_2] = var_5;
    }
    var_15 = (min(var_7, ((~((min(1, var_2)))))));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_16 [i_5] [i_3] = ((-(((arr_13 [i_5] [i_3]) ? 25 : -3080))));
                var_16 = (var_4 ? (((!(arr_2 [i_4])))) : -738799155);
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_19 [i_6] [i_4] [3] = ((max(var_3, 31)));
                var_17 = ((~(max(((min(13742, 12288))), ((71 ? 71 : -70))))));
                var_18 = ((((min((768 + var_9), (~18435628260202200661)))) ? ((max(0, (max(1, -47))))) : ((((((arr_13 [i_3] [i_3]) ? var_1 : 105)) <= -23504)))));
                var_19 = ((-((230 ? var_6 : 1))));
            }
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                arr_22 [i_7 + 1] [i_7] [i_7] [i_3] = 32767;
                var_20 = 127;
                arr_23 [i_7] = var_8;
            }
            arr_24 [11] = (max((((arr_14 [i_3]) & var_1)), (max((arr_14 [i_4]), 1))));

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_21 = ((((((var_0 ? -1299872309 : -69)) + 2147483647)) >> (((~8383) + 8393))));
                var_22 = (min((((!-1319364476) ? var_2 : ((1099511627775 ? -1 : 768)))), ((((max(162, 3999))) / ((min(64, 1)))))));
                var_23 = (((!((min(0, 85))))) ? (-14 <= 251) : var_7);
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_24 = var_9;
                arr_31 [1] [i_3] [i_3] [i_9] = (-1536083765 ? (3670016 < 1) : 10);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_35 [i_3] [i_10] [i_4] = ((-(11115813507350954 == 230)));
                var_25 = (((arr_25 [8] [8] [8] [6]) ? var_10 : (3464938506 * 35)));
            }
            var_26 = (max((min((1 | 1991539541), (max(-95, 14)))), 0));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            arr_38 [i_11] = (((min((arr_13 [i_3] [i_11]), 44)) <= var_9));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (max(((var_3 ? (min(2866167786, var_1)) : (((min(var_8, var_5)))))), (((!(!255))))));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_27 = (--1);
                            var_28 = var_8;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_29 = ((var_6 * ((((((max(var_2, var_4)))) <= ((var_3 * (arr_18 [i_3] [i_3] [i_13]))))))));
                            var_30 = (!var_6);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {
                        var_31 = (18446744073709551601 ^ 190);
                        arr_56 [i_17] [i_11] [i_11] [i_3] = (((-(4294967295 && var_6))) / ((max(var_6, 1))));
                        arr_57 [i_16] [i_11] [i_16] = var_10;
                        var_32 = -32731;
                    }
                }
            }
        }
        var_33 = (arr_26 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_18 = 3; i_18 < 9;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    {
                        arr_66 [i_3] [i_18] = ((-125 ? 4194272 : (((max(var_3, (var_3 > -32731)))))));
                        var_34 = (((+-2891421793) - (((var_8 + (arr_64 [i_18 - 1] [i_19 + 1] [i_18 + 2] [8] [i_20] [i_18 + 2]))))));
                    }
                }
            }
        }
    }
    for (int i_21 = 1; i_21 < 13;i_21 += 1)
    {
        var_35 = (max(126, -var_0));
        arr_71 [i_21 - 1] [i_21] = ((((~((var_5 - (arr_0 [i_21] [i_21]))))) > (max(5950, ((4160749568 ? 98 : (arr_69 [i_21])))))));
        var_36 = ((~(min(4290773023, (arr_7 [i_21 - 1])))));
    }
    #pragma endscop
}
