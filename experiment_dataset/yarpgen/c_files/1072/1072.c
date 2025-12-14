/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 - 2] = var_5;
        arr_3 [8] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((var_17 ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])));
        arr_8 [4] = (((!(arr_6 [i_1] [i_1]))));
        arr_9 [i_1] [i_1] = arr_1 [i_1];
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = ((min((((arr_11 [i_2]) ? (arr_10 [i_2]) : (arr_11 [i_2]))), (arr_10 [i_2]))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = ((~(arr_13 [i_2])));
            arr_16 [i_2] [i_2] [i_2] = ((~(arr_10 [i_2])));
            arr_17 [i_2] [i_3] = (((arr_14 [i_2] [i_2]) ? (arr_14 [i_2] [i_3]) : (arr_14 [i_2] [i_3])));
        }
        arr_18 [i_2] [i_2] = ((-((((((~(arr_11 [i_2])))) && var_6)))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_4] = (min((((arr_11 [20]) ? (arr_11 [i_2]) : (arr_11 [i_2]))), (((arr_11 [i_2]) ? var_4 : (arr_11 [i_2])))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_29 [i_7 + 1] [i_5] [i_4] [i_4] [5] [i_5] [i_2] = (((arr_27 [i_6] [i_6 - 1] [i_6] [i_6 - 2] [11]) ? (arr_27 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [1]) : (arr_27 [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6])));
                            arr_30 [i_2] [i_5] [i_2] [i_2] [i_2] = ((!(arr_25 [i_4] [i_4] [i_5 + 2] [i_6])));
                        }
                        arr_31 [i_6] [i_4] [i_4] [i_2] = ((((var_10 || (arr_24 [i_2] [i_4])))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_34 [i_8] = (max((arr_27 [i_2] [i_8] [i_2] [i_2] [1]), ((((min((arr_33 [i_2]), (arr_28 [20] [i_2] [i_2] [17] [i_8] [i_8])))) ? (arr_13 [i_2]) : var_1))));
            arr_35 [i_2] = ((!(~var_5)));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_38 [i_9] [i_9] = (max((max(var_14, (arr_26 [i_9] [i_9] [i_9] [i_9] [i_9]))), (min(var_17, (((arr_11 [13]) ? var_2 : (arr_26 [i_2] [i_2] [i_2] [i_2] [i_9])))))));
            arr_39 [i_2] [i_2] [i_9] = (min((max((min((arr_13 [i_2]), var_0)), (((var_13 << (var_17 - 20403)))))), (arr_32 [i_9] [i_2])));
            arr_40 [i_2] [i_2] [i_2] = (max(-1, ((((max((arr_27 [i_2] [i_2] [i_2] [i_2] [i_9]), (arr_28 [i_2] [i_9] [i_2] [i_2] [i_2] [i_2])))) ? var_2 : (arr_19 [i_2])))));
        }
        arr_41 [i_2] [i_2] |= ((~((78 ? (arr_13 [6]) : (0 ^ 52434)))));
    }
    var_18 = (max((((((1 ? -79 : -26723))) ? (!var_11) : var_6)), (((~var_11) ? (min(var_5, var_14)) : (!var_1)))));
    #pragma endscop
}
