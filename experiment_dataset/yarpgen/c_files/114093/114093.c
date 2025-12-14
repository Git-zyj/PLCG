/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 &= (arr_4 [i_0]);
                var_13 += ((!(((4294967295 * (~43))))));
            }
        }
    }
    var_14 = -47;
    #pragma endscop
}
