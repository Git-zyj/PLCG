/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += max(((-(min((arr_4 [i_0] [i_0] [i_1]), 0)))), (arr_0 [i_0]));
                var_21 = (min(var_21, -var_18));
                var_22 = var_9;
                var_23 = (max(var_23, (((15342892832284295171 >> (65535 - 65521))))));
            }
        }
    }
    var_24 += (!var_3);
    var_25 = (max(var_25, ((max(0, -2124185499)))));
    #pragma endscop
}
