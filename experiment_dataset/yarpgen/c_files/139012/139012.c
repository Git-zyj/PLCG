/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((340488405 ? 20689 : 12836968287004535279));
                var_11 = (((5609775786705016341 ? 1 : 1)));
            }
        }
    }
    var_12 = (((((-121 ? -var_9 : (min(var_3, var_9))))) ? (((((1 ? var_2 : var_5))) ? var_9 : (var_8 - var_0))) : -var_0));
    var_13 -= (!var_3);
    #pragma endscop
}
