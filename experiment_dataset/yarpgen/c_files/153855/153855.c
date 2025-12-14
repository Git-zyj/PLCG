/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (min(-63, (-47 + 127)));
                arr_5 [i_0] [i_0] [i_1] = (237 / 54855);
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
