/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= (min((min(-2147483639, 2046777899)), ((((min(var_2, var_3))) ? (max(2046777899, var_0)) : ((min(var_9, var_11)))))));
                    var_17 = (min(var_17, (((-2046777901 ? -520505965 : 76)))));
                }
            }
        }
    }
    var_18 = ((var_8 ? var_7 : ((min((min(var_12, var_3)), (max(var_2, var_10)))))));
    #pragma endscop
}
