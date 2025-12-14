/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(((var_2 ? var_9 : 4974784911862887978)), (((var_9 ? 2532 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= (min((((arr_3 [1] [i_1]) ? (var_7 / var_0) : (((max(var_7, var_6)))))), -var_9));
                var_13 -= (min((((arr_4 [i_1 + 1]) ? (arr_3 [i_0] [i_0]) : (~var_4))), ((((arr_2 [i_0]) ? (min(1, var_8)) : var_3)))));
            }
        }
    }
    var_14 = ((((max(((min(var_5, var_3))), ((var_3 ? var_1 : var_1))))) ? var_7 : (~var_6)));
    #pragma endscop
}
