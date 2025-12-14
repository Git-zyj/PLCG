/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 81;
    var_20 = var_6;
    var_21 -= (min((((min(var_7, 1872900806955695822)))), -1872900806955695822));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 - 1]) : var_10)), (arr_2 [i_1 + 1])));
                arr_8 [i_0] = (((-8104032229234612173 ^ var_7) ? var_10 : (min(var_5, (var_15 / 8104032229234612172)))));
                var_22 = ((((arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
            }
        }
    }
    #pragma endscop
}
