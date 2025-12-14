/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_1;
    var_19 = ((((((var_8 ? var_16 : 0))) ? var_9 : (min(var_0, 536870912)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [5] [i_1 - 1] [i_1 - 1] = var_9;
                arr_5 [i_0] = (((arr_1 [i_0 - 1]) ? -815851551 : (((!((min(var_7, var_12))))))));
                var_20 = ((var_9 ? ((-(94 - var_14))) : 0));
                var_21 = ((max(var_0, var_2)));
            }
        }
    }
    #pragma endscop
}
