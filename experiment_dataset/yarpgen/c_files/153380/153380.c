/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~(var_2 ^ var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((18446744073709551601 ? (!-3) : 10));
                arr_5 [i_0] [i_0] [i_0] = 3388054179852907562;
                var_17 = ((!((min((((!(arr_1 [i_0] [i_0])))), (((arr_2 [11] [i_0] [11]) ? 18446744073709551591 : (arr_1 [i_0] [i_1]))))))));
                arr_6 [i_0] [0] [i_1] = (min(((13397 ? (((arr_1 [i_0] [i_1]) ? var_8 : var_3)) : ((((arr_0 [i_1]) ? (arr_0 [i_0]) : -13399))))), ((min((!var_3), (arr_3 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_18 = 3314873255;
    var_19 ^= var_1;

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_20 = ((((+((-1187977874937242527 ? (arr_10 [i_2] [i_2] [i_4]) : 1610612736))))) ? var_1 : (211 == 0));
                                var_21 = ((((((!(-32767 - 1))))) * ((202 ? ((3791375604 ? (arr_2 [i_3] [i_3] [i_2]) : (arr_16 [i_3] [i_3] [i_6]))) : (((max((arr_10 [i_4] [i_4] [i_4]), (arr_10 [7] [7] [1])))))))));
                            }
                        }
                    }
                    arr_19 [i_2] [i_3] [i_2] &= (2564202432 ? (max((arr_0 [i_3]), (arr_0 [i_4]))) : (((arr_0 [i_4]) / 19376)));
                    arr_20 [8] = (min((arr_17 [i_2] [i_2] [i_3] [3] [4]), (((max(var_11, var_6))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_22 = ((!((242 < (arr_13 [9] [9] [10] [i_2])))));
                                arr_27 [i_2] [i_7 - 1] [3] [i_8] = (((((!(arr_9 [i_7 + 1])))) * (((!(arr_23 [i_7 + 1] [i_7 + 1]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_23 = (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_9]);
                        arr_30 [0] [i_3] [i_9] [i_9] = (arr_16 [i_2] [i_3] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
                    {
                        arr_33 [3] [i_4] [i_3] [i_2] = arr_17 [i_2] [4] [4] [i_4] [i_10];
                        var_24 = (arr_26 [i_2] [i_2] [i_4] [i_10 + 1] [8] [i_4] [i_10 - 1]);
                        arr_34 [i_2] [5] [i_2] [i_2] = (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (int i_11 = 2; i_11 < 8;i_11 += 1) /* same iter space */
                    {
                        var_25 = ((!((min((arr_17 [i_2] [i_3] [i_4] [i_4] [i_11]), (arr_0 [i_3]))))));
                        var_26 = ((((max((arr_2 [i_2] [i_2] [i_2]), (max((arr_1 [i_2] [i_3]), (arr_31 [i_2] [i_3])))))) ? ((((arr_13 [i_2] [i_2] [i_4] [i_11 + 2]) ^ (~var_9)))) : (arr_0 [i_3])));
                    }
                }
            }
        }
        var_27 = (min(var_27, (arr_23 [i_2] [i_2])));
    }
    #pragma endscop
}
