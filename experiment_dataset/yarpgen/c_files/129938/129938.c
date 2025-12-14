/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (arr_5 [i_0 - 1] [i_1 - 1] [i_1] [1]);
                    arr_6 [i_0] [i_1 - 1] = (min((((arr_4 [i_0] [2] [i_0 - 1] [i_0]) ? (min(var_2, (arr_5 [i_2] [i_2] [0] [i_0]))) : (((arr_5 [4] [i_1] [i_1] [7]) << (arr_3 [i_1 - 1] [i_1 - 1]))))), (arr_0 [i_0] [0])));
                }
            }
        }
    }
    var_16 = var_13;
    var_17 = (((min(((var_13 ? var_5 : var_13)), -var_4)) % ((min(var_2, var_13)))));
    var_18 = var_3;
    #pragma endscop
}
