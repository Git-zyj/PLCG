/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [12] = ((-6797 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_13 ^= (arr_0 [i_0] [i_0]);
        var_14 *= (!var_0);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [1] = min(((((arr_6 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))), (max(1598628365, 13)));
        arr_8 [i_1] = (((((arr_6 [i_1]) + (arr_5 [i_1]))) - 13));
        var_15 = ((((arr_5 [i_1]) ? ((((arr_6 [i_1]) || 6796))) : (min((arr_6 [10]), var_0)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 = (arr_10 [i_2] [i_2]);
        arr_11 [i_2] = (min((arr_9 [i_2]), (arr_10 [i_2] [i_2])));
    }
    #pragma endscop
}
