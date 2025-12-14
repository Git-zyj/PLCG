/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 -= (((((var_7 ? (((var_6 ? var_13 : var_6))) : -626531540))) ? var_6 : ((((max(var_16, var_17))) ? var_6 : 0))));
    var_20 = ((~(~var_13)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (!626531556);
                arr_5 [i_0] [8] &= -165;
            }
        }
    }
    #pragma endscop
}
