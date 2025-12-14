/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((13874156021756608191 ? 13874156021756608191 : var_4))));
    var_21 = (min(var_21, 99));
    var_22 = ((((127 ? var_16 : var_4))) ? var_7 : (((-1608476632 ? (var_4 != var_19) : ((var_7 ? var_11 : -1608476640))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_6;
                var_23 = var_0;
                arr_7 [i_0] [i_1] = var_8;
                arr_8 [13] [13] [13] = (max(1608476642, var_11));
            }
        }
    }
    #pragma endscop
}
