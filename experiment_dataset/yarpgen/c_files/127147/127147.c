/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((min(var_6, var_10))) ? (((((16233 ? 605682185 : 11135690342136670751)) >= -2166))) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_11));
                    var_15 = (((arr_2 [i_0] [i_0] [i_0]) ? (((((var_9 ? (arr_3 [i_0] [i_1]) : 1))) ? (!-30116) : (((var_7 < (arr_3 [i_2] [i_2])))))) : ((var_0 ? ((25 ? (arr_1 [7]) : (arr_1 [18]))) : ((5287442314864935521 ? 679 : var_10))))));
                    var_16 += (((arr_2 [i_1 + 1] [i_1 + 1] [i_2 + 1]) ? ((1 ? (min(var_1, 4288934762)) : 11081212236699511657)) : 10434438395990498436));
                    var_17 = (((18015589343099171691 ? var_10 : var_11)));
                }
            }
        }
    }
    #pragma endscop
}
