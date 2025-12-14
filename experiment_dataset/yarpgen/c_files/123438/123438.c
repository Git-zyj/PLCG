/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 -= (min((arr_1 [4] [4]), (arr_4 [i_0])));
                var_19 = ((var_12 > 0) ? (((((arr_5 [9] [9] [i_0]) == var_6)))) : (min((var_2 - var_9), (min((arr_5 [i_0] [i_1] [i_1 + 1]), (arr_3 [i_1 - 1]))))));
                var_20 = 252;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_21 = (((((((((arr_6 [i_2] [i_2]) ? var_8 : var_9))) ? (4055055451 - var_1) : (arr_7 [i_3])))) ? 1148691742 : (min(var_14, (arr_11 [1] [1] [1])))));
                var_22 = ((10 ? (arr_11 [i_2] [i_3] [i_3]) : var_6));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] = var_7;
                                var_23 = min((((min((arr_6 [13] [13]), 65535)) & (min((arr_7 [i_2]), (arr_15 [i_3] [i_4] [i_4] [i_6]))))), 34359738367);
                                var_24 = (~var_1);
                            }
                        }
                    }
                }
                var_25 = ((var_10 ? (min((((~(arr_9 [10])))), (arr_12 [i_2] [i_2]))) : (arr_16 [9] [9] [i_3] [9] [i_2])));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = ((var_3 <= (((((-5626186613340144222 ? (arr_19 [i_2] [i_2] [i_2] [i_2]) : 1006281491))) ? -2147483637 : (((arr_9 [i_2]) ? var_2 : (arr_23 [i_2] [i_3] [i_2] [i_8] [i_8])))))));
                                var_27 ^= ((-5626186613340144232 ? 329054809975918414 : ((((min((arr_22 [i_2] [i_2] [5]), (arr_11 [i_3] [i_3] [i_3])))) / (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = ((((min((max(var_2, var_13)), var_8))) ? var_9 : ((min((var_16 <= var_2), (min(var_16, var_5)))))));
    #pragma endscop
}
