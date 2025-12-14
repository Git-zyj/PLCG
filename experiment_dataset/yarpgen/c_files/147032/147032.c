/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = min(((!(((arr_1 [i_0]) == -4)))), 1);
                var_21 &= var_15;
                var_22 = (min(var_22, ((-(max(((114 ? (arr_2 [i_1] [i_1] [i_1 + 1]) : var_19)), (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_23 = var_19;
    #pragma endscop
}
