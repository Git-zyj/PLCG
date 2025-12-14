/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = 413589476;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= ((0 ? -413589477 : (((((1406699623 ? -1579044070 : -922944164))) ? ((1 ? 1406699623 : 0)) : 7))));
                    var_17 = (max(var_17, 1));
                }
            }
        }
    }
    var_18 = 5;
    #pragma endscop
}
