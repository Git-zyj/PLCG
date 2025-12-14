/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((1 ? 6301986080988296795 : var_3)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 ^= (max((((var_15 ? 91 : (min((arr_0 [i_0]), var_6))))), (min(var_3, (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = max((arr_8 [11] [10] [0]), (!-1));
                    var_19 -= 1;
                }
            }
        }
        arr_9 [10] [4] = ((var_14 || ((!((!(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
        var_20 -= (max((15224696086995423263 % 15224696086995423247), -var_11));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = var_9;
        arr_13 [i_3] = (((1 - -92) ? (((arr_11 [i_3]) ? 2194410916916617657 : (arr_12 [i_3] [i_3]))) : ((((arr_10 [24]) + 103)))));
        arr_14 [i_3] = (max(48519, ((max(21, 15224696086995423283)))));
        arr_15 [i_3] = ((!((min((((~(arr_11 [i_3])))), (596781890716578394 ^ var_4))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 |= ((max((arr_18 [i_5]), (arr_18 [i_3]))));
                    var_23 = (min(var_23, (((!((((-92 ? var_15 : (arr_17 [24] [i_3]))))))))));
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        var_24 -= 81247588;
        arr_25 [1] = (~15224696086995423278);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = (max(var_25, (((((((arr_10 [2]) >> (12320946349041205673 - 12320946349041205645)))) ? (~var_9) : 101)))));
        arr_29 [i_7] [i_7] = (((((~(arr_18 [i_7])))) ? 85 : -124));
        var_26 = (arr_21 [i_7] [17] [1]);
    }

    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_27 ^= (min((arr_17 [i_8] [i_8]), ((~(arr_6 [i_8] [i_8] [i_8] [i_8])))));
        var_28 = (max(var_28, 24399));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_40 [i_10] = -19;
                    var_29 &= (6125797724668345948 % 6125797724668345943);
                    var_30 = (min(var_30, (~21387)));
                    var_31 ^= (((~var_1) * (((arr_6 [i_9] [7] [i_9] [i_9]) ? (arr_6 [i_9] [i_9] [i_11] [i_10]) : 15102780050319820331))));
                }
            }
        }
        var_32 = (((~(arr_7 [i_9] [i_9] [5] [i_9]))));
    }
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_33 = (max(var_33, 10339556604551252896));
            var_34 -= (arr_0 [i_12 + 2]);
            arr_46 [i_12] [i_12 + 1] [i_12] = (((arr_32 [i_12 + 1] [9]) - ((~(arr_26 [i_12])))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_35 = ((~(~1)));
            arr_50 [i_12] [i_12] = 36;
        }
        arr_51 [i_12] = (arr_35 [i_12]);
        var_36 = (max(var_36, 49152));
        arr_52 [i_12] [i_12] = (arr_3 [i_12 - 1] [i_12 - 1]);
    }
    var_37 = ((var_11 & (min((~-3876478943055624532), (max(7399844494196507185, var_6))))));
    #pragma endscop
}
