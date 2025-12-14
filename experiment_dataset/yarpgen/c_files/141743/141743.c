/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((min(((max(var_19, var_13))), (((((arr_4 [12]) + 9223372036854775807)) >> (((arr_5 [i_0] [i_0]) - 8509931717868095756))))))) ? ((var_13 ? ((max((arr_4 [9]), var_18))) : (((arr_3 [i_0]) ? -1084662973 : (arr_1 [i_0]))))) : var_9));
                var_21 = ((min((min(var_12, var_4)), (var_6 > var_5))));
                var_22 = 5226000383030347942;
                arr_6 [i_0] = 14793;
                arr_7 [i_0] [i_1] [i_1] = (((-858134940 && -4) << ((((((max(var_13, (arr_5 [i_0] [i_1])))) ? 58 : 2629501443)) - 51))));
            }
        }
    }
    var_23 *= (((var_6 < var_9) ? (var_15 + var_19) : ((max(-1084662992, var_11)))));
    #pragma endscop
}
