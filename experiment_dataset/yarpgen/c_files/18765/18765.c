/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (max(((((69 && 4152306758) != (max((arr_1 [12]), 118))))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [6] [i_1] = ((100 >> (((arr_6 [8]) - 179))));
        arr_8 [10] = ((arr_5 [i_1 + 1] [16]) ? (arr_5 [i_1 + 2] [12]) : (arr_5 [i_1 + 1] [2]));
        arr_9 [i_1] = (arr_2 [i_1 + 2]);
        arr_10 [i_1] [i_1] = 137;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_13 [17] = var_11;
        arr_14 [i_2] = (((-5 == 0) ? (arr_6 [8]) : (arr_12 [i_2 + 2] [i_2 + 2])));
        arr_15 [i_2] = ((((arr_5 [i_2] [2]) ? 100 : var_9)) | var_11);
    }
    var_12 = (((((var_10 ? var_7 : ((max(var_9, var_10)))))) ? (max(var_6, ((var_3 ? var_3 : var_9)))) : var_1));
    #pragma endscop
}
