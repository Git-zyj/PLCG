/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 - 2] [20] = (((arr_4 [i_0] [i_2] [i_3] [i_4]) * (((arr_4 [i_0] [2] [i_4] [i_4]) / (arr_4 [i_2] [i_1] [i_0] [i_0 - 2])))));
                                var_11 ^= var_8;
                                var_12 -= (max(-1269584234, (((((arr_4 [i_0] [i_1] [i_2 + 1] [i_3]) ? var_3 : var_3)) / (((arr_7 [i_0] [11] [19] [i_3]) ? (arr_10 [i_0] [i_1]) : var_2))))));
                            }
                        }
                    }
                }
                var_13 = 438991779;
            }
        }
    }
    var_14 = (var_6 ^ -28293);
    var_15 = var_3;
    var_16 = ((var_4 & ((-var_7 ? 2633834916 : var_5))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            {
                arr_19 [i_6] = (max((arr_9 [i_5] [i_5] [i_5] [1] [i_5] [11] [i_6 - 4]), ((((!(arr_18 [i_5]))) ? ((var_2 ? (arr_12 [i_5] [i_6]) : var_3)) : (arr_13 [i_5])))));
                var_17 = (min((max((arr_10 [i_5] [i_6 - 3]), (arr_16 [i_6] [i_5] [i_5]))), (((arr_7 [i_6 - 4] [i_6 - 1] [i_6 - 1] [i_6 + 1]) ? (((var_7 ? (arr_0 [i_5] [i_5]) : (arr_18 [i_5])))) : ((var_8 ? 32767 : var_9))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_18 = ((-(min((arr_14 [i_7 - 1]), -28293))));
                            var_19 = var_1;
                            var_20 = (((((((arr_4 [i_8 + 1] [i_7 + 1] [20] [i_5]) & (arr_22 [i_5] [i_7] [i_7]))))) >> ((((-1269584234 ? var_3 : ((((arr_14 [i_5]) ? var_6 : (arr_7 [i_5] [i_5] [i_6] [i_5])))))) - 1891017025))));
                        }
                    }
                }
                var_21 ^= (((+((1269584233 ? (arr_13 [i_5]) : (arr_3 [i_5]))))));
            }
        }
    }
    #pragma endscop
}
