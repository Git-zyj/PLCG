/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (min(((var_9 >> (((max(var_6, var_17)) - 90149392)))), (((min(var_11, var_5))))));
    var_20 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [1] [i_2] = ((-(((((((arr_0 [i_0]) ? var_1 : var_12))) && var_14)))));
                    var_21 = (arr_5 [i_2 - 3] [i_1] [i_0 + 2]);
                    arr_10 [i_0] [i_1] [i_2] [i_2 - 2] = (min(((max(var_13, (max((arr_7 [i_2] [i_2] [i_2 - 1]), var_1))))), (~var_8)));
                }
            }
        }
    }
    #pragma endscop
}
