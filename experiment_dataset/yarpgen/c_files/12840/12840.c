/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((var_5 ^ var_3), (((var_2 ? -1598924711 : 149)))))) | (min(((var_15 << (var_9 + 15942))), ((var_13 ? var_10 : var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 18446744073709551600;
                arr_6 [10] [3] = ((((max(106, var_4))) ? (arr_0 [i_0] [i_0]) : 184));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_19 = var_7;
                    arr_14 [i_2] [i_3 - 3] [i_2] = ((((min(148, 8792044801643279116))) ? (max((~76), var_6)) : var_2));
                }
            }
        }
    }
    #pragma endscop
}
