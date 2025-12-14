/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_5, (min((var_3 || var_1), var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 ^= ((((((1130804904 > -269724075318341090) ? 885308549 : 32764))) ? ((-269724075318341079 ? 52 : 269724075318341076)) : (-6348 + 1847701949)));
                var_16 = ((-26692 ? -1 : 32704));
                arr_4 [i_0] [i_1] = 7962044087227450290;
            }
        }
    }
    var_17 -= ((var_7 ? var_5 : (269724075318341078 & var_0)));
    #pragma endscop
}
