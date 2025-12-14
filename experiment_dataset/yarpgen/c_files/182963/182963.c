/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_0, (min(var_10, var_1)))) == (((var_12 == 22705) * (~31457280)))));
    var_18 = 0;
    var_19 = 128;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((-22720 / 1) | (((arr_2 [i_0]) ^ (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((((arr_1 [i_0] [i_0]) - 0)) + 71));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 1;
        arr_9 [i_1] = (min(((((arr_0 [i_1]) && ((min((arr_0 [i_1]), (arr_6 [i_1] [i_1]))))))), (arr_2 [i_1])));
    }
    #pragma endscop
}
