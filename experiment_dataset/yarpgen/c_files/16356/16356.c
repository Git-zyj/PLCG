/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = 20509;
                    var_18 = (max(var_18, (max((max((arr_4 [i_2 - 1]), 28387)), 209))));
                }
            }
        }
    }
    var_19 = (min((max(((-1689677157 ? 1186865080 : var_8)), ((min(var_7, -58))))), (((var_5 < (min(var_3, -1689677183)))))));
    var_20 = var_4;
    #pragma endscop
}
