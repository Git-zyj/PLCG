/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = (max(((((~1944184387) >= var_12))), (min((((~(arr_7 [i_4] [i_1] [i_1])))), (arr_11 [i_0] [i_4])))));
                                arr_16 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = ((2350782904 ? ((0 ? 15 : 0)) : ((127 ? 0 : (-127 - 1)))));
                            }
                        }
                    }
                }
                var_15 = (min((arr_3 [i_0] [i_1]), ((~(arr_3 [i_0] [i_1])))));
                var_16 = ((((((arr_9 [i_1]) ? ((var_10 ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_1] [i_1]))) : (arr_3 [i_1] [i_0])))) ? (min(1944184391, 1944184387)) : (arr_3 [i_0] [i_0])));
                var_17 -= (((((((var_5 ? (arr_2 [3]) : (arr_12 [i_0] [i_1] [7] [17] [i_0] [i_1] [i_1])))) ? (var_5 % 1) : (~var_14)))) ? (~-10380) : ((var_9 + ((-50 / (arr_11 [2] [i_1]))))));
            }
        }
    }
    var_18 = ((((var_2 ? (var_0 ^ var_14) : var_3))) ? ((((max(var_4, 16128)) & var_8))) : ((((((var_10 + 9223372036854775807) >> (var_7 - 141)))) ? var_13 : (~var_7))));
    var_19 = ((var_0 ? (max(-18513, 134216704)) : (((max(72057594037927935, var_14))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 -= var_14;
                                var_21 = ((2350782893 << (1429 - 1411)));
                                arr_29 [i_8] [i_6] [i_8] [i_9] [i_9] = ((~(((((24576 ? 140737488354816 : var_14))) ? (arr_24 [i_8]) : var_13))));
                            }
                        }
                    }
                    arr_30 [i_7] [i_7] [i_7] = (min((((((var_10 ? var_5 : -7452))) ? (min(var_10, var_13)) : -125)), (((-(-127 - 1))))));
                }
            }
        }
    }
    var_22 = ((((((var_3 * var_3) ? var_2 : var_12))) ? (var_1 / var_2) : (((((min(var_11, var_1))) ? (32011 + 1) : var_2)))));
    #pragma endscop
}
