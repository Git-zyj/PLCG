/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, (((+((((arr_0 [i_0]) == var_15))))))));
        var_19 = 2165532069;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_11 [i_1] = (~(arr_3 [i_3 - 1]));
                        var_20 = (arr_5 [i_4] [i_3]);
                        var_21 = (31 - var_9);
                        var_22 = (max(var_22, var_5));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_17 [i_5] [i_1] = (~var_17);
                    arr_18 [i_1] [i_5] [i_5] [i_5] = (((((var_5 % ((var_14 % (arr_2 [i_1])))))) + (min((arr_2 [i_1]), (arr_8 [i_1 + 3])))));
                    arr_19 [i_1] [i_1] [i_5] [i_6] = (((((arr_16 [i_1 + 3] [i_1] [i_1 + 3] [i_1]) ? 183 : (arr_3 [i_1 + 3])))) ? (max(-var_14, ((min(var_15, 127))))) : (((((var_2 == (arr_9 [i_1] [i_5] [i_6]))) ? ((var_15 * (arr_4 [i_1]))) : var_2))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_23 [i_7] [i_6] [i_6] [i_1] &= var_11;
                        var_23 = (arr_9 [i_1] [i_1 - 1] [i_1 + 2]);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_1 + 2] = (arr_8 [i_1 + 3]);

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_29 [i_1] [i_1] [i_6] [i_8] [i_6] = ((~(21 || 127)));
                            arr_30 [i_1] [i_1] = (((arr_27 [i_5] [i_1 + 3] [i_1 + 3] [i_8] [i_9]) ? (((min(var_1, (arr_14 [i_6] [8]))))) : (((arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_8] [i_9] [i_9]) ? (arr_21 [10] [4] [i_6] [i_8] [11] [i_9]) : (arr_21 [i_1] [4] [i_6] [i_8] [i_9] [i_9])))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            arr_33 [4] [i_1] [12] [i_1] [i_1 + 3] = (!var_13);
                            arr_34 [i_1] [i_5] [0] [16] = var_9;
                        }

                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            arr_38 [i_1] [i_1] = (((min(((-(arr_8 [i_1]))), (arr_32 [i_1] [16] [i_1]))) * (arr_28 [i_1] [i_5] [0] [i_6] [i_8] [i_5] [i_11])));
                            var_24 = (var_9 || var_12);
                            var_25 = (min(var_25, (((((var_14 / var_3) << (var_0 + 104)))))));
                            var_26 = ((65535 ? 511569119 : 15227808285781053382));
                        }
                        var_27 -= (((((var_16 << (((((arr_5 [i_6] [4]) ^ var_6)) + 28124))))) ? var_16 : (max((var_3 / var_4), var_12))));
                    }
                    var_28 ^= ((((((var_7 ? var_1 : var_6))) ? var_10 : (arr_8 [i_1]))) % var_2);
                }
            }
        }
        var_29 = (min(var_29, (((!((((arr_35 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) % (arr_35 [i_1 + 1] [i_1 + 3] [4] [4])))))))));
    }
    var_30 = -6278;
    #pragma endscop
}
