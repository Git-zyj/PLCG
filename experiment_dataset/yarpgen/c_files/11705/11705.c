/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(((((1 != -126) || (arr_1 [i_0 - 2])))), (arr_1 [i_1])));
                var_13 += -126;
            }
        }
    }
    var_14 = (var_1 & var_7);
    #pragma endscop
}
