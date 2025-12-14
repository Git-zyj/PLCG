/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (-var_13 || -var_12);
                var_22 -= (arr_1 [i_0]);
            }
        }
    }
    var_23 = (max(-var_7, (var_13 & var_7)));
    var_24 = (!1052595908);
    var_25 = (min(var_7, var_14));
    #pragma endscop
}
