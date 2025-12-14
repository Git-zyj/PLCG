/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_16;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_21 = (~-28415);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_22 = (((((((!(arr_1 [1])))) * (arr_0 [i_2]))) >> ((((((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [6] [i_2]) : (arr_4 [i_1] [4] [7])))) ? (arr_3 [i_0 - 2]) : (arr_10 [1] [i_1] [i_2] [i_1]))) - 12414))));
                        var_23 -= (((((((-(arr_0 [i_3])))) ? (arr_1 [i_1]) : ((((arr_2 [10] [i_2]) ? (arr_9 [i_3] [i_2] [i_1] [3]) : (arr_8 [i_0] [i_0 + 4] [i_3])))))) > ((((!((((arr_10 [i_0] [3] [i_0] [i_0]) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3]) : (arr_6 [i_3] [i_3] [i_3] [10]))))))))));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_24 = (arr_12 [i_0 + 1] [i_0 + 3] [i_1 - 1] [i_2] [i_2] [i_4] [i_4]);
                            var_25 = ((((arr_11 [8] [8] [12] [i_4 + 1] [8]) >= (arr_11 [11] [i_4] [i_4 + 1] [i_4 + 1] [i_4]))) ? (arr_0 [i_1]) : (((!((((arr_3 [1]) ? (arr_5 [i_4 + 1]) : (arr_11 [i_3] [i_1] [i_3] [6] [i_4]))))))));
                            var_26 = ((((((arr_4 [9] [i_2 + 1] [i_4 + 1]) ? (arr_0 [7]) : ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((-(arr_10 [i_0] [i_1 + 1] [i_4 + 1] [i_4]))) : (arr_9 [4] [1] [i_2] [9])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_27 = (((arr_15 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1]) ? ((((arr_7 [i_0]) || ((((arr_13 [i_0] [i_1] [8] [i_3] [i_5]) ? (arr_7 [1]) : (arr_12 [i_0 + 2] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))))) : (((!(arr_15 [1] [i_3] [i_3] [12] [1] [6]))))));
                            var_28 |= (((-(((arr_7 [i_0]) ? (arr_0 [i_1]) : (arr_7 [7]))))));
                            var_29 -= (((~(arr_6 [i_3] [i_2 + 1] [4] [4]))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (((~((~(arr_2 [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_31 |= (((((+(((arr_16 [12] [4] [i_7] [i_7] [i_7] [i_7] [i_7]) - (arr_19 [i_0] [9] [1] [8])))))) ? (arr_8 [i_0 + 4] [6] [i_8]) : (arr_7 [i_0])));
                        var_32 = ((~(--1)));
                    }
                }
            }
            arr_23 [i_6] [i_6] = ((!((((arr_0 [6]) & (arr_9 [i_6] [i_6] [i_6] [i_6]))))));
            var_33 ^= ((!(arr_15 [i_6] [8] [i_6] [i_6 + 1] [3] [8])));
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_32 [i_10] = (arr_6 [i_10] [2] [i_10 - 1] [i_11]);
                        var_34 &= ((-(arr_18 [i_9] [i_9] [4])));
                    }
                }
            }
            var_35 = (-(arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_0 - 1]));
            var_36 = -24880;
        }
        arr_33 [i_0 + 1] = 3;
    }

    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        var_37 |= (((~(arr_36 [i_12]))));
        var_38 = (min(var_38, (((((arr_34 [i_12 - 1]) + (arr_37 [i_12 - 1] [i_12 - 1])))))));
    }
    var_39 &= (((!(((var_12 ? var_18 : var_3))))));
    var_40 += var_10;
    #pragma endscop
}
