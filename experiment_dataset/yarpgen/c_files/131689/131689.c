/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(-2047, ((3307722636899086369 ? 31 : 8128))));
                var_18 |= var_9;
            }
        }
    }
    var_19 = var_13;
    var_20 = (min((max((var_1 | var_9), var_1)), (((-48 ? -23 : 51)))));
    #pragma endscop
}
