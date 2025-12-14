/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min(((9030388696073820137 ? 29899 : -5902140370809684014)), 19833))));
    var_16 = (min(var_16, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_17 -= (min((max((((arr_2 [i_1 - 1] [i_0]) ? (arr_2 [i_0] [i_0]) : var_7)), (((~(arr_0 [i_0] [i_0])))))), (max((arr_0 [i_1 - 2] [i_1 - 2]), var_7))));
                arr_4 [i_0] [16] [i_1] = ((((min(-5902140370809684014, (arr_3 [i_1] [i_1 + 1] [i_1 - 2])))) ? (max((!var_4), ((1040187392 ? (arr_3 [i_0] [i_0] [i_1]) : var_9)))) : ((min((max(var_4, (arr_3 [i_0] [i_1] [i_1 - 1]))), (45881 >> 1))))));
                arr_5 [i_0] = (min(-24, -1));
                var_18 = ((~(max(-6469860032372786125, 19654))));
            }
        }
    }
    var_19 = ((1 ? var_14 : (((var_10 ? var_11 : var_9)))));
    #pragma endscop
}
