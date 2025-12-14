/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_17 ? var_16 : var_2))) ? var_6 : (((33554176 ? -1 : 127)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_3 [i_0])));
                var_22 = (arr_2 [i_0]);
                var_23 = -110;
                arr_7 [i_1] = (~1235134329);
            }
        }
    }
    var_24 = ((var_2 ? ((1 ? (!var_7) : ((var_16 ? var_13 : var_17)))) : ((((~-126) ? var_3 : (var_16 / var_12))))));
    #pragma endscop
}
