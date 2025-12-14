/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (max((arr_1 [8]), var_4));
                var_19 += ((((((var_1 | (arr_0 [8] [6]))))) ? ((0 ? 18362757297843594852 : 1)) : (((~(~13647))))));
            }
        }
    }
    var_20 = var_8;
    var_21 = var_16;
    var_22 = var_15;
    #pragma endscop
}
