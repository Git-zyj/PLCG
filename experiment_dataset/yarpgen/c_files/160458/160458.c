/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (min(((max(-20818, ((20703 ? -18205 : var_3))))), ((((min(var_15, 0))) ? (arr_4 [15]) : ((var_13 ? 12665 : -1116378509245172935))))));
                arr_5 [i_0] [i_0] = var_7;
                var_19 += var_0;
            }
        }
    }
    var_20 = ((var_2 ? ((var_6 ? ((0 ? var_10 : var_15)) : var_5)) : ((((min(var_3, -74))) ? ((var_4 ? var_10 : var_3)) : var_15))));
    #pragma endscop
}
