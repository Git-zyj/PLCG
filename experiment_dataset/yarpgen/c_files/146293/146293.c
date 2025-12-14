/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((((((((235 ? 0 : (arr_1 [i_0])))) ? (((arr_7 [i_0] [i_0]) - (arr_7 [i_0] [i_0]))) : (var_13 < -24900)))) ? (((-((max(var_0, (arr_3 [i_0]))))))) : -8536806827213621722));
                arr_8 [i_0] = (((!17681) ? (((((var_15 ? var_12 : (arr_6 [i_0])))) ? (~6602530270275538882) : var_9)) : var_3));
                arr_9 [i_0] = ((((max(29473, ((min(29442, 0)))))) ? ((((((min(-73, 1))) || (arr_5 [i_0] [i_0]))))) : (1 * 728179479142770055)));
            }
        }
    }
    var_18 = 119;
    #pragma endscop
}
