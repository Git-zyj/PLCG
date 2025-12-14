/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= (((((9 / (arr_1 [i_0] [i_0])))) && ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_20 -= -var_0;
        var_21 += ((~((((9 || var_3) || (!2100267883))))));
        var_22 = -2194699390;
        var_23 += (min((arr_0 [1]), (245 & 2194699413)));
    }

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_24 = ((((((~var_14) ? (max(9, 8595427926178393875)) : ((min(2194699390, 245)))))) ? ((~(arr_0 [i_1]))) : (max((((var_11 || (arr_0 [i_1])))), (arr_3 [i_1 - 1])))));
        var_25 = (arr_0 [i_1]);
    }
    #pragma endscop
}
