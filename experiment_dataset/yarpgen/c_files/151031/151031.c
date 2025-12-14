/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-38 ? ((max(var_2, (max(37, var_0))))) : var_4);
    var_17 = (((((((var_0 ? 53954 : var_7))) && var_9)) ? var_12 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_6;
                var_18 = (max(var_18, var_15));
            }
        }
    }
    #pragma endscop
}
