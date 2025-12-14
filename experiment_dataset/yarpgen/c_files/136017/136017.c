/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1;
                arr_6 [13] [13] [13] = var_0;
            }
        }
    }
    var_12 = (((((min(var_2, ((var_0 >> (var_2 + 52))))) + 2147483647)) << (((var_2 + 32) - 8))));
    var_13 = ((-1581296645 ? ((var_3 ? -47421859 : var_5) : ((var_7 ? var_5 : var_7)))));
    #pragma endscop
}
