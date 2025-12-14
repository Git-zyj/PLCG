/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(0, 32752));
                var_13 = -1116358073;
            }
        }
    }
    var_14 = (!-1116358081);
    #pragma endscop
}
