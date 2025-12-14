/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] |= (-1506273490 + 1);
                var_20 = (max((((~(!1)))), ((var_11 ? 12383994061175521575 : 262143))));
                var_21 = var_6;
            }
        }
    }
    var_22 = (!var_19);
    var_23 = (min((min(var_9, (min(var_0, var_2)))), var_2));
    var_24 = (min(var_10, var_2));
    #pragma endscop
}
