/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 *= ((((111 ? 5 : 0))));
    var_14 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 &= var_8;
                var_16 |= ((((((var_7 ? var_6 : var_10)) ^ var_7)) >> (((((((var_0 ? var_7 : var_0))) ? ((var_9 ? var_9 : var_6)) : (~85))) - 1274951182))));
                var_17 = ((var_2 - var_4) ? (((((var_5 ? var_10 : var_1))) ? (var_8 & var_5) : var_8)) : var_1);
                var_18 = (max(var_18, (((var_10 ? ((~((var_6 ? var_5 : var_2)))) : var_9)))));
            }
        }
    }
    #pragma endscop
}
