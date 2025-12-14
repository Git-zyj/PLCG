/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((26705 ? ((min(((var_12 ? -16 : var_0)), (max(1692830071, 90))))) : (((((14 ? var_0 : var_9))) ? var_8 : (((1692830086 ? 186 : 186)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [2] = min(((min(((4164121691 ? (arr_4 [i_0]) : (arr_3 [i_0 - 1]))), ((4164121696 ? 803837681 : (arr_0 [i_1])))))), ((-(((arr_5 [i_0] [i_1]) + var_6)))));
                arr_7 [i_0] [i_0] [5] = (arr_1 [i_0]);
            }
        }
    }
    var_17 = (min(((var_3 ? (min(1285942, 0)) : ((max(4294967281, 2700999031))))), -var_8));
    #pragma endscop
}
