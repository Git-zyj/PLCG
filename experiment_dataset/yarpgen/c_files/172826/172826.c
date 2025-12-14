/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((arr_2 [i_0]) << (var_13 - 8430050239390890671));
        var_15 = (min(var_15, (((~(((var_10 != (arr_1 [i_0] [i_0])))))))));
        var_16 = var_3;
        var_17 |= -var_5;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = (min((min(16777215, var_9)), (((var_11 ? -67 : (arr_3 [i_1] [i_1]))))));
        var_19 = (min(var_19, (!var_7)));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_20 = ((!(arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2])));
            arr_10 [1] [0] [i_1] = ((var_4 ? var_6 : ((var_13 ? var_0 : 125))));
            arr_11 [i_1] [i_2] = ((arr_4 [i_2] [i_2 - 1]) ? (arr_7 [i_2] [i_2 - 1]) : var_12);
            arr_12 [i_1] [9] [i_1] = (arr_8 [i_2 + 2]);
        }
        var_21 = ((!(((((!(arr_2 [i_1]))))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_15 [i_3] = (!65535);
        arr_16 [i_3] = (min(((min(-9223372036854775797, 4316))), (((-(102 - var_3))))));
        var_22 = 1798390166;
    }
    var_23 = (max(var_8, (~var_12)));
    #pragma endscop
}
