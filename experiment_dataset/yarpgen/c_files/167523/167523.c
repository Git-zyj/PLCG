/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? ((min(var_12, var_8))) : ((var_3 ? var_5 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (134152192 & -5107992762640034946);
                    var_17 = (min(var_12, (((var_15 && var_10) ? (!var_14) : (arr_9 [i_0] [3] [i_2])))));
                }
            }
        }
    }
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    var_19 |= ((((~(((arr_16 [i_4]) ? (arr_4 [i_4] [i_5 + 1]) : (arr_8 [i_4] [2]))))) != 5107992762640034945));
                    arr_20 [i_3] [i_5] = ((var_7 ? (arr_6 [i_3] [i_5 + 1] [i_5]) : ((var_0 ? (arr_6 [i_4] [i_5 + 1] [1]) : (arr_6 [i_4] [i_5 + 1] [i_5 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
