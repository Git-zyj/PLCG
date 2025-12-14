/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_7);
    var_13 = (max(var_13, (((-var_8 ? (((~-1152921504606846976) ? -549739036672 : (!var_3))) : (~var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += (arr_4 [16] [i_0]);
                var_15 = ((!((((((var_0 ? (arr_2 [i_0] [i_0]) : var_6))) ? (min((arr_1 [7] [i_1]), var_6)) : var_5)))));
                var_16 += -82;
            }
        }
    }
    var_17 = ((-(min(-var_9, 4096))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_2] [1] [i_2] = (max(var_0, (((!var_11) - var_2))));
                arr_13 [i_2] = ((((min(((max(var_2, (arr_3 [i_2] [i_3] [0])))), (max(var_1, -7609368427495682756))))) ? var_1 : ((+(((arr_2 [i_2 - 1] [9]) ? (arr_2 [17] [1]) : var_3))))));
            }
        }
    }
    #pragma endscop
}
