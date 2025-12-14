/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? (((281474976710655 ? var_0 : var_4))) : (1270576832354053590 & 14070295646070531908)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(1, var_5));
                var_21 = (min(var_21, ((min(1873004559, (max((arr_5 [i_1] [i_0]), (arr_3 [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 -= ((-((+(((arr_11 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4]) ? var_18 : (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4])))))));
                                var_23 = (max((min((~1), -776402493)), ((max(121, 1)))));
                            }
                        }
                    }
                }
                var_24 = (arr_14 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 *= ((~((~(arr_26 [i_7 + 3] [2] [i_8] [1] [i_8 + 4])))));
                                var_26 -= ((-(((arr_7 [i_5] [i_6] [i_9] [12]) ? ((max(134, var_3))) : (arr_11 [i_6] [i_6] [i_7] [i_7 + 2] [i_8 + 4] [i_9])))));
                            }
                        }
                    }
                    arr_28 [i_5] [i_5] [i_5] [i_6] = (605177048 + 11288660561646489128);
                }
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    arr_31 [i_5] [i_6] [i_10 - 1] [i_6] = (max((arr_16 [i_5]), (((-(!1270576832354053590))))));
                    var_27 = (arr_11 [i_5] [i_5] [i_5] [i_6] [i_10 - 1] [i_10]);
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_28 = (!(var_11 - -1));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_29 |= ((-var_16 ? (((~(~var_17)))) : (arr_5 [i_11] [i_12 - 1])));
                                arr_41 [i_5] [4] [i_5] [i_11] = (~1);
                                arr_42 [i_5] [9] [6] [6] = ((-1 ? ((max((arr_40 [2] [2] [2] [2] [2] [i_13 - 1] [8]), var_14))) : ((-(arr_26 [i_11] [i_13 - 1] [i_11] [i_12 + 3] [i_13])))));
                                arr_43 [i_5] = var_0;
                                var_30 *= (arr_17 [i_5] [i_11]);
                            }
                        }
                    }
                    var_31 = (max(var_31, (((((-((var_15 ? (arr_35 [i_6] [i_6] [i_6] [i_5] [i_5]) : var_11))))) ? (max(-1, 1551382887305671638)) : (((-(arr_13 [i_11] [i_5] [i_5]))))))));
                }
                var_32 = (min(var_32, (((((((arr_23 [i_5] [i_5]) ? 7032812428841025907 : (((arr_11 [i_5] [i_6] [i_6] [i_5] [i_6] [i_6]) ? (arr_25 [i_5] [i_6]) : var_9))))) ? ((~(arr_3 [i_6] [i_5]))) : (min(10, 6314092598066411047)))))));
                arr_44 [1] [i_6] = (max((((var_9 < (~var_12)))), 1555181462));
            }
        }
    }
    var_33 = (((((var_12 ? var_8 : 6871252429112210565))) ? (((17 ? 154 : var_3))) : var_17));
    #pragma endscop
}
