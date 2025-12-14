/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146852
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
                var_17 = (var_10 / var_15);
                var_18 = ((~((((arr_0 [i_0]) != 30)))));
                var_19 |= 47111;
            }
        }
    }
    var_20 = ((((((var_11 ? 49960 : var_8)) ^ ((var_12 ? 15557 : 15554)))) << (65535 - 65527)));
    var_21 = (((65533 < 25074) >= 6881));
    #pragma endscop
}
