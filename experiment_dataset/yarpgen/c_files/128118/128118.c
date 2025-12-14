/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((max((~var_8), var_2))) * ((var_3 ? (max(3647661052, var_9)) : (1 * var_2)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (+((((-9223372036854775807 - 1) < 5174))));
        arr_3 [i_0] [i_0] = ((-1 ? ((((arr_1 [i_0]) ? -1301552888 : -575771934))) : 105));
        var_12 = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = var_7;
    }
    var_13 = (var_5 ? 575771944 : (139 - -575771945));
    #pragma endscop
}
