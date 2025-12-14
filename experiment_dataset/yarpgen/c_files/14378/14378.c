/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((28 ? 1 : 1));
                arr_7 [i_1] = arr_4 [i_0] [i_0 - 1] [i_0];
            }
        }
    }
    var_20 = (var_6 + var_2);
    var_21 = ((var_0 ? ((var_4 ? ((max(134217727, -134217752))) : (var_8 % var_7))) : ((var_17 ? var_0 : ((var_0 ? var_7 : var_5))))));
    #pragma endscop
}
