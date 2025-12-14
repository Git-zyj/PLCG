/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((var_1 ? ((var_10 ? (min(var_12, 0)) : (!var_11))) : 3646243665));
                    var_21 = (min(((((min(2251662374731776, 255))) ? (arr_2 [i_2 + 3] [i_2 + 2]) : ((max(1842601340, 205))))), var_14));
                }
            }
        }
    }
    var_22 = var_16;
    var_23 = 1842601340;
    #pragma endscop
}
