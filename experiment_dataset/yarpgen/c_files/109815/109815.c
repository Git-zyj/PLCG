/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? var_8 : var_6));
    var_21 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_22 -= (min((((((~(arr_0 [i_0]))) < (((!(arr_3 [i_0] [i_0] [i_0]))))))), ((240 / (var_10 / var_8)))));
                var_23 = (min(var_23, ((max(((-20364 ? ((65525 ? 22682 : 6231)) : ((8790 ? (arr_0 [4]) : -22686)))), (max((((arr_0 [15]) & (arr_3 [i_0] [13] [i_0]))), 57955)))))));
                var_24 = (arr_2 [8]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3 - 3] [i_2] [2] = ((-(arr_11 [i_2] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 ^= (max(((((var_13 ? var_5 : (arr_7 [2] [2]))) | (min((arr_6 [i_2]), var_11)))), ((~(((arr_10 [4] [i_2]) ? (arr_2 [i_2]) : (arr_16 [8] [8] [i_4] [8] [i_6])))))));
                                var_26 = (arr_10 [i_2] [i_5 - 2]);
                            }
                        }
                    }
                    var_27 = (arr_7 [i_2] [i_3 + 2]);
                    var_28 |= (max((((arr_14 [i_3 + 3] [i_3 + 3] [i_3 - 3] [6] [i_3 - 2]) ? var_7 : (((arr_9 [i_2] [i_3] [i_4] [2]) ? (arr_4 [9] [9]) : (arr_16 [1] [9] [i_2] [i_3 - 3] [i_4]))))), (min(((~(arr_10 [0] [i_3 - 3]))), var_4))));
                }
            }
        }
    }
    #pragma endscop
}
