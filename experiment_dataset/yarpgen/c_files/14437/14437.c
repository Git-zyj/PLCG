/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((65527 ? ((max(var_8, var_3))) : var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [1] = (((((((var_13 ? var_13 : var_14))) ? var_0 : ((var_10 >> (var_10 - 817041349))))) < var_12));
                    arr_9 [i_0] [i_0] = var_1;
                }
            }
        }
    }
    var_19 = ((-((var_7 + (~65520)))));
    #pragma endscop
}
