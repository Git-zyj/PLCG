/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((((10610397897900094409 + var_0) + var_12)) == (max(var_3, -var_10)));
                var_14 = max(var_12, var_12);
            }
        }
    }
    var_15 = (max((~var_3), var_10));
    var_16 = (max((min((((1 ? 1 : var_7))), (max(var_11, var_4)))), ((max((!var_1), var_12)))));
    #pragma endscop
}
