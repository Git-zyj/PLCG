/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((var_4 | var_8) & (max(32704, 59178554))))) - (max((((var_15 ? 3091179012 : var_14))), (3091179012 & var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((1203788278 ? (((((192 ? 13922 : (arr_1 [i_0])))))) : (((((var_4 ? var_15 : 255))) * (((arr_3 [i_0] [i_0]) * var_11))))));
                var_19 &= (min(((((var_2 && var_8) || 120))), 3091179018));
                var_20 = (max(-14990, 1));
            }
        }
    }
    var_21 = (5629857395770293737 | 126);
    var_22 -= (((((min(var_14, var_7))) ? ((min(-13137, var_14))) : ((var_15 >> (var_9 - 13758072484651188200))))));
    #pragma endscop
}
