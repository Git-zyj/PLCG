/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((min((33554431 & 33554431), (33554449 ^ -33554454)))) ? var_6 : var_5);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1 + 2] [i_2] [i_3] = (min((arr_2 [i_0]), ((min((((arr_3 [i_0]) / 114)), (arr_0 [i_0]))))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = 0;
                        var_12 -= ((min(var_5, (arr_7 [i_1] [i_1 + 2] [i_1 - 3]))));
                    }
                }
            }
        }
        var_13 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_9 [i_0] [i_0] [i_0]))) ^ 9423));
        var_14 *= arr_5 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_15 = -4721756714741479480;
                    var_16 = (min(var_16, ((((arr_21 [i_4] [i_4] [i_4]) ? 1 : 33554454)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((13495899698247939051 || var_7) + var_3)))));
                                arr_26 [i_5] [i_5] [i_5] [i_7] [i_5 - 2] [i_7] [i_4] |= (arr_24 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 1]);
                            }
                        }
                    }
                    var_18 = ((~(arr_20 [i_4] [i_4] [i_6] [i_5 - 1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_19 -= (((arr_30 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 - 1]) ? (arr_28 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : 33554454));
                                arr_32 [i_4] [i_4] = ((40536 ? (arr_27 [i_5] [i_5 - 1] [i_5 - 2] [i_10 + 1] [i_10 - 1] [i_5 - 2]) : 0));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_4] = var_3;
    }
    var_20 &= var_0;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                arr_39 [i_11] [i_11] = (min((((((min(-109, (arr_23 [i_11] [i_11] [i_11])))) ? (arr_16 [i_12]) : (-33554450 - 253)))), (min(var_7, (6449550992702433295 / 7042383557807002329)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((((arr_31 [i_13] [i_14]) ? 12072 : 12072))) ? ((((!(arr_31 [i_11] [i_12]))))) : -1492534559))));
                            var_22 ^= (arr_37 [i_11]);
                            var_23 = 1;
                        }
                    }
                }
                var_24 = 1;
            }
        }
    }
    #pragma endscop
}
