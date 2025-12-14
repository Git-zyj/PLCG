/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min((~4701), ((31 ? -20189 : -95))));
                var_12 = ((~((-(arr_4 [i_0])))));
                var_13 &= -1524003446;
            }
        }
    }
    var_14 = ((!((((1 || 2001525903) ^ 2704761625456557280)))));
    var_15 |= (max(var_9, ((var_6 & (max(var_8, var_10))))));
    #pragma endscop
}
