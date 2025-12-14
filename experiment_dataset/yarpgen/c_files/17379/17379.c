/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = var_8;
    var_20 ^= (min((((var_16 ? 32767 : var_13))), (min(var_0, -5449766028045529971))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_1] [i_0]) ? -1086034320 : (((var_5 <= 1177165858) ? (min(2147483632, var_0)) : var_8))));
                                var_21 = (min(var_21, (((((min((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_4] [i_2] [i_0]) : 20)), (arr_10 [i_2 - 1] [5] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2])))) ? var_17 : ((~(arr_8 [i_1]))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = (((((arr_1 [i_2 - 2]) <= 127)) ? (((arr_4 [i_0] [i_2 + 2]) & (arr_4 [i_2] [i_2 + 2]))) : (!2118855636)));
                    arr_15 [i_0] [i_0] |= (min((((((min(2118855636, 3680900758))) == var_0))), (max(((min(var_13, var_10))), (max(var_12, -19))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = var_9;
                                arr_22 [i_6 + 2] [i_5] [i_2] [i_5] [i_0] = var_16;
                                arr_23 [i_0] [i_1] [i_2 - 2] [i_5 - 1] [i_5] = (min((arr_10 [i_0] [i_1] [i_6 - 2] [i_2 - 1] [12] [i_5]), (((!(((arr_16 [i_6 + 1] [17] [i_1] [i_0]) == (arr_11 [i_0] [i_0] [i_0] [i_5 + 2] [i_1] [i_0]))))))));
                                var_23 = ((var_13 ? (arr_8 [i_1]) : (max(614066547, (!228)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= var_4;
    #pragma endscop
}
