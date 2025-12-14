/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 ^= ((~((-((min((arr_5 [i_2]), 1)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((((arr_0 [i_3 + 1] [i_1 + 1]) != (arr_0 [i_3 + 1] [i_1 + 1]))) ? (((var_16 ^ var_16) | 762657608)) : (arr_1 [i_1] [i_2]));
                        }
                    }
                }
                arr_11 [i_0] &= (max(910221073923042489, 1));
            }
        }
    }

    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = var_7;
        arr_16 [i_4] &= -1;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    {
                        var_21 = ((~((~((var_15 ? (arr_17 [i_5] [i_7]) : var_5))))));
                        var_22 ^= ((-1497824310 ? ((var_5 ? var_6 : (arr_23 [i_6 - 1] [i_6 - 1]))) : ((min((arr_24 [i_8 - 2] [i_6 - 2] [i_7] [i_8 - 1]), ((-762657610 && (arr_21 [i_5] [i_5] [i_5]))))))));
                        var_23 |= (max(8087585040902392471, 8094748056200955615));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_34 [i_10] [i_9 - 1] [i_9 - 1] = ((var_19 ? ((max((arr_21 [i_9 - 4] [i_10] [i_10]), (arr_30 [i_9 + 1] [i_9 + 1])))) : ((((var_7 ? (arr_18 [i_9] [i_9]) : var_8))))));
                    var_24 = (max((((((1 ? 241 : 1246572522))) ? var_13 : (arr_26 [i_5] [i_9] [i_10] [i_10]))), -var_1));
                }
            }
        }
        arr_35 [i_5] = (max(((((max(1, 3510215288984312495))) ? (arr_17 [i_5] [i_5]) : var_9)), ((~(arr_24 [i_5] [i_5] [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_25 = (min(var_25, (((37 ? 1 : 7458974881594036593)))));
                        arr_45 [i_12] [i_12] = (arr_30 [i_12] [i_14]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 21;i_16 += 1)
            {
                {
                    arr_51 [i_16] [i_16] = (arr_17 [i_11 - 3] [i_16 - 2]);
                    var_26 = arr_20 [i_11] [i_15] [i_16 + 3];
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                arr_56 [i_17] [i_18] [i_17] [i_17] [i_15] = (((arr_18 [i_16 + 2] [i_11 + 1]) / (arr_18 [i_16 + 3] [i_11 - 3])));
                                var_27 = -36028522141057024;
                                arr_57 [i_11] [i_11] [i_11] [i_11 - 2] [i_11] [i_11] = ((1497824309 % (arr_26 [i_11] [i_11] [i_11] [i_11 - 2])));
                                var_28 = (max(var_28, var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(4230798631409792313, (((((min(1, var_19))) ? var_2 : var_11)))));
    var_30 |= ((-(var_5 && 0)));
    #pragma endscop
}
