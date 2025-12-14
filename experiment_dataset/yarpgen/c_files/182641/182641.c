/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = 118;
                    arr_8 [14] [14] [22] [14] &= ((min(((max(1, 30718)), (-75 - 117)))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_13 = -113;
                            var_14 += (((arr_0 [i_0]) ? (max(-25235, -1027423301706898259)) : (((max(var_2, -106))))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_15 = (max(var_15, -118));
                            var_16 = var_1;
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] = (((-113 ? var_6 : ((((!(arr_6 [i_5] [i_3] [i_0] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_17 += ((~(var_6 != 30691)));
                            var_18 = (!var_2);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_0] = 216;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [18] [i_6 + 1]);
                        }
                        arr_21 [15] [15] [5] [i_1] [5] [8] = ((!(~1)));
                        var_19 -= ((((((arr_11 [i_2 + 1] [i_2 + 3] [i_0]) & (arr_11 [i_2 - 1] [i_2 - 2] [i_1])))) ? (((arr_14 [i_0] [9] [9] [i_0] [9] [i_0] [8]) / (~var_4))) : (arr_11 [24] [i_2 + 1] [i_2 - 2])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_20 = (arr_23 [i_0] [i_0] [3] [3]);
                        arr_24 [i_0] [i_0] [i_2 + 3] [i_7] = ((!((((arr_18 [i_7] [i_2 + 2] [i_0]) ? var_0 : -var_9)))));
                        var_21 = (min(var_21, ((min((((((-118 / (arr_0 [i_0])))) ? (arr_18 [i_2 + 1] [i_2 + 1] [i_2 - 2]) : 121)), ((max((arr_14 [i_2 - 1] [i_2 + 3] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2]), (arr_12 [0] [i_2 + 2] [i_2] [i_2] [i_2 + 2])))))))));
                    }
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        var_22 = var_0;
                        var_23 = ((!((((arr_0 [i_2 - 2]) + (arr_1 [i_2 - 2]))))));
                        var_24 ^= ((((113 ? var_2 : var_6)) < (((var_5 ? (arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 2]) : (arr_11 [i_2 + 3] [i_2 + 2] [i_2 + 3]))))));
                        var_25 = (arr_17 [i_8 + 1] [i_8] [i_0] [i_0] [i_0]);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [i_10 + 1] = ((min(var_10, ((8429 + (arr_27 [i_0] [i_0] [i_0] [i_0]))))));
                            var_26 = (max(var_26, 77));
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_27 = ((min(5086424341487707757, 9402738883549479986)));
                            var_28 |= ((!((!(((arr_34 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) != var_5))))));
                            var_29 = ((((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_2 - 1] [i_9])))) ? ((-(arr_0 [i_0]))) : (arr_12 [i_2] [i_2] [19] [19] [i_2])));
                            arr_39 [i_0] [i_1] [i_0] &= (var_3 * (!var_9));
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_42 [i_0] [22] [i_0] [i_0] [i_12] [i_2] [i_0] = ((arr_23 [i_0] [i_1] [i_2 - 2] [i_12 - 1]) < (1129 >= -116));
                            arr_43 [i_2] [i_9] [i_2] = ((~(arr_11 [i_0] [i_2] [i_2])));
                        }
                        var_30 = (((32767 - (arr_31 [i_9] [i_2 - 1] [i_9] [i_9] [i_2 - 1]))));
                    }
                }
            }
        }
    }
    var_31 *= ((~((122 ? 28354 : var_12))));
    #pragma endscop
}
