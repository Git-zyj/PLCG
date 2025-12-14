/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(2102467881, 2192499419)) * var_9)) / var_10));
    var_13 = (((var_0 ? ((2192499435 ? 0 : 0)) : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((+((min((min((arr_2 [i_1] [i_0 - 2] [i_0 - 2]), 0)), 13)))));
                arr_5 [i_1] [i_1] [4] = max(((((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2]) : (-2147483647 - 1)))), (min(2192499402, (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2]))));
                var_15 = (((((((arr_1 [i_0 - 2] [i_0 - 2]) * (arr_3 [i_0] [i_0 - 1]))))) ? ((((!(((0 ? (arr_0 [i_1]) : (-2147483647 - 1)))))))) : (((((50663 ? -115 : 85))) ? (~0) : (~3227111079508865767)))));
                var_16 = (2102467861 == ((((min(4, 3227111079508865784))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 41746)) : ((((arr_0 [i_0 + 1]) ? 65535 : 2192499414))))));
            }
        }
    }
    #pragma endscop
}
