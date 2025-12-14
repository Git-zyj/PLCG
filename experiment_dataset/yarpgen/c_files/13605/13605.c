/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 += (~191);
                var_20 *= ((max(8155018753627559568, 108)));
            }
        }
    }
    var_21 = ((var_1 ? (((!((min(var_8, var_16)))))) : ((-(~var_14)))));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = 148;
                            var_23 = -1434571539;
                            arr_18 [7] [i_3] [i_4] [i_5] [i_6] |= (((arr_8 [i_2 - 2] [i_3]) != (arr_8 [i_2] [i_3 - 2])));
                            var_24 = (max(var_24, (((-(arr_15 [i_3] [i_6 + 1]))))));
                        }
                    }
                }
            }
            var_25 = (((arr_11 [9]) < (!var_2)));
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        var_26 *= 68719476735;
                        var_27 = (((2539 / -8733968864614146660) >= (arr_17 [i_2 - 2] [i_7 - 2] [i_8] [i_9])));
                        var_28 *= (arr_7 [i_2] [i_7] [i_9 + 3]);
                        var_29 = (((arr_19 [i_7] [i_7 + 2] [i_7]) ? -18575233501614877 : 191));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    arr_34 [i_10] [i_12] = min((min(-18575233501614877, 68719476755)), -2096102954);
                    var_30 = 59763;
                    var_31 -= (min((((3584 || -1383545091) ? (min(var_0, -18575233501614894)) : 803914834)), var_8));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    {
                        arr_43 [i_13] [i_15] [i_15] [i_15] [i_16 - 1] = (arr_16 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_44 [i_13] [i_15] = (((arr_14 [16] [i_14 - 2] [i_15]) >= 65970697666560));
                    }
                }
            }
        }
        var_32 ^= arr_35 [i_13];
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {
                        arr_57 [i_17] [i_18] [i_19] [i_20] [i_20] = ((!((((max((arr_42 [21] [i_19] [i_19] [i_17]), 8581))) != ((min(var_0, 13934)))))));
                        var_33 *= (max(((~((-2096102942 ? 1481823146 : var_8)))), (((248 || (var_6 ^ 68719476750))))));
                        var_34 = (max(var_34, 25792));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 21;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 24;i_24 += 1)
                        {
                            {
                                var_35 = (min((((var_5 || (arr_19 [i_24] [i_24] [i_22])))), (144115188075855871 / -18575233501614872)));
                                var_36 = 173604570388916761;
                                var_37 = (!48540);
                                arr_70 [i_17] [i_17] [i_17] [16] [i_17] = (((var_18 >= -2024887399) ? (min(-4888740173004270660, (arr_62 [i_17] [i_21]))) : (((((arr_62 [i_23 - 2] [i_24]) != 39723))))));
                            }
                        }
                    }
                    var_38 = (((arr_10 [i_17] [i_17] [i_17]) == (arr_10 [i_17] [i_21] [i_22])));
                }
            }
        }
    }
    #pragma endscop
}
