/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((-9156837970463752279 & var_15) | (~var_11)));
                    arr_9 [i_0] [i_1 - 1] &= ((((min((max(var_12, 63513)), var_12))) ? ((61440 ? 4095 : 1)) : (max(((2223384574722214790 ? (arr_6 [i_0]) : 16)), var_17))));
                }
            }
        }
    }
    var_20 -= (((((var_16 ? var_7 : (((var_14 ? var_6 : var_17)))))) ? ((14117 ? ((5 ? var_3 : var_1)) : var_16)) : -7656698614637987043));
    #pragma endscop
}
