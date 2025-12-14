/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] [i_1] = (min(((~(max(1, 18446744073709551615)))), (arr_5 [i_2])));
                    var_19 = (min((((((max(var_0, -4841)))) & (((arr_0 [i_2]) ? (arr_4 [i_1 + 1]) : 18446744073709551615)))), (arr_1 [i_1])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_20 += ((((min((arr_8 [i_3] [i_3]), 64))) >> (((((((-17 ? 0 : (arr_6 [i_3] [i_4] [i_3])))) ? (min(1, var_8)) : ((((arr_1 [i_4]) ? (arr_2 [i_4] [i_4] [i_5]) : (arr_8 [i_3] [i_4])))))) - 97))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((-((~((min(1, 3))))))))));
                                var_22 = -1;
                                var_23 = (arr_20 [i_3] [i_3] [i_3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
        var_24 = (min((min(((10509531006349005469 ? (arr_11 [i_3]) : 2)), (~-21))), (((min((arr_5 [i_3]), 28507))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_37 [i_8] [i_9 + 1] [i_11] [i_11] [i_12] [i_12] [i_12] &= ((min(8589934591, 37)) >= (((((~-3) < (((!(arr_36 [i_8] [i_9 + 2] [i_10] [i_12])))))))));
                                var_25 += ((((((1 > 2589857423) ? -101 : (3233427214 == 562915593682944)))) ? ((max((arr_35 [i_12] [i_11] [i_10] [i_9 - 1] [i_8] [i_8]), (((arr_24 [i_8] [i_8]) ? (arr_30 [i_11] [i_10] [i_9 + 2] [i_8]) : 1))))) : (((arr_29 [i_8] [i_9 + 1] [i_11]) ? -1 : var_2))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_26 ^= ((-(arr_24 [i_9 + 2] [i_10 + 1])));
                        var_27 = (min(var_27, ((((0 ? -119 : (arr_26 [i_9]))) | (arr_29 [i_9 + 1] [i_10 + 1] [i_10 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_28 += (((arr_29 [i_9 + 1] [i_10 + 1] [i_10]) ? (arr_31 [i_10 + 1] [i_10 + 1] [i_9 + 2] [i_9 - 1]) : (arr_31 [i_10 + 1] [i_10] [i_9 - 1] [i_9 + 1])));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_29 = ((~(arr_31 [i_8] [i_9 + 1] [i_10] [i_14])));
                            arr_45 [i_10] [i_14] [i_10 - 1] [i_9] [i_10] = ((~(arr_24 [i_9 + 1] [i_14])));
                            var_30 = 5055659504699904021;
                            var_31 = 63;
                        }
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_32 += (arr_44 [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10]);
                            var_33 &= (arr_40 [i_8] [i_16]);
                        }
                        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                        {
                            var_34 = (arr_26 [i_9 - 1]);
                            var_35 = (arr_44 [i_8] [i_9] [i_10] [i_14] [i_17]);
                        }
                        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                        {
                            var_36 &= (((arr_31 [i_8] [i_9 + 2] [i_10 + 1] [i_14]) ? -134 : (arr_30 [i_8] [i_10 - 1] [i_9 + 1] [i_14])));
                            var_37 = var_14;
                            var_38 &= 920370881428800352;
                        }
                    }
                    var_39 ^= 11033;
                    var_40 = (max(var_40, (((~(arr_30 [i_8] [i_9] [i_9 - 1] [i_10 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
