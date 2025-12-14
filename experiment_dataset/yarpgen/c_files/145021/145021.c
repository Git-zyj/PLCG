/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 2] [12] = ((((min((max((arr_1 [i_0]), var_0)), ((~(arr_0 [i_1 + 2])))))) ? (arr_3 [i_0] [i_0]) : (max((!1182129894), (max((arr_0 [i_0]), (arr_4 [i_0] [i_1])))))));
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] = ((max(((((arr_4 [i_0] [i_1]) >= var_3))), (min((arr_1 [i_1]), 2013265920)))));
            }
        }
    }
    var_17 = max((((((var_14 ? 3425127299515449582 : var_5))) ? var_10 : ((max(9874, var_12))))), ((max(-32750, var_8))));
    #pragma endscop
}
