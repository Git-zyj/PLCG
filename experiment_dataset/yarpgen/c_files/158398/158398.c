/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [5] = var_2;
        var_20 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_6));
        var_21 = var_16;
        var_22 = (((var_6 | var_8) + ((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((-(arr_4 [i_1] [1])));
        arr_6 [i_1] = (((~var_14) ? ((~(~var_0))) : var_6));
        var_23 = (max(var_23, ((((-26132 & 172) ? (var_7 <= var_3) : (arr_3 [i_1]))))));
        arr_7 [i_1] = arr_4 [i_1] [8];
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_24 += (((arr_3 [i_2]) ? var_15 : (((-26131 == (arr_0 [i_2] [i_2]))))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_25 = (((!var_18) ? var_5 : (((!(((arr_13 [i_2] [i_3] [i_2]) >= (arr_3 [i_2]))))))));
            var_26 = ((~(((arr_4 [i_3] [i_2]) ? var_14 : (arr_0 [i_2] [i_3])))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_17 [i_2] [2] = (arr_1 [9]);
            var_27 = (arr_0 [i_4] [i_4]);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_28 [i_6] [i_7] [i_8] = var_5;
                        var_28 = (max(var_28, (arr_20 [i_5] [i_6] [5])));
                        var_29 = var_18;
                        arr_29 [i_6] [i_6] = var_2;
                    }
                }
            }
        }
        var_30 = (!(((var_16 ? (arr_13 [i_5] [i_5] [i_5]) : var_16))));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_32 [i_5] |= (((arr_10 [i_9]) | (~var_1)));
            arr_33 [i_5] [i_5] [i_9] = arr_20 [i_5] [i_5] [i_9];
            var_31 = (arr_27 [i_5] [i_5] [6] [i_9] [i_9]);
        }
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            var_32 = var_13;
            var_33 = (arr_12 [12]);
            arr_37 [i_5] [i_10] [i_5] = var_5;
            arr_38 [i_5] = (~var_4);
        }
        var_34 = (max(var_34, (var_9 == var_16)));
    }
    #pragma endscop
}
