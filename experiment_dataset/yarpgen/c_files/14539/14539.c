/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (((85 % (var_16 + 182))));
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 -= (((min(1681, (arr_1 [i_1])))));
                var_22 -= -94;
            }
        }
    }
    #pragma endscop
}
