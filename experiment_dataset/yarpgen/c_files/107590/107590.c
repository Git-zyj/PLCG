/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max((arr_0 [i_0] [i_1]), (max(((-308506578 - (arr_0 [i_1] [i_0]))), (arr_3 [5])))));
                var_15 += (((((max((arr_2 [i_1]), -1681556575)) & (arr_0 [i_0] [i_0]))) >= ((min((-308506578 - 308506577), 11054)))));
                var_16 = (((((((1650009759 ? var_5 : 78))) ? -308506559 : (((12103096626368934088 || (arr_4 [i_0] [i_0])))))) & (~var_1)));
            }
        }
    }
    #pragma endscop
}
