/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 4045165628;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_2 [i_0] [3])));
                var_22 = (arr_1 [i_0 - 4]);
            }
        }
    }
    var_23 = 2736;
    var_24 = var_13;
    #pragma endscop
}
