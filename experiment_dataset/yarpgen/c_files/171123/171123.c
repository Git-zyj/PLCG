/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_0;
    var_17 ^= ((var_6 / ((((((1 ? 0 : 101))) ? var_1 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (arr_2 [4] [4])));
                arr_5 [i_0] = ((-123 ? var_8 : (var_5 + 0)));
            }
        }
    }
    var_19 = (min(var_19, (((var_14 ? ((((((var_13 + 2147483647) << (((-39 + 63) - 24))))) ? ((var_2 ? var_5 : var_14)) : var_9)) : var_13)))));
    var_20 = var_6;
    #pragma endscop
}
