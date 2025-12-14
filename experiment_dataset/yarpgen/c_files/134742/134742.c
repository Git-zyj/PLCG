/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = (((var_14 * var_12) ? -900392053 : (arr_0 [i_1 - 2])));
            arr_6 [i_1] [i_1] [i_0] = -900392050;
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_0] [i_2] [i_2] = (2188811372278617434 + var_14);
                    arr_13 [i_0] [i_0] = (((arr_7 [i_2] [11] [i_2 + 1]) ? (arr_7 [i_2] [i_2] [i_2 + 1]) : (arr_3 [i_2 - 1] [i_2] [i_2 + 1])));
                    arr_14 [i_0] [i_0] [i_3] = ((~(arr_0 [i_2 - 1])));
                    arr_15 [i_0] [i_2 - 1] [i_2 - 1] [i_2] = (((arr_9 [i_2 - 1] [i_2] [i_3 + 1]) + -var_14));
                }
            }
        }
        arr_16 [i_0] = (((var_11 >> (var_7 + 212100139))));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_21 [11] = var_2;
        arr_22 [i_4 - 1] [13] = ((~(((!(arr_17 [i_4 - 1]))))));
        arr_23 [i_4 - 1] = -2135308437;
        arr_24 [i_4] [i_4 + 1] = -2188811372278617435;
        arr_25 [i_4] = (min((min((arr_18 [i_4] [i_4 + 1]), (arr_18 [i_4] [i_4 - 1]))), (((((arr_20 [i_4]) ? var_4 : (arr_20 [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_28 [i_5] [i_5] = (max((var_6 & var_2), var_5));
        arr_29 [i_5] [i_5] = (((((~(arr_26 [i_5] [i_5])))) ? var_5 : ((((arr_17 [i_5]) ? (arr_20 [i_5]) : (arr_17 [i_5]))))));
        arr_30 [i_5] = (!var_2);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                {
                    arr_36 [i_7] [i_6] [i_7] [i_5] = 2159658858;
                    arr_37 [i_5] [i_6] [i_6] [i_5] = var_2;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_42 [i_8] = var_12;
        arr_43 [i_8] [i_8] = (var_10 && var_3);
        arr_44 [i_8] [17] = var_11;
        arr_45 [i_8] [i_8] = (((arr_18 [i_8] [i_8]) & (arr_18 [i_8] [18])));
    }
    var_16 = var_11;
    #pragma endscop
}
