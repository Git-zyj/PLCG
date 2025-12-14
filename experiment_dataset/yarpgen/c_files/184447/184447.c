/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] = ((max(5502151512029864974, -5502151512029864985)));
                            var_13 = (((arr_7 [i_1] [i_0 + 1] [i_0 + 1]) ? (arr_7 [i_0] [i_0 + 1] [1]) : (arr_7 [i_0] [i_0 + 1] [i_0])));
                        }
                        arr_15 [i_0] [i_3] [18] = 5390570116627569755;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_14 *= (~0);
                        var_15 ^= ((!(arr_7 [18] [i_0] [i_0 + 1])));
                        var_16 = (((arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 3487198381916705370 : (arr_4 [i_0 + 1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((-((~(arr_11 [17] [6])))));
                                arr_26 [i_0] [i_6] [i_0] [i_7] = 213;
                                var_17 *= ((arr_23 [i_0 + 1] [i_0 + 1] [i_7 + 2] [i_0 + 1] [i_0 + 1]) + ((min(3487198381916705363, ((((arr_5 [i_1] [i_7]) ? (arr_18 [i_2]) : var_1)))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((~((-((~(arr_8 [i_0] [i_0] [i_0])))))));
        var_19 ^= (9 / 1);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_33 [i_0] [i_9] [i_9] [i_0] = 15;
                    arr_34 [i_0] [i_0 - 1] [i_9] [i_0 - 1] = var_4;
                    var_20 += (~-var_6);
                    var_21 = (min(var_21, (((!(((-(arr_28 [i_0 + 1] [i_8] [i_8])))))))));
                }
            }
        }
        var_22 ^= ((-(((((~(arr_29 [i_0] [10] [i_0] [i_0 - 1]))) == 49)))));
    }
    var_23 *= var_6;
    var_24 = var_5;
    #pragma endscop
}
