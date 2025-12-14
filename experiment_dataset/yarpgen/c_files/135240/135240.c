/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (((arr_1 [i_0 - 2] [i_0 - 1]) ? (((arr_1 [i_0 - 1] [i_0 + 1]) ^ -1)) : (arr_1 [i_0 - 1] [i_0 - 2])));
                var_20 = (((9223372036854775790 ? 3971789210327512225 : 11990)));
            }
        }
    }
    var_21 -= var_1;
    #pragma endscop
}
