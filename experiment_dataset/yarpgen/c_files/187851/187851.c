/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) * (arr_2 [i_0])));
        var_18 = ((min(239, var_10)));
        arr_5 [i_0] [i_0] = ((((((!232) >= (~var_13))))) | (max(((17 ? var_12 : -1)), (((237 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 = var_10;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 = (max(var_20, 40));
            arr_10 [i_1] [i_1] |= (-(arr_1 [i_1]));
            var_21 += ((var_2 ? (arr_7 [i_1]) : (arr_6 [i_1] [i_1])));
            var_22 = var_16;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_1] |= 120;
            var_23 |= -121;
            arr_14 [i_1] = ((var_3 & (arr_11 [i_1] [i_1] [i_1])));
        }
        var_24 = 6;
        var_25 &= -1;
        arr_15 [i_1] [i_1] = -var_9;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = (max(89, (max((arr_1 [i_4]), 19))));
        var_26 = (((237 << (((arr_1 [i_4]) + 25825)))));
        var_27 = -19729;
        arr_21 [i_4] = (arr_8 [i_4]);
    }
    var_28 = ((((!((max(var_15, var_0)))))));
    #pragma endscop
}
