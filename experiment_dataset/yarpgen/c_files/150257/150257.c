/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (!4320750144764612352);
        arr_4 [i_0] = 4294967290;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (~1);
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((1 ? 540431955284459520 : -4096));
                    var_16 = ((1 ? 4294967290 : 9151328763605854621));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = -1;
                        var_17 = 1;
                        arr_16 [1] [i_1] [i_2] [i_1] = ((1 ? 896 : 71));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_19 [i_4] = (((1 ? 12348374839511158043 : -6652645136759771995)));
                        arr_20 [i_0] [i_1] [i_4] [i_4] = 18446744073709551605;
                    }
                    arr_21 [i_0] [i_0] [i_0] [i_0] = 6;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_18 *= (98549909 ? 4006378915 : -6574728144107753887);
                                arr_31 [i_0] [i_5] [i_5] = -30;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_35 [i_5] = 6001;
                        arr_36 [i_0] [i_5] [i_6] [i_6] = 0;
                        arr_37 [i_5] = ((1 ? 6574728144107753854 : 1));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_19 = (min((~1), 98549909));
        var_20 = (min((((-119 ? 6567410991149399941 : 10267737485408870940))), -530200597));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_21 = (max(((6010 ? 2147321407 : 143)), ((min(13, (-2147483647 - 1))))));
        var_22 = (max(4260607557632, 2310));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_45 [i_12] = 122880;
        arr_46 [i_12] [i_12] = 6001;
    }
    var_23 = ((-(--65532)));
    var_24 = (min(63, ((46500 ? (min(0, 4260607557632)) : var_3))));
    var_25 = var_0;
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            {
                                arr_58 [i_13] [i_14] [i_15] [13] [i_17] = (!6001);
                                arr_59 [4] [4] [4] [4] [i_17] = (--65526);
                            }
                        }
                    }
                    arr_60 [i_14] = ((-((178 ? 0 : 255))));
                    arr_61 [i_13 - 1] [14] [14] [i_14] = ((-((-(max(39966, 18219843212436422554))))));
                }
            }
        }
    }
    #pragma endscop
}
