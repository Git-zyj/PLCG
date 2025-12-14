/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((arr_1 [i_0]), (min(48, 9223372036854775807))));
                var_20 = ((var_12 ? (-127 - 1) : (-2147483647 - 1)));
            }
        }
    }
    #pragma endscop
}
