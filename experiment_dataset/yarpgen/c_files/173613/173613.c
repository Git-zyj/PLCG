/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? (!1128403995) : var_8));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (max(((((arr_3 [i_0]) / (min(-216361481, 2))))), 5616519780680052136));
        arr_4 [i_0] = ((-(arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
        arr_9 [i_1] = var_6;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (((arr_10 [i_2]) <= (arr_11 [i_2])));
        var_14 |= (arr_10 [i_2]);
        arr_13 [i_2] = ((~(arr_11 [i_2])));
        arr_14 [5] = ((((arr_11 [i_2]) ? (arr_11 [i_2]) : var_0)) < (((!(arr_10 [22])))));
    }
    var_15 = var_8;
    var_16 = var_4;
    #pragma endscop
}
