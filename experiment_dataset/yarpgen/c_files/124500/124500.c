/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 + ((((198 + 14931) ? ((198 << (58 - 40))) : var_12)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((!((min(63, -224616304)))))) != ((((64 ? 64 : 84)) & (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
        var_20 = ((-692372637 ? (arr_2 [i_0]) : ((((arr_1 [i_0] [i_0]) ? 17365 : (arr_2 [18]))))));
        arr_4 [i_0] = (arr_2 [i_0]);
        var_21 -= ((((var_16 == (~-17365)))));
        arr_5 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = 61;
        arr_8 [i_1] = (((109 << (192 - 180))));
        arr_9 [i_1] = (arr_0 [i_1] [i_1]);
    }
    var_23 = var_5;
    var_24 = (min((((var_16 ? var_16 : -73))), 1));
    #pragma endscop
}
