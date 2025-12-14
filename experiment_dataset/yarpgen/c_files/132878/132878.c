/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!((((arr_1 [i_0 - 1]) - (arr_1 [i_0 - 1])))));
        var_11 = (min(var_11, (((!(arr_2 [i_0 - 2]))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_12 = (((((max((arr_2 [i_1]), 22129)))) ? (((max((arr_0 [i_1]), (min(var_6, (arr_0 [i_1]))))))) : 943679602));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_13 = 1839625276;
                                var_14 = ((((((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]) <= var_3)))) > (arr_17 [i_1 + 1] [11] [0] [i_5 + 1] [i_5 - 1]))));
                                var_15 = (max(var_15, (((+(max((arr_14 [i_5] [i_4] [i_3] [i_1]), 2097151)))))));
                            }
                        }
                    }
                    arr_18 [9] [9] [i_1] |= (arr_14 [1] [9] [i_3] [i_1]);

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_21 [i_2] [i_6] [i_3] [i_2] [i_2] = (((-(arr_16 [i_6] [i_3] [10]))));
                        var_16 = (~15967756576418683788);
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        arr_26 [i_1 - 1] [i_1] [i_3] [2] [1] |= (((((((((arr_11 [i_1] [i_3] [i_1] [i_7]) ? -1159673041 : (arr_13 [i_7] [i_3] [2] [8] [i_2] [i_1]))) < (((~(arr_0 [i_3])))))))) < ((-548016117 | (arr_17 [i_2] [i_2] [10] [7] [i_2])))));
                        arr_27 [i_7] [i_7 + 1] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = (((((((max((arr_17 [i_7] [i_2] [i_2] [i_1] [i_1]), (arr_1 [i_1])))) ? (((0 + (arr_10 [i_1] [i_1] [i_1])))) : (max(-7513917180385606658, (arr_1 [i_3])))))) ? (arr_17 [i_1 - 2] [i_1] [7] [2] [i_1]) : ((((!(arr_9 [i_1] [i_3])))))));
                        var_17 |= (((max(2478987497290867828, var_4))));
                        arr_28 [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] [i_7] [i_1 - 1] |= (max(1, 177));
                        var_18 -= ((-((~(((-256 + 2147483647) >> (arr_9 [i_3] [i_1])))))));
                    }
                    arr_29 [i_3] = (min((max((arr_17 [i_1 - 1] [i_1 + 1] [i_1] [5] [i_1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1]))), (min((arr_17 [i_1 - 1] [i_1 + 1] [i_1] [1] [i_1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2])))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_19 = (arr_31 [i_8] [i_8]);
        var_20 = (arr_30 [i_8]);
        var_21 = ((~(arr_30 [i_8])));
        var_22 = (max(var_22, ((-(min((127 || var_1), -8089882351381514516))))));
    }
    var_23 = (min(var_23, var_3));
    var_24 = var_5;
    #pragma endscop
}
