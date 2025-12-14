/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!(((var_8 / ((var_9 ? 32746 : 3325404312730058431))))))))));
    var_18 = (!(((var_5 ? var_10 : (max(var_10, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= ((((((14 ? var_5 : 1))) ? ((var_5 ? var_16 : var_15)) : (var_10 > var_15))));
                var_20 = var_8;
            }
        }
    }
    #pragma endscop
}
