/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = ((266741617 << (((((18 ? var_3 : var_4))) - 1506537641))));
                arr_6 [i_1] [i_1] [i_1] = (min((~0), (max((var_4 * var_5), 235))));
            }
        }
    }
    var_12 = (min(-30, (min(var_8, 7931622142870108599))));
    #pragma endscop
}
