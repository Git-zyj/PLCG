/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(1898520510, 6916632514901534608));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 -= (var_15 / var_4);
        var_20 = (arr_5 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = 11530111558808017021;
        var_21 -= var_0;
    }
    #pragma endscop
}
