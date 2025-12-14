/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min((((204 << (var_1 + 3435409086519450559)))), (((((var_4 ? var_7 : var_4))) ? ((-22024 ? 5983 : var_1)) : 3333600317)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (((arr_7 [10] [14] [i_0]) ? 22041 : (((arr_1 [i_0]) * (22015 * 3492029395)))));
                    var_19 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_20 ^= (max((((var_11 >> ((22023 ? 1 : var_14))))), (22023 + var_13)));
    var_21 = ((var_7 ? (((var_2 | var_3) << (var_3 - 61))) : 4));
    #pragma endscop
}
