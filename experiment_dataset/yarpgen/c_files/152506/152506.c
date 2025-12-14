/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((!(((~(!56987))))));
                arr_4 [i_0] [i_1] = var_11;
            }
        }
    }
    var_15 = (min(var_2, (((!var_11) - var_0))));
    #pragma endscop
}
