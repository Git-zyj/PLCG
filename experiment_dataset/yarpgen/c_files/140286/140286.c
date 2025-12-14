/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max((var_4 & var_12), ((~((min(var_1, var_18))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 *= (37 && 37);
                arr_6 [i_0] [12] [1] = (max(107, -32));
                var_22 ^= ((31 ? -9589 : 28));
            }
        }
    }
    var_23 = -var_15;
    var_24 = (((var_14 ? 1 : ((min(1, 1))))));
    #pragma endscop
}
