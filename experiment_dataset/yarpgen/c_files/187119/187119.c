/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = var_16;
                var_22 = (min(var_22, (((-(!3))))));
                arr_6 [9] [i_0] = (-(((arr_3 [i_0 + 1] [i_0]) ? (arr_3 [i_0 + 3] [i_0]) : (arr_3 [i_0 - 2] [i_0]))));
                arr_7 [15] [i_0] = var_19;
            }
        }
    }
    #pragma endscop
}
