/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [0] = ((((arr_2 [i_0]) ? 1184185119414979760 : ((max((arr_1 [i_0] [i_0]), (arr_3 [i_0])))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = ((1 ? 22 : -124));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = ((~(arr_10 [i_2])));
                        arr_15 [i_2] [i_1] |= -1;

                        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, -1356180902692200355));
                            var_21 = (min(var_21, (arr_16 [i_0] [i_0] [i_0] [i_4])));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_5] = ((arr_20 [i_3 - 1] [i_1] [i_2] [i_0] [8] [i_5 + 1]) ? (arr_6 [i_3 + 2] [i_0] [i_5 - 2]) : var_16);
                            var_22 &= 111;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_23 *= ((((((arr_20 [i_0] [14] [i_0] [i_2] [i_0] [i_0]) ? var_16 : (arr_1 [i_6] [i_1])))) ? ((var_13 ? (arr_3 [i_3]) : (arr_19 [i_6] [i_2] [i_6]))) : 38810));
                            arr_24 [i_0] [i_0] [i_2] [8] [i_0] = ((~(arr_16 [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_0])));
                            arr_25 [20] [i_1] [i_2] [i_0] [18] = ((((arr_14 [i_6] [i_6] [i_0]) > var_7)) ? (arr_3 [i_2]) : (((arr_0 [i_0]) ? 72057594037926912 : 1)));
                            arr_26 [i_0] [i_0] = (((arr_16 [i_1] [i_2] [5] [i_0]) ? (arr_16 [i_3] [i_3] [i_3 - 1] [i_0]) : var_8));
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_30 [i_0] [i_7] [i_0] = ((((((arr_22 [i_0] [i_0] [i_0] [i_7] [i_7]) ? (arr_13 [i_0] [i_7] [i_7] [i_7]) : (arr_19 [i_0] [i_7] [i_0])))) ? ((22 ? 9223372036854775807 : -1)) : ((max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 0)))));
            arr_31 [i_0] [i_0] [i_7] = (((arr_11 [i_7] [i_7] [i_0]) != (arr_29 [i_0] [i_7])));
            arr_32 [i_0] [i_7] [i_7] = (((~3) ? (((((~(arr_3 [i_7])))) ? (((arr_22 [i_7] [1] [i_7] [i_7] [i_7]) ? 3527074786 : -2322)) : (arr_29 [i_0] [i_0]))) : 11));
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_37 [i_8] [i_8] [i_8] = (min((arr_19 [i_9] [2] [i_9]), ((((arr_7 [i_8] [i_9] [i_9]) ? (arr_33 [i_8] [i_9]) : (arr_7 [i_8] [i_9] [i_9]))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_43 [i_8] [1] [i_8] [i_8] [i_8] = (!63);
                        arr_44 [i_8] [i_11] [i_10] [i_11] [i_9] = (max(((-1 ? 9 : 184)), (arr_0 [i_9])));
                        arr_45 [i_8] &= (max(((((-9046883714304203225 ? 2147483625 : 9)))), (max((arr_40 [19] [i_9] [i_10] [i_11]), (arr_29 [i_9] [i_9])))));
                        arr_46 [i_8] [i_8] [i_8] [i_8] = (max((min(((-(arr_0 [i_9]))), (arr_14 [i_8] [i_8] [i_9]))), 57116));
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            var_24 = (min(var_24, (arr_9 [16] [i_8] [i_12])));
            arr_50 [i_12 + 1] [i_12 + 1] [i_8] = (arr_48 [i_8] [i_8] [i_8]);
        }
        arr_51 [i_8] = (max(-4, (~var_16)));
        arr_52 [i_8] &= ((-8 % 1267336176495102351) ? ((((!(!var_0))))) : (((arr_23 [i_8] [i_8] [i_8] [i_8]) ? (arr_40 [i_8] [i_8] [i_8] [i_8]) : -7322865366433519640)));
        arr_53 [10] [i_8] = (arr_6 [i_8] [16] [i_8]);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = (arr_11 [i_13] [17] [i_13]);
        arr_59 [i_13] = (((arr_57 [i_13] [20]) - ((((arr_35 [i_13]) ? (arr_3 [1]) : (arr_29 [20] [i_13]))))));
    }
    var_25 = var_17;
    #pragma endscop
}
