/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!((max(130, 114))))) ? var_15 : (((!121) ? ((110 ? 96 : var_10)) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (min(28128, 5191303413310581237));
                arr_8 [i_0] [i_1] = var_1;
                arr_9 [i_1] [i_0] = 171;
                var_18 *= ((-(max(var_1, (~37398)))));
            }
        }
    }
    var_19 = ((var_1 ? 113 : 5191303413310581240));
    #pragma endscop
}
