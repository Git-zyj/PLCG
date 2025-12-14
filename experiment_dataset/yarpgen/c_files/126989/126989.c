/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_0 ? ((var_3 ? var_1 : var_5)) : (((var_10 ? var_7 : var_8))))), (!var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((max((min(var_8, (arr_0 [i_0] [i_1 - 2]))), (arr_3 [i_1 - 1] [i_1 + 3]))));
                var_12 = var_9;
            }
        }
    }
    #pragma endscop
}
