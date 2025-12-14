/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0 - 1] [11]);
                arr_6 [i_0 + 1] [i_0] [0] = (max((min((((-(arr_1 [i_1])))), 1)), ((max((max(1, (arr_3 [i_0] [8] [i_0]))), 1)))));
                arr_7 [i_0 - 1] [i_1] = ((var_6 ? var_10 : (((((min(-99, var_3))) ? (arr_1 [i_0 - 1]) : (var_13 | var_2))))));
            }
        }
    }
    #pragma endscop
}
