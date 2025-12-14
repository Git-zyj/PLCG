/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (-32761 & 562948879679488);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (arr_1 [5] [5]);
                var_21 -= (max(((((min(-1831311210, 764284016)) < ((-32 | (arr_1 [6] [i_0 + 1])))))), (arr_3 [i_1])));
            }
        }
    }
    #pragma endscop
}
