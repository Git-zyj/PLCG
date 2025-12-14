/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_10;
    var_16 = ((-8176452589576885449 ? -var_3 : ((127 ^ ((var_5 ? var_10 : 235))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = 17359;
                arr_6 [i_0] [i_0] [i_1] = (((~(15024856839704574128 - var_8))));
            }
        }
    }
    #pragma endscop
}
