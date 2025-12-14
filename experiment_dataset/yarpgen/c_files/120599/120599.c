/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_5, var_0))) >= var_9));
    var_13 = (((!var_5) < (min(var_11, var_6))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((max(var_10, (max((arr_2 [i_0] [i_1]), var_2))))) >= (max((((5 << (23127 - 23109)))), var_6))));
                    var_14 = var_9;
                }
            }
        }
    }
    var_15 = ((max((var_0 - var_6), (var_1 - var_8))));
    var_16 = var_10;
    #pragma endscop
}
