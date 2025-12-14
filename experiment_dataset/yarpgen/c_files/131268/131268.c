/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((1 ? var_14 : -var_10)) >> (var_8 + 2773)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((min(var_10, var_4))) >= ((var_2 ? (arr_0 [i_0] [i_0]) : var_3))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (((-32767 - 1) ? (arr_3 [i_0] [i_1]) : 32762))));
            var_17 ^= (((arr_3 [i_0] [i_0]) > (arr_3 [i_0] [i_1])));
        }
        var_18 &= var_2;
        var_19 = (max(-var_0, (arr_5 [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = ((+((((arr_3 [i_2] [0]) <= (arr_0 [i_2] [i_2]))))));
        arr_10 [4] = -1;
    }
    #pragma endscop
}
