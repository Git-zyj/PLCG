/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4294902346;
    var_14 = (max(var_14, var_12));
    var_15 = ((((max(1, (min(3211546375, 1))))) ? (((min((var_3 < 3915063342), var_3)))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_3, (arr_4 [i_1])));
                arr_5 [i_0] = (max(((~(arr_2 [i_0 + 1]))), (((min(10845, 2673088866)) + (max((arr_2 [i_0]), 1))))));
            }
        }
    }
    var_17 -= (min(var_2, (max((max(var_9, var_6)), (var_8 ^ 14631676173401214693)))));
    #pragma endscop
}
