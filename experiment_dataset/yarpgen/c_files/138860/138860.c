/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (((((min(var_13, 1)))) != (min((max(var_12, var_9)), (((var_4 ? var_13 : var_8)))))));
    var_17 = (~15728640);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [7] [i_1] [i_1] = (((min((((var_1 ? 2778258601 : (arr_3 [i_0])))), ((var_1 ? 375300745922538752 : var_4)))) < (((1516708695 ? 1260719027 : 1516708695)))));
                arr_8 [i_1] = (((-125 | 1539919227) <= 1));
                arr_9 [i_1] = 2650413803454374897;
            }
        }
    }
    #pragma endscop
}
