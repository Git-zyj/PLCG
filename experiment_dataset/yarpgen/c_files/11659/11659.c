/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max(((((max(var_11, var_1))) ? ((max(-2727, var_16))) : 2752)), (max(-2727, ((-2753 ? 45 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = 4;
                arr_4 [i_0] [i_1] [i_1] = ((max((arr_2 [i_1] [i_1]), -15196207048818059110)));
            }
        }
    }
    #pragma endscop
}
