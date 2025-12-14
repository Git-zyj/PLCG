/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((+(min(-2162, (((arr_1 [i_0]) ? (arr_0 [i_0]) : 5015))))));
        var_17 = ((~(arr_1 [16])));
        var_18 = (min(var_18, (((4294967295 ^ (!1))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 = ((-(max((arr_1 [i_1]), 8081123148150705216))));
        var_20 -= (((11868 ^ -32754) ^ ((-2951111287948384631 ^ (~-127)))));
        var_21 = ((!(arr_3 [i_1 + 2] [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_22 = ((4294934528 != (arr_11 [i_3] [i_4 + 2] [i_5 + 3] [i_4 + 2])));
                            arr_19 [i_6] [i_6] [i_6] = (((arr_15 [i_2] [i_2] [i_2] [11] [i_6]) && (arr_2 [i_4])));
                        }
                        var_23 = (min(var_23, (((!(arr_3 [i_2] [i_5 + 1]))))));
                    }
                }
            }
        }
        var_24 = 8210684589106954277;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_25 *= (min((((530015029 >> (-46 + 77)))), 173308644));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_26 = (((-1 - 907558646) | (((2509022272 ^ (-35560627 == 782157452))))));
                    var_27 += ((!((((arr_13 [i_9] [i_9] [i_7] [i_7]) ? (arr_13 [i_7] [i_7] [i_9] [i_7]) : (-2147483647 - 1))))));
                    var_28 = 49578;
                }
            }
        }
        var_29 += ((!(arr_25 [i_7] [i_7])));
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    arr_39 [i_11] [14] [14] = (~7382);
                    var_30 = ((+(((arr_33 [i_12] [i_12]) ? 32707 : ((min((arr_31 [i_10]), (arr_38 [i_10] [i_10]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    var_31 = (arr_38 [i_13 + 1] [i_13 + 1]);
                    arr_50 [i_14] [i_14] &= (arr_33 [i_13 + 1] [i_14 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
