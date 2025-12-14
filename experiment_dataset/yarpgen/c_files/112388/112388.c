/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [13] = (~var_14);
                arr_5 [2] [i_1] &= (((((min(16514008045249670861, (arr_3 [i_0]))) * (arr_0 [1])))) ? (arr_2 [16] [i_0 - 1] [i_0]) : -85);
            }
        }
    }
    #pragma endscop
}
