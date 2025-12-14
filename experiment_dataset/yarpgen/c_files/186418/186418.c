/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((5708711463023378526 ? -21638 : var_9))) || var_11))) & var_12));
    var_14 = ((-1 ? var_4 : ((((max(var_4, 1))) ? var_6 : var_10))));
    var_15 -= ((10273020838949747398 ? (((((-21635 & var_0) || ((max(var_5, var_0))))))) : (((((21638 ? var_4 : var_4))) ? (min(0, -17491)) : (((var_8 ? var_6 : var_4)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-1 ? var_10 : var_11));
        var_16 -= (var_8 ? var_6 : -31170);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 += min(239, (((var_4 & var_12) ? var_7 : var_6)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = ((30341 ? -25284 : 0));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 -= (var_2 ? (((var_3 ? var_12 : 36621))) : var_3);
                            var_20 = ((((1 ? 243 : 7))) ? 21638 : 18446744073709551592);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_19 [i_4] = (((((var_1 ? var_3 : 42))) || 18446744073709551615));
                            arr_20 [i_1] [i_1] [i_4] [i_1] [i_3] [i_4 + 1] [i_6] = (9223372036854775807 || 224);
                            arr_21 [i_4] [i_2] [i_3] [i_2] [i_6] = (~0);
                            arr_22 [i_4] [i_3] [i_4] = -1;
                        }
                        arr_23 [i_1] [5] [i_3] [i_4] = (min((max(var_6, ((var_0 ? 0 : -127)))), ((var_2 ? (0 || 1733081112) : var_1))));
                    }
                }
            }
        }
        var_21 = ((((max(var_12, ((var_0 ? var_2 : -1))))) ? (0 & var_4) : ((var_3 ? ((var_10 ? var_3 : var_9)) : ((min(var_0, 53639)))))));
        var_22 = (max(var_9, var_6));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7 - 4] [i_7 - 3] = var_9;

        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_8] = (((var_8 || var_2) ? (0 || var_1) : var_5));
            arr_32 [i_7 - 4] [i_8 + 2] = (((((9374 ? var_7 : -1500187658))) && (var_0 + 1)));
            arr_33 [i_8] = var_7;
            arr_34 [i_7] [i_7] [i_8 + 2] = (77 && 0);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_23 = (-1872996784 && 186);

                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            var_24 = var_0;
                            var_25 -= ((var_7 ? var_10 : var_4));
                        }
                        var_26 = ((var_6 ? var_5 : var_4));

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_27 += -var_4;
                            var_28 *= ((-21638 ? var_2 : var_12));
                            var_29 = var_5;
                        }

                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            arr_47 [i_7] [i_8] [i_9] [i_10] [i_13] = (0 & var_2);
                            arr_48 [i_7 - 3] [i_8] [i_9] [4] [i_9] = (var_2 || (-9223372036854775807 - 1));
                            var_30 *= (1872996783 ? 18446744073709551600 : -21638);
                        }
                    }
                }
            }
        }
        var_31 -= (var_4 & var_11);
    }
    for (int i_14 = 4; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_32 *= ((0 & (((var_6 ? -840460151 : var_0)))));
        var_33 += (max((max(((0 ? 4260607557632 : var_11)), var_0)), ((((((var_4 ? 486515330 : var_2))) && (227 && var_7))))));
        var_34 = ((661552382 ? (((var_7 ? ((var_12 ? -1 : var_0)) : (((min(1, var_7))))))) : (max(var_8, 0))));
    }
    #pragma endscop
}
