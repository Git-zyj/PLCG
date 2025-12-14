/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = -4127009719634785853;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((((arr_1 [i_0]) % 1))) ? -4127009719634785854 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [3] [i_0])))));
        var_17 = var_9;
        var_18 = (arr_0 [i_0] [4]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (max(1005952567055914606, 897631596));
        arr_5 [i_1] = (min(var_9, (var_6 & 1)));
        var_20 = (arr_0 [i_1] [14]);
    }
    var_21 = 1;
    #pragma endscop
}
