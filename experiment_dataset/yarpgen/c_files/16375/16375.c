/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]));
        arr_4 [i_0] [i_0] = (((arr_3 [i_0] [i_0]) % ((20091 ? (arr_0 [i_0]) : 18230))));
        var_15 = (min(var_15, (-127 - 1)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = (arr_5 [i_1]);
        arr_9 [i_1] [i_1] = (max(-21, ((626958781 ? ((-(arr_7 [i_1] [i_1]))) : (((var_9 == (arr_5 [i_1]))))))));
    }
    var_16 = 16383;
    #pragma endscop
}
