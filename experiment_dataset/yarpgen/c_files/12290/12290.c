/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((((max(var_7, 192))) ? -var_0 : ((-(arr_0 [i_0] [i_0]))))));
        var_17 += var_1;
        var_18 = ((arr_3 [13]) ? (max(((var_7 ? 174 : -32762)), (max(-32747, var_5)))) : (((var_5 || (((1 ? 1 : (arr_0 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = 1;
        var_19 = (max(var_19, (((var_5 ? (arr_5 [i_1]) : var_8)))));
        var_20 = (min(var_20, ((((41904 || (arr_0 [i_1] [18]))) || (201 || var_4)))));
        arr_7 [i_1] = 1902692042;
        var_21 &= ((-(arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = (min(var_22, var_12));
        var_23 = -1;
    }
    var_24 = var_4;
    var_25 = (max(var_25, 15464490322109647217));
    var_26 = var_9;
    var_27 = (max(var_15, (((var_12 % 1) || -32765))));
    #pragma endscop
}
