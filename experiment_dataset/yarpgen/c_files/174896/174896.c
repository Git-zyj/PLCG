/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((((var_11 ? var_4 : var_10))) ? (-107 | 9698529973296689188) : -26));
                arr_4 [2] [2] = (min(((((var_14 ? 8748214100412862417 : var_3)) + var_8)), (((~((var_7 ? var_10 : -101)))))));
                var_16 = (((-(!var_0))));
                var_17 = (max(var_8, (arr_1 [i_0])));
            }
        }
    }
    var_18 = -var_9;
    #pragma endscop
}
