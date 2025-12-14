/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((0 ? var_12 : (255 + 14583)))) ? var_15 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = max((((((8046139747643431346 ? var_13 : (arr_0 [i_0])))) ? (((max((arr_3 [i_0]), 1)))) : (max((arr_5 [i_0]), var_9)))), (((~(arr_3 [i_0])))));
                arr_6 [1] [i_0] [i_0 + 1] = (((var_16 > 7147956717085690876) ? ((((((arr_2 [i_0]) ? var_7 : (arr_2 [i_0])))) ? (((var_8 ? -1448735464 : (arr_4 [i_0])))) : (var_3 * 0))) : (((((arr_0 [i_0 - 1]) == (((max((arr_4 [i_1]), 193))))))))));
                var_19 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
