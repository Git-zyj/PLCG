/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((~var_2), ((198 ? var_10 : var_4))))) ? var_11 : (-var_2 % var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        arr_3 [i_0] = ((var_9 ? ((-1 ? var_11 : -9580)) : ((1 ? -1 : 5194))));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = -1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1 + 1] = 32475;
        arr_9 [i_1] [i_1] = (((((arr_7 [i_1]) / (arr_7 [i_1]))) * ((((-32767 - 1) || (arr_7 [9]))))));
        var_13 = (arr_7 [i_1]);
    }
    var_14 = (((-((-1710283730467256285 ? var_7 : var_10)))));
    #pragma endscop
}
