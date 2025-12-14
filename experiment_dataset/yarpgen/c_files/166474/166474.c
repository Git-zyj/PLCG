/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(var_16 | var_9))) - (var_14 < var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [16] = arr_2 [i_0] [i_0] [i_1];
                var_19 = (max((((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1]))), (min(36028797018955776, 2013265920))));
                var_20 = (((arr_2 [i_1] [3] [i_0]) ? (((((((arr_0 [i_1] [7]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_1] [18])))) ? (min(2281701378, 2281701375)) : (arr_2 [i_1] [i_0] [i_0])))) : ((((((arr_1 [i_0] [i_1]) ^ (arr_1 [5] [i_1])))) ? (((arr_0 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_3 [i_1] [i_1] [i_0]))) : (((((arr_0 [i_1] [i_0]) && (arr_2 [i_0] [11] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
