/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [0] [i_0] = 9223372036854775781;
        var_10 ^= 9223372036854775780;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_11 *= (((!var_4) ? (arr_5 [2]) : 9223372036854775780));
        arr_7 [i_1] = (((arr_5 [i_1]) + (arr_0 [i_1] [i_1])));
        var_12 = (arr_0 [i_1] [i_1]);
    }
    var_13 = max((--45), (((max(4294967292, var_4)) + (!var_1))));
    #pragma endscop
}
