/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] |= ((~((((min(-1188875740, var_2))) ? var_6 : (min((arr_0 [i_0]), 9223372036854775807))))));
                    var_13 = arr_3 [i_1];
                }
            }
        }
        var_14 = (((var_1 <= var_2) ? (((arr_2 [i_0] [9]) ? (((~(arr_2 [i_0] [i_0])))) : (arr_5 [i_0]))) : (25 & var_3)));
    }
    var_15 = var_1;
    var_16 |= var_4;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_17 = (max(var_17, ((((arr_4 [i_3] [i_3] [i_3]) || (arr_4 [i_3] [i_3] [i_3]))))));
        var_18 ^= 96;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = (((arr_7 [i_5 + 2] [i_5 + 1] [3]) ? (arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 1]) : var_5));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_20 = 94;
                        var_21 = (min(var_21, (((~(!134215680))))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 *= (((((var_5 ? 87303047 : (arr_11 [i_7] [i_4] [i_5 + 2])))) ? (arr_9 [i_5]) : ((~(arr_13 [i_3] [i_3] [17] [i_7])))));
                        arr_21 [2] [1] [2] [i_7] = (((118 ? 96 : var_0)));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_23 -= ((87303047 ? (arr_1 [i_8]) : ((-87303048 ? ((var_3 ? var_6 : (arr_20 [11] [11]))) : (((min(var_8, (arr_18 [i_8] [i_8] [15] [12] [8])))))))));
        var_24 = ((var_7 % (((((2066963027 ? -117 : 96))) ? (min((arr_0 [i_8]), var_1)) : ((17242138896409188710 ? var_12 : (arr_7 [i_8] [i_8] [12])))))));
        var_25 = (arr_19 [i_8] [i_8 + 1] [i_8 - 1]);
    }
    var_26 = (((!(var_7 || var_7))));
    #pragma endscop
}
