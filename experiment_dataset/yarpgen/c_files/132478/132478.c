/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = max((min(var_4, var_13)), -var_2);
    var_19 = var_7;
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min((~var_7), (max(-16, (min(-1892302439837309288, var_5))))));
                arr_4 [i_0] = 16034602238788317679;
            }
        }
    }
    #pragma endscop
}
