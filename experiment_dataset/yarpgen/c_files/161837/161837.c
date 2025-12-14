/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = var_8;
                var_18 = min(((var_3 ? var_13 : ((max((arr_4 [i_1] [i_1] [i_0]), var_12))))), ((var_4 ? (~var_5) : (14569 - var_1))));
                arr_5 [i_0] [i_0] [i_0] = var_2;
                var_19 = (min(var_19, (((((max((arr_4 [i_0] [i_1] [i_1]), ((var_2 ? (arr_1 [i_0]) : 41541))))) ? ((((~var_5) != 6015269981136485854))) : (arr_1 [i_0]))))));
            }
        }
    }
    var_20 |= (((~1) ? var_5 : 1));
    var_21 = ((((((var_0 ? 13718 : -1711692460)))) ? ((((((10502603794502670818 ? 1 : var_9))) ? (var_6 != var_12) : (-1 && var_11)))) : var_16));
    #pragma endscop
}
