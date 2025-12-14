/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 -= arr_0 [i_0];
        arr_2 [i_0] [i_0] = (((((~(arr_0 [i_0 + 1])))) ? (((arr_0 [i_0 + 1]) >> (arr_0 [i_0 - 1]))) : ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 -= (((((arr_4 [i_0 + 1]) << (((arr_5 [i_1] [i_1]) ? (arr_9 [i_0] [10] [i_0] [i_3]) : (arr_1 [11] [i_2])))))) ? ((-(arr_5 [i_0 - 1] [i_3 + 1]))) : (arr_4 [i_0]));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_19 *= arr_10 [i_0] [i_0 - 1] [i_4] [i_2] [8] [i_4];
                            var_20 = ((((min((arr_6 [i_3 - 2] [i_1] [1]), (arr_11 [i_0 - 1] [i_1] [i_1 - 2] [2] [i_3 - 1])))) ? (((arr_11 [i_4 - 2] [i_3 - 1] [i_2] [i_1 + 1] [5]) % (max((arr_1 [6] [8]), (arr_5 [i_0] [i_0]))))) : (((((-(arr_3 [i_2]))))))));
                        }
                        arr_13 [4] [4] [4] |= (((((arr_9 [i_3 + 1] [i_2 - 1] [i_1 - 1] [i_0]) ? (((arr_6 [i_0] [i_0] [i_3]) | (arr_1 [3] [8]))) : (arr_4 [0]))) | ((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1]))))));
                        var_21 -= (((((arr_7 [i_0 + 1] [6] [i_0 + 1]) / (arr_7 [i_0 - 1] [i_0] [i_0 - 1]))) == (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        arr_14 [5] [5] [i_3] [i_3] = (max(((max((((arr_3 [i_1 - 3]) ? (arr_11 [i_0] [1] [1] [i_2 + 3] [i_2 + 3]) : (arr_8 [9] [i_2] [9]))), ((((arr_1 [i_0] [i_3]) || (arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 + 1]))))))), (max(((-(arr_3 [i_2]))), (((~(arr_8 [i_0] [i_1] [i_3]))))))));
                    }
                }
            }
        }
        var_22 = (max((((((arr_1 [i_0] [i_0]) != (arr_6 [1] [i_0] [11]))) ? (((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_8 [0] [0] [1]) : (arr_8 [8] [6] [i_0]))) : (((max((arr_10 [i_0] [i_0] [8] [i_0] [i_0 - 1] [i_0]), (arr_10 [i_0 - 1] [i_0] [2] [i_0 + 1] [2] [i_0]))))))), (~2528368209)));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    {
                        var_23 ^= ((+(((arr_24 [6] [i_5 + 1] [i_5] [6]) & (arr_24 [i_6] [i_5 + 2] [9] [i_0])))));
                        var_24 += ((((((~(arr_12 [i_6])))) ? (((~(arr_11 [i_0] [i_7 + 3] [i_6] [i_0] [i_0])))) : (max((arr_12 [i_7]), (arr_18 [i_5] [2]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = (((-(arr_26 [i_8]))));
        var_25 += ((((arr_27 [i_8]) <= (arr_27 [i_8]))));
        var_26 = ((min((arr_25 [8] [1]), (arr_27 [i_8]))));
        arr_29 [i_8] = (min((((!((min((arr_26 [6]), (arr_27 [i_8]))))))), (((arr_25 [i_8] [i_8]) ? (arr_25 [i_8] [i_8]) : (arr_25 [i_8] [i_8])))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_27 = ((((((arr_26 [8]) ? (arr_27 [8]) : (arr_27 [17])))) && ((((arr_25 [i_9] [i_9]) / (arr_25 [i_9] [i_9]))))));
        arr_33 [i_9] [i_9] |= ((((((arr_32 [i_9]) ? (arr_31 [i_9]) : (arr_31 [i_9])))) ? (((arr_31 [i_9]) ? (arr_25 [i_9] [21]) : (arr_25 [i_9] [12]))) : ((~(arr_25 [i_9] [i_9])))));
    }
    var_28 = (var_15 ^ ((var_7 ? (var_8 && var_8) : var_5)));
    var_29 ^= var_10;
    #pragma endscop
}
