/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(9223372036854775807, 2034894723)) <= (~1435556847)));
    var_16 = ((((min(((max(3177373050, 46903))), ((var_10 ? var_13 : 46896))))) ? ((min((((var_12 ? var_9 : var_9))), var_2))) : ((((max(var_0, 0))) ? var_4 : var_3))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 18633;
                var_19 = ((min(18632, 0)));
                var_20 -= (((((arr_1 [i_0]) >> (((min(var_8, var_8)) + 2486998730843680379)))) << (var_12 - 19376)));
                arr_5 [i_1] = ((max(var_11, (arr_2 [i_1 + 1] [i_1 + 1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
