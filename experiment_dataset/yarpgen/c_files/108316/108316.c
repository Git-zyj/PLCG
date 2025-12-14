/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((arr_4 [i_0 - 1] [i_0 + 2]) << (-4951 + 4966)))));
                arr_7 [i_0] [i_0] = var_16;
            }
        }
    }
    var_19 = (4190208 - 549755813887);
    var_20 = (min((max(((min(var_7, var_5))), (var_8 - var_10))), var_10));
    #pragma endscop
}
