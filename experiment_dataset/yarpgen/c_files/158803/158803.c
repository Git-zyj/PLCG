/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [1] [3] = (~21062);
                var_12 += (((((((min(28683, -31881))) ? 21062 : ((4294967295 ? var_11 : 34271))))) ? (~43644) : (((~var_4) & (-2814340940021229623 & 45)))));
                var_13 = max((min((~60608), 13204628754160829499)), (((var_5 ? -7077066488715876432 : var_1))));
                var_14 = (~-31881);
            }
        }
    }
    var_15 = ((-((var_8 - ((60334 ? 21048 : var_6))))));
    var_16 = (max(((((~29885) ? ((min(1, 28683))) : (~var_2)))), var_10));
    var_17 = var_4;
    var_18 = ((var_11 ^ (max(((var_1 ? -34 : var_0)), var_5))));
    #pragma endscop
}
