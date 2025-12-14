/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((31365 && 22834) + var_11)), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = 64728;
                var_13 *= (min(((((var_10 > var_10) <= ((801 ? 809 : (arr_0 [i_0] [i_0])))))), (~40699)));
            }
        }
    }
    #pragma endscop
}
