/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = arr_3 [i_0 - 1] [i_0 + 1];
        arr_5 [i_0 - 1] = (~var_11);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_2;
        arr_9 [i_1 + 1] [i_1 + 2] = ((513085657 ? 15456196346395027519 : 65523));
        arr_10 [i_1 + 1] = 130;
        arr_11 [i_1 + 2] = (!(((25 * ((-(arr_7 [i_1 - 1])))))));
        arr_12 [i_1] = var_9;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_16 [i_2] &= ((-23247 ? (arr_15 [i_2] [i_2]) : ((((!(arr_14 [i_2] [i_2]))) ? ((var_7 ? (arr_15 [i_2] [i_2]) : var_6)) : 42976))));
        arr_17 [i_2] = ((~65493) ? (((((var_6 ? var_5 : var_7))) ? var_9 : var_6)) : ((((var_4 != (((arr_6 [i_2]) ? var_5 : var_9)))))));
    }
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_23 [i_3 - 3] [i_4] = 4;
            arr_24 [i_3 + 2] [i_4] = ((~9223372036854775794) ? 4957012236583813308 : (arr_18 [i_3 - 1] [i_3 + 1]));
        }
        for (int i_5 = 4; i_5 < 7;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_29 [i_5] [i_5] [i_5] = (min((arr_2 [i_5 - 4]), ((((arr_2 [i_5 + 2]) > 165)))));
                arr_30 [i_3] [i_5 + 3] [i_5] [i_3] = (max(((((arr_13 [i_3 - 4]) + (9223372036854775807 > var_7)))), (((arr_21 [i_3 - 2] [i_5 - 2]) - (arr_1 [i_3 - 4])))));
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                arr_35 [i_5] [i_5] [i_5] = ((!((((-9223372036854775807 - 1) + var_4)))));
                arr_36 [i_3] [i_5 - 3] [i_3] = (((!4294967287) ? (arr_13 [i_3 + 1]) : var_12));
                arr_37 [i_3] [i_5] [i_3] = (((!var_1) % (((arr_18 [i_5] [i_7]) ? var_11 : var_12))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_43 [i_3] [i_5] [i_7] [i_3] [2] = var_3;
                            arr_44 [i_5] = 32;
                            arr_45 [i_9] [i_5 - 2] [i_5] [i_5 + 3] &= ((52096 ? 1368806740 : 22564));
                            arr_46 [i_3] [i_9] [i_7 - 1] [i_9 - 2] = (((((var_9 ? var_10 : (arr_1 [i_3])))) ? (!var_13) : (arr_28 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        }
                    }
                }
                arr_47 [i_5] [i_5] [i_7] = 30;
            }
            arr_48 [i_5] [i_5] [i_5 + 3] = ((((max(1, (!var_0)))) ? (((-9223372036854775806 > (arr_34 [i_3])))) : -var_8));
            arr_49 [i_5] [i_5] [i_5] = (((((134 ? -406081262 : -1153018503))) / (arr_13 [i_3])));
        }
        arr_50 [i_3] = var_3;
        arr_51 [i_3] = 3418487167;
        arr_52 [i_3 - 3] = ((((((!16495019636833421015) ? 32748 : var_8))) ? (!var_13) : (~18644)));
    }
    var_14 = (~215);
    #pragma endscop
}
