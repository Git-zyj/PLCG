/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109119
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
                var_14 = (((min((arr_2 [i_0] [8] [i_0]), -25953))) == (~var_9));
                var_15 = (min((max(var_6, 1)), (min(0, (arr_1 [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    var_16 = (min((0 - var_3), (((~1) ? ((max(var_4, var_12))) : -var_4))));
    #pragma endscop
}
