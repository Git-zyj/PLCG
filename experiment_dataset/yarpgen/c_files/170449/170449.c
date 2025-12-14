/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_19 = 1;
            var_20 = 196360846;
            var_21 ^= 38431;

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [1] = var_4;
                var_22 |= (4124578965 >= 3085916663519241976);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((31532 ? 31555 : 31555)))));
                            arr_14 [4] [2] [i_4] [0] [1] &= -1;
                            arr_15 [3] [i_1] [i_0] [i_3] [i_4] = (~var_5);
                            arr_16 [i_0] [10] [i_1] [i_2] [i_3] [i_0] = 5303338648057902996;
                        }
                    }
                }
                var_24 = (min(var_24, 106));
                var_25 -= 9223372036854775807;
            }
        }
        var_26 = ((41 >> (31561 - 31556)));
        var_27 = 31574;
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        var_28 &= (((var_4 ^ -1) ? var_17 : var_13));
        var_29 -= (6138713898244127685 & var_14);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                {
                    var_30 += ((40127 >> (((((((-1 | var_4) + 2147483647)) << (1 - 1))) - 2147483640))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_34 [i_6] [i_7] [14] [1] [14] [2] = ((~(var_17 * var_7)));
                                arr_35 [8] [2] = (1 <= 82);
                                var_31 = (max(var_31, (121 - 31532)));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_38 [i_11] &= 0;
        arr_39 [0] = (((~var_5) > (31555 / var_14)));
        arr_40 [i_11] = 9223372036854775807;
        var_32 += -var_7;
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 19;i_14 += 1)
            {
                {
                    arr_48 [19] [i_13] [i_12] = 7600;

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_52 [i_12] [i_12] = (((31555 <= 6027647540396758971) || var_16));
                        var_33 = ((!((max((253 >= 29201), -29201)))));
                        var_34 = (29201 ^ -1);
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_35 = -29180;
                                var_36 = (max(var_36, ((((1 / 121) * ((0 >> (1465647166279915031 - 1465647166279915008))))))));
                                var_37 = (((17895586290827065286 + 1296126044314734348) >= (((max(0, 0))))));
                                arr_59 [7] [12] [i_14] [i_16] [i_12] [i_12] = 2150621285;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_38 = (((-816172293433707 >= 53548) >= (max(-7605553345604761115, 17))));
                                arr_64 [i_12] [1] [7] [16] = ((!((((var_13 / 516193274) * ((max(4095, -15))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_65 [i_12] [20] &= 977497265;
    }
    var_39 = (var_13 >> var_17);
    #pragma endscop
}
