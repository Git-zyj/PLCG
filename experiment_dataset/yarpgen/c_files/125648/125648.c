/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((min(var_15, var_19))) ? -396019392 : var_3))) ? (((-32765 + -5788) ? (32767 + 396019392) : var_7)) : (((max(81, var_5))))));
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (32767 ^ -32761);
                arr_6 [i_1] = (max(-396019378, (min((arr_1 [i_0 - 2]), 0))));
                arr_7 [i_0] [i_0] [i_1] = (min(((min((arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1]), (max(var_5, var_1))))), (~65535)));
            }
        }
    }
    #pragma endscop
}
