/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_3;
    var_15 = ((((max(((min(-26267, 14))), ((var_11 ? var_6 : var_7))))) ? -var_2 : ((var_3 ? 1 : var_10))));
    var_16 &= -14;
    var_17 = ((-(var_6 / var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);
                var_19 = ((max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_1 + 1]))));
                var_20 = (max(var_20, (1 < 424347502)));
                var_21 = var_6;
            }
        }
    }
    #pragma endscop
}
