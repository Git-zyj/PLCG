/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (var_1 << (var_6 - 41875));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, (var_0 ^ 4577204769658239393)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 ^= ((~(arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 1])));
                                var_14 = var_8;
                                var_15 ^= ((var_0 ? 246 : var_2));
                                var_16 = (max(var_16, ((((arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]) ? ((((arr_0 [i_1]) - (arr_8 [i_2] [i_0] [i_1 - 1] [i_2] [i_2] [8])))) : (min((246 & var_5), var_8)))))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_1] [i_0] = ((54768 && var_0) | var_7);
                }
            }
        }
        var_17 |= -117;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_21 [i_6] [i_6] [i_5 + 2] [i_6] = (arr_15 [i_5 - 4]);
                        var_18 += ((246 << (((-1 && var_1) >> (138 - 133)))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_19 &= ((~((23 ? (arr_8 [i_5] [2] [i_5] [10] [i_8] [i_8]) : (arr_7 [i_5 - 3] [i_5 - 3] [i_7 + 1])))));
                            var_20 = ((~((max((arr_17 [13] [i_5 - 2] [5]), 54768)))));
                            var_21 ^= (arr_0 [i_6]);
                            var_22 = (max(var_22, ((min(9, (((((((arr_7 [i_0] [i_0] [0]) ? 238 : var_3))) ? (max(var_3, var_8)) : (arr_9 [i_8] [i_8] [i_7] [i_0] [i_0] [i_8])))))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_28 [1] [13] [i_6] [13] [i_9] = var_2;
                            var_23 = (((arr_26 [i_7 + 1] [i_7] [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 - 1] [i_7 - 3]) ? (arr_10 [i_0] [i_5] [i_0] [i_7 - 2] [i_7 - 2]) : 117));
                            var_24 *= (((((7090 ? 9 : 54768))) * (max((((arr_12 [i_9] [i_9] [i_5] [12] [i_5] [i_0] [i_0]) ? 64 : 1908450253961625738)), ((((arr_17 [i_5] [i_5] [i_5]) || 3852)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            {
                var_25 = (min(var_25, ((((arr_19 [i_11] [i_11] [4] [i_10] [i_10 + 1]) >= (arr_19 [i_10 + 1] [i_11] [4] [4] [i_10]))))));
                var_26 ^= 1;
                var_27 = ((((arr_8 [i_10] [i_10 - 1] [i_10] [5] [i_10] [i_10 + 1]) ? var_3 : (arr_30 [i_10] [i_10 - 1]))));
            }
        }
    }
    var_28 = (((max(var_8, ((var_7 ? var_7 : var_8)))) < var_7));
    #pragma endscop
}
