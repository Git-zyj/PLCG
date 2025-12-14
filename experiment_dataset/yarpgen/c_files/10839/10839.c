/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((var_11 == var_9), (var_9 | var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((min((min((arr_3 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1]))), ((max((arr_0 [i_0] [i_1]), (arr_1 [i_0])))))))));
                var_14 = (min(var_14, ((((((arr_2 [i_0] [1]) || 23684)))))));
            }
        }
    }
    #pragma endscop
}
