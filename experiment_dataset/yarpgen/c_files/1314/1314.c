/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_4, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((~1) ? (15 | 234) : 13));
        var_14 = (max(var_14, ((((arr_2 [15]) ? (arr_0 [i_0]) : 36409)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 += ((var_3 ? 39896 : (max(((0 ? (arr_0 [2]) : 1)), ((max(252, 49)))))));
        var_16 *= var_6;
    }
    #pragma endscop
}
