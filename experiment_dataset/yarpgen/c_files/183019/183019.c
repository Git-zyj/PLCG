/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((1184830861 > var_11) ? var_1 : ((max(var_7, 834)))))) ? var_17 : (min(((var_16 ? var_10 : 32049)), (min(-1348811929, 1982))))));
    var_21 |= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = ((-1348811915 ? (arr_1 [i_0] [2]) : (arr_1 [6] [i_0])));
        arr_2 [i_0] = arr_0 [i_0];
        var_23 -= ((((623387511 ? (arr_1 [10] [i_0]) : 1)) - ((var_19 | (arr_1 [i_0] [10])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 -= (max(((min((arr_4 [i_1] [i_1]), 0))), 0));
        arr_5 [i_1] = ((((((162314410 ? (arr_4 [i_1] [i_1]) : var_6)) & (arr_4 [i_1] [i_1]))) * (min((((arr_4 [6] [22]) ? var_14 : 3920125109)), ((min((arr_4 [21] [i_1]), (arr_4 [15] [i_1]))))))));
        var_25 = (min((max((arr_3 [1]), (arr_3 [i_1]))), ((((((~(arr_3 [i_1])))) || 1644160044)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_26 += (((arr_4 [0] [i_1]) ? (arr_9 [i_1] [i_1]) : var_5));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_27 = (min(var_27, (arr_13 [i_1] [i_5])));
                            var_28 += ((var_15 ? (((var_11 + 2147483647) >> (-194152933 + 194152944))) : var_12));
                        }
                    }
                }
            }
            arr_20 [i_1] [i_1] = ((910734920 >= (~var_2)));
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_29 += ((((arr_14 [i_6]) < (var_2 | var_1))) || var_0);

        /* vectorizable */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            arr_27 [i_7] = (((arr_10 [i_6] [i_7 - 1] [i_7]) ? (arr_10 [i_6] [7] [i_7]) : (arr_10 [i_6] [i_6] [i_7])));
            var_30 |= (((var_12 * (arr_16 [i_6]))));
            var_31 = (((((arr_17 [i_6] [21] [5] [i_7] [i_7] [i_7]) ? var_5 : 0)) & ((0 >> (var_0 + 1311)))));
            var_32 += (arr_3 [i_7 - 1]);
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_33 |= (max(((-1348811915 / ((((arr_22 [i_8]) < var_9))))), (var_5 || var_9)));
        arr_30 [i_8] = var_0;
    }
    #pragma endscop
}
