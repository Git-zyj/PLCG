/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_0] [i_2] [i_0] [5] = var_8;
                                var_13 = (max((((arr_7 [i_0] [i_3] [i_2] [i_0]) ? (arr_7 [i_0] [3] [i_0] [i_0]) : -1883718262)), (14336 ^ 387538419)));
                                var_14 = (min(var_14, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_9 [8] [i_1] [i_1] [i_3] [12])))) <= (((arr_9 [8] [8] [i_2] [i_3] [i_4]) ? var_4 : (arr_7 [i_0] [i_2] [i_1] [i_1]))))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = ((((max((arr_9 [i_0] [i_0] [i_1] [i_1] [i_0]), (arr_9 [i_1] [i_1] [i_1] [i_0] [i_0])))) ? 109 : (arr_9 [i_0] [i_1] [i_0] [i_0] [i_1])));
            }
        }
    }
    var_15 *= ((((((var_3 | 1) ? 4294967288 : (min(var_3, var_1))))) <= ((var_11 ? 3423098553137258717 : 1))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_6] [i_6] = (((var_4 / 34340) / 1206227000));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_16 = (1148417904979476480 || 4294967288);
                    var_17 += (~108);
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_24 [i_5] [i_6] [i_6] = -9051942833023011477;
                    var_18 ^= (((((var_8 ? (arr_19 [i_5] [i_6] [i_8] [i_8]) : var_2)) / 32767)));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_28 [i_5] [i_6] [2] [i_6] = (max(var_1, (((var_0 ? var_6 : (arr_5 [i_6] [i_6] [i_6]))))));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_19 = var_4;
                        var_20 = var_6;
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_21 = var_8;
                        arr_34 [i_6] [i_5] [i_5] [i_5] = 19101;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_22 = min(4294967282, 3994732724);
                        var_23 = ((((max((arr_27 [i_6] [i_6]), (arr_27 [i_6] [i_6])))) && ((((arr_27 [i_6] [i_12]) ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6]))))));
                    }
                }
                var_24 = (min(var_24, (((((!(((~(arr_14 [i_5] [i_6])))))) ? (~var_1) : var_10)))));
            }
        }
    }
    #pragma endscop
}
