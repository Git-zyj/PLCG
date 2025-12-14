/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((((var_0 < (8281499617197396286 || 10165244456512155310))))) ^ ((max(var_2, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (max(10165244456512155316, 10165244456512155296));
                var_14 ^= var_10;
            }
        }
    }
    var_15 = (min(var_15, (max(((var_4 ? (min(var_0, var_5)) : (max(10165244456512155319, 10165244456512155311)))), (((~(28152 ^ var_0))))))));
    var_16 = var_9;
    #pragma endscop
}
