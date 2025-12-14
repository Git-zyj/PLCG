/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_19, (((var_2 * (((-32767 - 1) ? var_0 : var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((min(((var_17 ? -10833 : -6357), (((arr_2 [i_0]) * -16501))))));
                var_22 = (max((arr_0 [i_0]), ((((max((arr_1 [i_0]), var_17))) ? (max(45711759, var_18)) : (var_1 * 16507)))));
                arr_5 [i_0] [i_1] = -9223372036854775807;
            }
        }
    }
    var_23 = var_8;
    var_24 = max((17 == var_0), var_18);
    #pragma endscop
}
