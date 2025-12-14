/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((var_15 ? ((((3154339088095858740 && -3154339088095858728) ? var_5 : (var_11 | var_14)))) : ((-4294967275 ? var_7 : (max(var_0, var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 |= ((50869 ? -3154339088095858745 : 1));
                    var_19 = min(77, 31);
                }
            }
        }
    }
    #pragma endscop
}
