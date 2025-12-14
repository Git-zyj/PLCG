/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] = (((arr_9 [i_3 - 2] [i_3 - 3] [i_3 + 1] [10] [i_3 - 3] [i_3 + 2]) / (arr_5 [i_3 - 1])));
                        var_12 = ((((((arr_10 [i_0] [11]) ? var_3 : (arr_0 [10] [i_1])))) ? ((var_7 ? (arr_2 [i_2]) : (arr_3 [i_0]))) : (arr_6 [i_3 - 3] [i_1] [i_1] [i_0])));
                        var_13 += ((!(arr_3 [i_3])));
                        var_14 = (max(var_14, (~var_6)));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            var_15 = (arr_12 [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4] [10] [i_4]);
                            var_16 = (((arr_0 [i_3 + 2] [i_2]) ? (arr_7 [i_3 - 2] [i_4 - 1] [i_4 - 2] [10]) : (arr_1 [i_4 + 1])));
                            var_17 -= var_7;
                            var_18 -= (((var_2 || var_2) ? var_7 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_3 - 1]) : var_5))));
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = (arr_17 [8] [6] [i_5 + 1] [i_5 + 1] [i_3 + 1]);
                            arr_19 [i_1] [9] [i_1] [i_1] = ((-(arr_12 [i_2] [i_5] [i_5 + 1] [i_5 + 1] [i_3 + 2] [i_3 - 2] [i_2])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [7] [i_1] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_6] = (((arr_16 [i_3 - 3] [i_3 + 2] [i_3 - 1] [1] [i_3 + 2] [1]) ? (arr_17 [i_3] [i_3 - 1] [i_3 - 2] [5] [i_3 + 1]) : (arr_16 [i_0] [i_3 + 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3])));
                            arr_23 [i_0] = (arr_16 [i_3 + 2] [i_3] [5] [i_3 - 2] [i_3 - 2] [i_6]);
                        }
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_19 = ((~(arr_9 [12] [i_7 + 4] [i_3 + 1] [1] [i_3 + 2] [i_3 + 2])));
                            var_20 = (arr_10 [i_3 + 1] [i_7 + 2]);
                            arr_26 [i_0] [7] [i_2] [i_3 + 1] [i_3 + 1] [i_7 + 3] [i_7 + 3] = (arr_16 [i_0] [i_0] [2] [2] [i_7] [i_7 + 1]);
                        }
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_1] |= ((((!var_0) <= (arr_17 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 1]))));
                        var_21 |= (((arr_16 [i_0] [i_0] [i_1] [i_0] [6] [6]) >= -2147483647));
                        arr_30 [i_8] [i_8] = (((((arr_16 [i_8 + 2] [i_8 - 3] [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 - 3]) - (arr_16 [i_8 - 1] [i_8] [1] [i_8 + 2] [i_8 - 3] [i_2])))) || var_8);
                        var_22 ^= ((!((((max(var_3, (arr_15 [i_8] [i_8]))) | (arr_28 [i_8] [i_8 - 1] [i_8 + 1] [i_0]))))));
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (arr_17 [i_1] [i_9 + 1] [6] [i_1] [6])));
                        var_24 = (arr_21 [i_9 + 2]);
                        var_25 -= ((!(((+(((arr_13 [i_2] [i_2] [i_1] [6] [4] [i_2] [i_9]) ? (arr_8 [i_0] [i_1] [i_2] [i_9 + 1]) : (arr_9 [i_2] [7] [i_2] [i_9] [i_0] [i_2]))))))));
                        var_26 = (((min(var_9, (arr_17 [i_0] [i_0] [i_1] [4] [i_1])))));
                    }
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        arr_36 [i_0] [11] [i_2] [i_10 - 2] = ((var_9 / (arr_28 [i_10 - 3] [i_10 - 3] [i_10 - 1] [i_10 - 2])));
                        var_27 = (min(var_7, (min((arr_4 [8]), (arr_27 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10])))));
                    }
                    var_28 = (((!(arr_14 [i_0] [i_0] [i_0] [0] [i_1]))) ? ((min(((((arr_32 [i_0] [i_0] [i_2] [i_0]) || (arr_27 [i_0] [i_1] [i_2] [i_1] [i_1])))), var_0))) : ((((arr_15 [i_1] [i_2]) ? (arr_33 [i_0] [i_0] [i_1] [i_2]) : var_6))));
                    arr_37 [i_0] [2] [2] [i_0] &= (((arr_2 [i_0]) << (((arr_13 [i_2] [12] [12] [i_2] [i_1] [i_1] [i_2]) - 38698))));
                }
            }
        }
    }
    var_29 = var_11;
    var_30 |= var_2;
    #pragma endscop
}
