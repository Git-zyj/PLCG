/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_7;
    var_15 = (((((var_3 ? 2689240766 : var_4))) == var_7));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [4] |= var_11;
                var_16 += 160802229811534446;
                var_17 *= (arr_0 [i_1]);
            }
        }
    }
    var_18 = var_3;
    var_19 = max(181, var_4);
    #pragma endscop
}
