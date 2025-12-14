/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_9));
    var_15 = (max(var_15, ((max(var_6, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((((arr_0 [i_0]) ? 84 : -26)))))));
                var_17 = (max(var_17, ((min((max((((arr_1 [i_1 - 1]) & 172)), (max((arr_2 [i_0] [i_1 + 1]), (arr_0 [i_1 + 1]))))), (max(var_4, (arr_2 [5] [21]))))))));
            }
        }
    }
    var_18 = (min(var_18, ((((var_10 ? var_6 : var_13))))));
    #pragma endscop
}
