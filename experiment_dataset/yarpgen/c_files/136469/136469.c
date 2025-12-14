/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (min((!var_2), var_5))));
    var_16 = var_7;
    var_17 = 7516193918965659167;
    var_18 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 *= (arr_0 [i_0]);
                var_20 = (max(var_20, (((((((7516193918965659167 ? -7373343116032268615 : var_10)))) ? (max((max((arr_2 [i_0] [i_0] [i_0]), var_13)), -8795622251188675110)) : (((86 ? 3899119310 : 1967453919))))))));
            }
        }
    }
    #pragma endscop
}
