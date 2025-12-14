/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= 2613336596;
                arr_4 [i_0] [i_0] = (((~2613336596) ? 15065 : 444845692));
                var_11 -= (max(-444845693, (((((var_4 ? var_4 : -543199613624186244))) ? (arr_3 [i_0] [i_1] [i_1]) : ((7200641022925286802 ? 8209634393552144177 : 65535))))));
                var_12 = (min(var_12, ((min(-1681630695, 2496)))));
            }
        }
    }
    var_13 = var_4;
    var_14 |= min((min(var_4, ((-444845689 ? var_7 : var_2)))), (((((var_6 ? var_9 : 444845692)) > (var_9 >= var_6)))));
    #pragma endscop
}
