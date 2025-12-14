/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((((!var_4) ? var_2 : ((-(arr_0 [i_0] [i_0]))))) + 2147483647)) << (((min((~3184539503), (min(var_7, 9223372036854775807)))) - 48))));
        var_14 += (max(21420, 1));
        var_15 -= (!-112);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_16 = (min((((-58 ? -9223372036854775807 : (max(9, 7741339930884653040))))), (arr_4 [i_1])));
                var_17 = (min((-9223372036854775787 / 13), (arr_8 [i_1] [i_2])));
            }
        }
    }
    #pragma endscop
}
