/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((arr_3 [i_0]) - ((-(arr_3 [i_0]))));
                var_21 = ((((var_12 ? (6940446615334315276 || var_8) : (var_6 && var_4)))) ? (((~(arr_2 [i_0] [i_0] [i_0])))) : ((((min(27868, -927448501))) ? (arr_3 [i_1 + 1]) : (arr_3 [i_0]))));
                var_22 = ((-(((-9223372036854775807 - 1) ? 3 : -451987936))));
            }
        }
    }
    var_23 = (((((0 ? ((var_9 >> (74 - 47))) : var_14))) && -var_4));
    #pragma endscop
}
