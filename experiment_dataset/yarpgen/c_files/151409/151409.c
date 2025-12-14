/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? (var_15 - var_6) : (min(var_12, var_16))));
    var_19 = (1 < 1061649717);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_7;
                var_21 = ((((var_9 ? var_2 : var_15)) != ((var_7 / (var_13 ^ var_1)))));
            }
        }
    }
    #pragma endscop
}
