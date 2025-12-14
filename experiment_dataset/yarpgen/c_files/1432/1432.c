/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? var_14 : var_18));
    var_21 = (var_9 & 71);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = ((-(((!(arr_2 [i_1] [i_0 + 1]))))));
                var_23 = -28479;
            }
        }
    }
    #pragma endscop
}
