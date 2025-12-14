/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = ((max(734, (!88))));
        arr_2 [i_0] [i_0] = ((((((188 && 29) ? (208 || 0) : -125))) ? (((63 || -119) ? ((max(var_0, 51))) : ((var_9 ? 16986 : 27551)))) : (arr_1 [1] [1])));
        var_19 = (max((arr_1 [i_0 + 1] [i_0 + 2]), ((-(arr_0 [i_0 - 1] [12])))));
        var_20 = (((arr_0 [i_0 - 1] [i_0]) | (((!(arr_0 [i_0 + 1] [i_0]))))));
        var_21 = ((var_11 ? (((arr_1 [i_0] [i_0]) + (arr_1 [1] [i_0]))) : ((255 | (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (max(((114 << (var_8 + 24))), (max((!var_16), (((arr_4 [i_1]) ? var_12 : var_4))))));
        var_23 = ((-23937 ? ((max(0, 200))) : ((var_9 | (arr_6 [i_1])))));
    }
    var_24 = var_11;

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_11 [11] = 135;
        arr_12 [3] = var_6;
    }
    #pragma endscop
}
