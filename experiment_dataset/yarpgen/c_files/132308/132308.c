/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_3 ? var_8 : var_5))) ? var_5 : (var_0 < var_4))) & ((max((var_2 && 89), var_3)))));
    var_21 = 1722;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 ^= ((((((arr_0 [i_0]) + (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : ((((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        var_23 = max((arr_1 [i_0] [i_0]), ((((!-4) >= ((min(32764, 116)))))));
        var_24 = ((-(((!(arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_4 [12] = ((3 >= var_8) ? ((var_1 ? (arr_3 [i_1] [i_1]) : 1)) : (arr_3 [i_1 + 1] [i_1 + 1]));
        var_25 = (min(var_25, (((-((var_3 >> (var_0 + 83))))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_26 = ((((((~-1) ? (arr_6 [i_2] [i_2]) : ((((arr_7 [i_2]) <= (arr_7 [i_2]))))))) ^ (min((~-1), (((arr_7 [i_2]) ? (arr_6 [3] [i_2]) : var_12))))));
        arr_8 [1] &= ((-(min(12336299383082201488, 1))));
        var_27 = min(var_19, (max(12, ((-1 ^ (arr_6 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                {
                    var_28 *= (((((arr_11 [i_4] [i_3] [i_2]) | var_17)) > (((((3314919687367382214 & (arr_7 [i_2]))) >> (((arr_9 [i_2] [i_2] [i_2]) + 24602)))))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_29 ^= (-1 ? (arr_6 [i_5 - 1] [i_5 - 1]) : 4119106186);
                        var_30 = (max(var_30, ((((var_11 && var_14) ? ((((arr_12 [i_5]) != (arr_12 [i_2])))) : (arr_11 [i_2] [i_4 - 1] [i_5]))))));
                        var_31 = (!-1);
                    }
                    arr_16 [1] [i_3] [i_3] [1] = ((((((((-1 ? (arr_6 [9] [i_3]) : (arr_15 [3] [i_3])))) ? (((-1964481627883774473 ? 24 : 0))) : ((-55 ? (arr_15 [i_2] [2]) : 0))))) ? ((min((~-123), ((var_14 ? var_10 : var_2))))) : ((2 & (65517 | -7148590850373057509)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_32 = (((arr_15 [15] [i_6]) ? (arr_10 [i_6]) : (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_19 [i_6] [i_6] = (((arr_2 [i_6] [20]) << (((arr_2 [i_6] [12]) - 33))));
        arr_20 [i_6] &= var_6;
        arr_21 [i_6] = ((~(arr_13 [i_6] [i_6] [1] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
