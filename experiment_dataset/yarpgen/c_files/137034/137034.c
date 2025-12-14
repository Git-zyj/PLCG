/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((~(arr_5 [i_1] [i_0]))))));
                var_17 = (min(var_17, ((min(-16, 16)))));
            }
        }
    }
    var_18 = ((((((var_13 & var_14) ? var_6 : ((var_9 ? 42246 : var_8))))) ? var_10 : ((((1 ? var_7 : var_12)) >> var_15))));
    var_19 = var_3;
    #pragma endscop
}
