/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4092;
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 |= var_15;
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = ((((1 ? 1 : (arr_4 [i_1]))) << ((1 ? var_0 : 1))));
        arr_7 [i_1] = ((!(arr_0 [i_1 + 1])));
        var_20 = (min(var_20, (((((arr_1 [i_1]) || (arr_4 [i_1 + 1])))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = (max(((max(42261, (arr_1 [i_2])))), (arr_8 [i_2])));
        arr_11 [i_2] = (((((24 < 1) < (((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_1 [i_2]))))) ? (((!(((23263 & (arr_9 [i_2]))))))) : (((!((max(55395, (arr_10 [i_2] [i_2])))))))));
        var_22 = (arr_3 [i_2] [i_2]);
        var_23 = var_13;
        var_24 = 48;
    }
    #pragma endscop
}
