/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((~(max((arr_1 [i_0]), ((max((arr_3 [i_1] [i_0]), var_10))))))))));
                arr_6 [i_1] = 283726776524341248;
            }
        }
    }
    var_15 ^= (max(var_6, ((-(max(985143477, 18163017297185210368))))));
    var_16 = (min(var_16, (((var_9 * ((((min(var_12, var_6)) >> ((((var_13 ? var_1 : var_1)) - 43144))))))))));
    #pragma endscop
}
