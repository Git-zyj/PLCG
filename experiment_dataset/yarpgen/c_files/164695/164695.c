/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((!(((var_0 ? var_9 : var_7)))))) ^ var_5)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (arr_0 [i_0] [i_0]);
        var_12 *= (!var_7);
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (min(var_13, 1));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_14 |= (arr_8 [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = (((arr_13 [i_1 - 4] [i_1] [i_1 - 4] [i_2] [i_1]) != (arr_7 [i_1])));
                            var_16 = (((arr_9 [i_4]) ^ ((1 ? var_1 : (arr_13 [i_1] [i_2] [i_3] [i_2] [i_2])))));
                            var_17 = ((!(arr_10 [i_1 + 3] [13])));
                        }
                    }
                }
                var_18 = (min(var_18, var_7));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_21 [i_2] [i_2] [i_2] = 78;
                var_19 = ((~((((((arr_12 [i_6]) ? 1 : 1539130353))) ? var_2 : ((((arr_10 [1] [i_2]) || var_9)))))));
                var_20 += (((min((((arr_12 [i_1 - 1]) ^ (arr_15 [i_1] [i_2] [i_2] [i_6] [i_6] [i_6]))), ((max(var_4, var_4))))) <= ((((var_1 <= (arr_6 [i_1])))))));
            }
            var_21 = -var_3;
            var_22 -= (arr_17 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [1]);
            var_23 = (max((((((-17170 ? var_1 : var_10))) ? ((0 ? (arr_13 [15] [1] [i_1] [i_2] [i_1]) : var_9)) : (((120 ? (arr_8 [i_1 - 4] [20] [i_1]) : (arr_16 [i_1 - 1] [i_1 - 1])))))), 103));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_26 [i_1] [i_1] [i_1] = (arr_8 [i_1] [i_7] [1]);

            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_24 = (((arr_24 [i_1 + 1] [i_1 + 1]) ^ (arr_9 [i_1 - 2])));
                var_25 = var_7;
                arr_31 [20] [i_7] [i_8] = var_9;
            }
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                arr_34 [1] [1] = (((((((~(arr_19 [i_1] [i_1 - 3])))) ? (672804898 <= 1637987418) : (((arr_24 [i_7] [i_9]) + (arr_25 [i_1]))))) != (min(((1 ^ (arr_5 [i_1]))), ((max(1, 8)))))));
                var_26 += 1;
                arr_35 [i_7] [i_1 + 2] = var_6;
                arr_36 [1] [1] [i_9] |= (arr_23 [i_1] [i_7] [i_9 + 1]);
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_27 = (min(var_27, ((((arr_6 [i_10]) ? ((var_3 ? var_5 : var_0)) : ((((arr_8 [i_1 - 3] [i_1] [i_10]) >= var_8))))))));
            var_28 = (arr_13 [i_1] [i_1] [11] [i_10] [1]);
            arr_40 [i_10] = ((arr_6 [i_1 + 3]) || var_2);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        var_29 -= (arr_7 [i_1 - 2]);
                        arr_48 [i_1 + 3] [i_10] = -var_6;

                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            var_30 = (max(var_30, (((var_7 ? var_9 : (arr_17 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                            arr_51 [i_12] [i_10] [i_10] [i_10] [i_13 + 1] = (((arr_12 [i_13 + 1]) > (arr_12 [i_13 + 1])));
                        }
                    }
                }
            }
        }
        var_31 = (((((-(arr_19 [i_1 - 3] [i_1])))) ? ((((((arr_45 [i_1 - 4] [i_1 - 4] [10] [i_1] [i_1] [i_1 - 3]) ? (arr_47 [i_1 - 2] [i_1 - 4] [i_1 + 2] [i_1 - 3]) : (arr_16 [i_1] [i_1]))) <= (((arr_42 [i_1 - 3] [i_1]) & (arr_24 [i_1 + 3] [i_1])))))) : var_9));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_32 = ((~((var_5 / (arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [6])))));
        arr_54 [i_14] = ((((((((arr_30 [i_14] [4] [8] [i_14]) != var_1))) >> (((((arr_7 [i_14]) ? var_1 : (arr_29 [i_14] [12]))) + 56)))) + (arr_37 [i_14] [i_14])));
    }
    var_33 |= var_8;
    var_34 = ((var_0 ? ((((var_3 <= ((4 ? var_8 : var_0)))))) : (-113 / var_1)));
    #pragma endscop
}
