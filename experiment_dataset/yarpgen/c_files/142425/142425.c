/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = 17888698095323187319;
                    arr_8 [i_2] [i_2] [7] [i_2] = ((var_1 ? (max(var_0, 7511802029894460906)) : ((max(-5778004971028658234, 4314796650936623801)))));
                }
            }
        }
    }
    var_13 += 1;
    #pragma endscop
}
