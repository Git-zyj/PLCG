/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((~-24721) ? (~119) : var_1))) / ((((var_4 ? -5286250090857625014 : var_12)) ^ (((var_5 ? -34 : var_0)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_16 -= (((((((91 ? (arr_0 [i_0]) : var_11)) >> (25682 - 25628)))) ? 3459857206404230031 : ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = (((((116 ? var_2 : var_4))) ? (arr_5 [i_1] [i_1] [i_1]) : (!99)));
            arr_8 [i_1] [i_1] [i_1] = (arr_5 [i_1] [7] [2]);
        }
        arr_9 [i_1] = (((((var_11 ? var_8 : var_5))) ? (var_8 ^ 20) : ((var_1 + (arr_4 [i_1] [i_1] [i_1])))));
    }
    #pragma endscop
}
