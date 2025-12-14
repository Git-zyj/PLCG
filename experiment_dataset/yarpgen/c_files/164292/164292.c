/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (max(-116, (((min(-243031510, 38584)) & 869463577))));
                var_17 *= (max(-3607978321148467076, -54));
                var_18 ^= (((min(869463575, (arr_5 [i_1 - 1]))) ^ (((arr_3 [i_1]) ? 1 : (arr_1 [i_1 + 2])))));
            }
        }
    }
    var_19 = ((var_1 ? (max(var_7, (((611647122 ? var_11 : 64))))) : ((var_3 | (min(var_2, var_0))))));
    var_20 = var_9;
    var_21 = (min(var_6, ((((max(var_1, 85))) ? (((-6935307418294950767 ? var_11 : var_12))) : (max(10727116599142527792, 31533))))));
    #pragma endscop
}
