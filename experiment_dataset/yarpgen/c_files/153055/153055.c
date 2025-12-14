/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (((((49451 ? -32757 : (min(-88, 4294967295))))) ? -1 : -0));
                var_22 = (~1);
            }
        }
    }
    var_23 = 77;
    #pragma endscop
}
