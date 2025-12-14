/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_2, (0 & var_8))) - (min(0, 2251731094208512)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_4;
                var_12 = (min(((min(-4742958613202922025, 518956491))), ((0 ? 0 : 0))));
            }
        }
    }
    var_13 -= var_10;
    #pragma endscop
}
