/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [16] [14] |= (min((min(127, (var_7 - 32050))), (-127 - 1)));
                var_20 = ((-((2842857391403223606 ? (!17412) : (min(-1013089284, (arr_3 [8])))))));
            }
        }
    }
    var_21 = ((var_18 ? var_16 : ((var_7 ? (!var_6) : ((-17412 ? 11 : var_4))))));
    var_22 = var_3;
    var_23 = (-127 - 1);
    #pragma endscop
}
