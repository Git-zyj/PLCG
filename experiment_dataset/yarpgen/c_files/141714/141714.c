/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 *= ((+((60 ? (arr_0 [i_0] [i_1]) : 1))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 |= (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2]) ^ (max((arr_12 [4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4]), 2147483647))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] = (((((min(var_9, (-2147483647 - 1)))) | (arr_4 [i_0] [i_4 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                var_21 = ((-2147483623 ? (min((var_2 / var_15), ((max(var_15, (arr_15 [11] [i_6 + 1])))))) : ((-((var_14 ? var_8 : (arr_16 [i_6 + 2])))))));
                arr_20 [i_6 - 1] [i_6] [9] = (min((((((var_5 ? (arr_19 [i_5] [i_5]) : var_11))) ? (arr_17 [i_5]) : (!var_10))), ((((var_13 | var_9) && var_1)))));
            }
        }
    }
    #pragma endscop
}
