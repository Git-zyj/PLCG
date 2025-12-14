/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = -6;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [16] [16] [22] = 63447;
                    var_17 = (arr_10 [i_1 + 2] [i_1 - 1]);
                }
            }
        }
        var_18 -= ((!(arr_2 [24])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_5] [i_4] [i_4] [i_3] [i_0] = (arr_7 [i_6] [i_3] [18] [18]);
                            var_19 = ((arr_20 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 2]) ? var_2 : (arr_20 [i_3] [i_3] [i_3] [i_6 - 1] [i_6 - 2]));
                            var_20 -= -var_0;
                        }
                    }
                }
            }
            var_21 *= (((((arr_8 [i_0] [i_0] [i_0] [i_3]) / 5771519740020166562)) != (arr_13 [i_3] [i_0])));
            var_22 = (arr_7 [i_3] [i_3] [i_3] [10]);

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_26 [i_7] [i_0] [i_0] [i_0] = -32724;
                var_23 = var_9;
                var_24 |= ((((!(arr_9 [i_7] [4]))) ? (arr_7 [3] [i_3] [i_3] [i_0]) : (((7591 ? 1253919866 : (arr_17 [i_0] [i_3] [i_3] [i_7]))))));
                var_25 ^= (arr_21 [i_3]);
                arr_27 [10] = (arr_9 [i_3] [i_7]);
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            arr_34 [i_8] = (arr_20 [1] [i_8] [10] [1] [i_9]);
            var_26 = (((-(arr_20 [i_9] [i_9] [i_8] [i_8] [i_8]))));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            var_27 ^= (arr_13 [10] [i_10]);

            for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_28 += (arr_9 [i_8] [i_8]);
                var_29 = ((-(!20023)));
                var_30 |= (((arr_38 [i_8] [i_8] [i_8]) + (arr_38 [7] [i_11 - 2] [3])));
            }
            for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
            {
                var_31 -= (arr_5 [i_8] [i_12 + 3] [i_12]);
                arr_43 [i_8] [i_8] [i_10] [i_12] = (i_8 % 2 == zero) ? ((((arr_30 [i_10] [i_10] [i_8]) >> (arr_30 [i_10] [i_12] [i_8])))) : ((((arr_30 [i_10] [i_10] [i_8]) >> (((arr_30 [i_10] [i_12] [i_8]) - 48)))));
                arr_44 [i_8] [i_10] [i_8] = (((arr_25 [i_12 + 2] [i_12 + 3] [i_12 - 1] [i_12 + 2]) ? ((-107 ? (arr_20 [i_8] [i_8] [i_10] [2] [i_12 + 2]) : (arr_0 [1] [i_8]))) : (((65518 ^ (arr_2 [i_12 - 1]))))));
            }
            arr_45 [i_8] [i_8] [17] = (arr_8 [i_8] [i_8] [i_8] [i_10]);
        }

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_49 [14] [i_13] [14] &= (((arr_36 [i_8]) > ((((arr_2 [i_13]) * (arr_30 [i_8] [2] [14]))))));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 24;i_15 += 1)
                {
                    {
                        var_32 = 1836352933747147731;
                        var_33 = (arr_29 [i_8] [i_8]);
                        var_34 = (arr_36 [i_14 - 1]);
                    }
                }
            }
            arr_55 [i_8] [i_8] = (arr_35 [i_13] [6] [i_8]);
        }
        var_35 += (((arr_15 [i_8] [0] [i_8]) ? (((!(arr_2 [7])))) : (arr_41 [i_8] [i_8])));
        var_36 *= (((arr_48 [i_8]) ? ((((arr_29 [i_8] [1]) * (arr_29 [i_8] [22])))) : 3268900284));
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                {
                    arr_62 [i_16] [6] [i_18] [i_16] = ((((((arr_41 [1] [13]) ? (min((arr_56 [17]), 7590)) : -522560404))) ? (+-188) : (max((arr_58 [i_16] [i_17 + 1] [1]), -var_16))));
                    var_37 += ((!(((2509268116 ? (min((arr_36 [7]), (arr_38 [i_18] [i_16] [i_16]))) : (arr_40 [i_16]))))));
                }
            }
        }
    }
    var_38 |= var_9;
    #pragma endscop
}
