/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (137 | 2067249953);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, (((-((-(arr_1 [i_0] [i_0]))))))));
        var_15 = ((((((arr_1 [i_0] [i_0]) ^ var_9))) ? ((var_9 ? var_4 : var_4)) : ((max((arr_0 [i_0]), var_12)))));
        var_16 ^= ((((var_7 * (!1900920979)))) ? ((-((-(arr_0 [11]))))) : (((((var_4 ? 127 : var_11)) > 56))));
        arr_2 [i_0] = ((arr_1 [i_0] [i_0]) ^ 6073);
    }
    #pragma endscop
}
