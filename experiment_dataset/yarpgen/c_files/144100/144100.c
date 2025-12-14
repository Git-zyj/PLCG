/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-2124313076);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, 105));
                arr_7 [3] [i_0] [14] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
