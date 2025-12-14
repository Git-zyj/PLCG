/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [11] [i_0] = (arr_7 [0] [i_1] [i_0]);
                    arr_9 [2] [i_1] [i_2] [i_0] = (arr_6 [i_1] [i_1] [i_2 + 1] [i_0]);
                }
            }
        }
    }
    var_19 = (min(var_19, ((min((!var_8), ((var_14 ? var_14 : var_12)))))));
    var_20 |= (min(var_15, (min(var_8, ((min(var_9, var_16)))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [i_3] = (arr_1 [i_3]);
                var_21 = (min(var_21, ((((((arr_2 [i_3] [i_4] [i_4]) ? 14250394093879468478 : var_8)) ^ (arr_0 [i_3 - 2]))))));
                var_22 = min(((var_7 * (arr_5 [i_3] [i_3 - 1]))), (((arr_7 [i_3 - 2] [i_3 - 2] [i_3]) ? (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2]) : 48)));
            }
        }
    }
    #pragma endscop
}
