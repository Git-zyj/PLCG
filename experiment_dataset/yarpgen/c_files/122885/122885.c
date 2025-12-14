/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((0 && ((max((426146816026552447 || var_9), var_12)))));
                var_22 = var_4;
            }
        }
    }
    #pragma endscop
}
