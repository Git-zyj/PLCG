/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((208 | var_2) < (((arr_1 [i_0] [i_0]) ? var_6 : (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (123 - var_15);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_11;
        var_19 = (((arr_4 [i_1 - 1] [i_1 + 3]) ? ((((((arr_5 [i_1 + 2]) + 9223372036854775807)) << (((arr_4 [i_1 + 3] [i_1 - 1]) - 108))))) : (min(var_5, (arr_5 [i_1 + 2])))));
    }
    var_20 = var_12;
    #pragma endscop
}
