/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((var_7 ? 3830722947 : var_8) - var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((((~var_4) <= (1084904931478848012 | 3830722947))));
                var_15 = (((((-(max((arr_3 [i_1] [12]), var_3))))) ? (!63382) : ((var_6 & (!0)))));
            }
        }
    }
    var_16 ^= ((((!var_12) & var_7)));
    #pragma endscop
}
