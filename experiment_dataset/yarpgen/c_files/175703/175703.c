/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min((-2147483647 - 1), var_5))) ? (max(var_9, var_3)) : -2147483647)) * (max(-var_10, -var_9)));
    var_12 = ((-(((var_8 | var_0) / (((var_7 ? (-2147483647 - 1) : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_1] [i_0] = ((((536870911 ? -4 : 96))) && var_9);
                var_13 = var_1;
                var_14 -= (arr_3 [i_0]);
                var_15 = var_0;
            }
        }
    }
    var_16 = (max(var_3, ((min((var_7 - var_7), var_4)))));
    #pragma endscop
}
