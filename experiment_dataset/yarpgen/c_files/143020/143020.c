/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_4 || ((max(var_8, var_8))))))));
    var_12 += ((var_6 >> (var_2 - 30807)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_0 [i_0 - 3] [i_0]);
        arr_2 [i_0] = (((arr_0 [i_0 - 3] [i_0]) * (arr_0 [i_0 - 3] [i_0])));
    }
    var_14 = ((-((((~var_2) || (var_9 && var_7))))));
    #pragma endscop
}
