/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 -= var_7;
                var_17 *= (((((((var_14 ? var_11 : var_12))) ? 20082 : var_8)) >> ((((10500314159028191891 > 2965449743) != var_4)))));
                arr_5 [i_0] [i_0] [i_0] = (((((26023 ? 104 : 1329517574))) ? var_2 : (var_5 + var_9)));
            }
        }
    }
    var_18 = var_1;
    var_19 = ((var_15 ? ((var_0 - (var_8 == var_1))) : ((-(var_8 <= var_4)))));
    #pragma endscop
}
