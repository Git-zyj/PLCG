/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(var_9, 2147483647)) - var_7))) ? -214 : ((max(var_11, var_1)))));
    var_14 |= (!var_7);
    var_15 = (min(var_15, (((var_6 ? (((((var_3 ? var_6 : var_7))) ? (min(var_4, var_4)) : (-3269 / var_0))) : (((-((3279 ? var_0 : var_2))))))))));
    var_16 |= ((min(((var_6 ? -32753 : var_2)), -1822334487)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 -= ((((((-(arr_10 [i_0]))))) ? (arr_12 [i_0]) : ((+(min((arr_11 [i_0 + 1] [i_1] [i_1] [i_0 + 1]), -32765))))));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [10] [i_0] = (min((((arr_2 [i_0]) ? 65535 : ((max((arr_8 [1] [i_4] [15]), var_5))))), (((var_7 ? ((((arr_7 [16] [i_3] [i_2 - 1]) && -32761))) : (arr_3 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                var_18 = (max((arr_12 [10]), (max((arr_13 [16] [i_1] [i_0 - 1] [i_0] [16]), ((-46 ? var_2 : (arr_5 [i_0] [9])))))));
            }
        }
    }
    #pragma endscop
}
