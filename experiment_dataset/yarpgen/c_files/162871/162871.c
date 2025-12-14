/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = arr_5 [3] [i_0];
                    var_14 = var_13;
                    var_15 += ((((9223372036854775807 ? var_11 : (max((arr_8 [i_0] [1] [i_2] [i_2]), 1)))) + (arr_4 [i_1] [i_1])));
                }
            }
        }
    }
    var_16 = ((((-((var_3 ? 1 : var_8)))) != (min(2834173854446961596, 1))));
    var_17 = (max((3135022162250319370 == 1), (min(((var_9 ? var_2 : var_8)), ((max(var_1, var_7)))))));
    var_18 = (max(var_18, (((((((var_0 ? var_12 : var_1))) ? ((var_2 ? var_8 : var_4)) : var_6)) <= 0))));
    #pragma endscop
}
