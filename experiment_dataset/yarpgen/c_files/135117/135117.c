/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ^ ((var_11 ? var_11 : 224))))) ? ((~((var_7 ? (arr_1 [i_0]) : var_4)))) : 15));
        arr_3 [i_0] [i_0 - 1] = var_12;
        var_14 = (max(var_14, (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (var_5 * -var_4)))));
        arr_4 [11] = (((((((-(arr_1 [i_0 + 2]))) >= var_3))) <= ((max((arr_1 [14]), 20)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (((((((var_4 ? (arr_6 [0] [i_1]) : var_9))) ? ((107 & (arr_1 [1]))) : ((var_8 ? (arr_0 [i_1] [i_1]) : var_8)))) << (((arr_5 [i_1]) ? var_13 : (arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = (min((((((var_6 + (arr_5 [i_1])))) ? (max((arr_5 [i_1]), (arr_1 [i_1]))) : (arr_6 [14] [i_1]))), (min((!16518885166347794248), ((var_13 ? 17492213538943619583 : (arr_6 [i_1] [i_1])))))));
        arr_8 [i_1] [i_1] = arr_1 [i_1];

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_16 -= ((max((((arr_12 [i_2]) ? (arr_11 [i_3] [i_3]) : (arr_5 [i_2]))), var_13)));

                        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_17 -= ((!((max((((arr_0 [i_1] [i_1]) ? 1 : var_6)), var_4)))));
                            arr_18 [i_1] [i_1] [i_3] [1] [i_2] = (((((arr_10 [i_2] [i_2 + 1] [i_2 - 1]) ? (arr_10 [i_2] [i_2 + 1] [i_2 - 1]) : (arr_10 [i_2] [i_2 - 2] [i_2 - 1]))) + (((arr_10 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_10 [i_2] [i_2 - 1] [i_2 + 1]) : (arr_10 [9] [i_2 - 2] [i_2 - 1])))));
                            var_18 |= ((((((arr_9 [i_5] [i_5 - 1] [i_2 - 1]) - (arr_14 [1] [i_5 + 1] [i_3] [i_4] [i_5] [i_3])))) + (max((arr_9 [i_1] [i_1] [i_1]), var_11))));
                            arr_19 [i_5] [i_2] [i_2] [i_2] [i_5] [i_5] [i_5] = (min(((var_9 ? (!var_13) : ((((arr_6 [i_4] [i_2 - 1]) && (arr_5 [i_1])))))), var_13));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_2 + 1] [i_2] [7] [i_2] [i_6] = var_12;
                            var_19 = (min(var_19, (((-(arr_17 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_2 - 2] [i_1] [i_1] [i_1] [i_4] [i_7 - 3] = ((((((arr_14 [i_7] [i_7] [i_3] [3] [12] [i_3]) ? -1433735290278158795 : (arr_20 [i_1] [i_1])))) ? ((~(arr_0 [2] [i_2]))) : (arr_13 [i_7 - 1] [i_7 - 3] [i_2 + 1])));
                            arr_27 [i_7 - 1] [i_4] [i_4] [i_1] [i_1] [i_1] |= var_6;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_10 [i_1] [i_2] [i_8]) || (arr_1 [i_2 - 1]))))));
                            var_21 = (((arr_24 [i_8] [14] [i_1] [i_1]) > (((arr_14 [i_1] [i_2 + 1] [i_2] [i_3] [i_4] [10]) + var_3))));
                        }
                        var_22 = ((((min(var_13, var_5))) && ((max(18446744073709551615, (6485968031010286208 == 2217896799))))));
                    }
                }
            }
            arr_30 [i_2 - 2] [i_1] [i_1] = (arr_6 [i_1] [i_1]);
            var_23 = (min(var_23, (((((var_11 ? (arr_12 [i_2]) : (arr_28 [i_2 - 2] [i_2] [i_2] [i_1] [i_1] [i_1]))))))));
            arr_31 [i_1] [i_1] = (((((!(arr_28 [i_1] [12] [6] [i_1] [i_1] [i_2 + 1])))) <= (((!(arr_28 [i_1] [i_1] [i_1] [i_2 - 2] [i_2] [i_2]))))));
            arr_32 [i_1] [i_1] = min(var_7, (max(var_4, ((((arr_17 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2]) ^ var_11))))));
        }
    }
    var_24 = min(65530, (((var_1 ^ var_9) & (~var_0))));
    var_25 = var_1;
    #pragma endscop
}
