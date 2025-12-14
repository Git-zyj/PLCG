/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(951248919974575343, -6333475978053625775));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = ((((((arr_1 [5] [i_0]) ? 17495495153734976248 : var_4))) ? (((arr_5 [i_0]) | 9223372036854775807)) : ((((arr_0 [i_1] [13]) ? var_9 : (arr_3 [i_0] [15]))))));
            arr_6 [i_0] [i_1] |= var_11;
        }
        var_15 = (((951248919974575361 == 127) ? ((var_7 ? (arr_5 [20]) : (arr_4 [6] [i_0] [i_0]))) : (((var_8 ? var_12 : -102)))));
    }
    #pragma endscop
}
