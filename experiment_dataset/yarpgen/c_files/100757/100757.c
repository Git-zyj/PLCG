/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~var_11) ? ((var_16 >> (var_0 - 114))) : (arr_1 [i_0]));
        var_19 = (arr_1 [i_0]);
        arr_4 [i_0] = (var_6 % var_1);
        arr_5 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_20 = (((arr_2 [i_0]) > var_16));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((+(((arr_2 [i_1]) ? -120 : (-127 - 1)))));
        arr_9 [i_1] = ((((((var_9 + 2147483647) >> (var_8 - 79)))) ? ((-(arr_6 [i_1]))) : (11908933664476053571 < 11908933664476053575)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_13 [i_1] [i_1])));
                    arr_16 [i_1] [i_1] [i_2] [i_3 + 1] &= (var_3 / var_5);
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 6;i_5 += 1)
            {
                arr_21 [i_1] [i_5] [i_5] [i_4] = -2147483637;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_4] [i_6] [i_6] [0] = (var_2 ? ((var_6 ? (arr_18 [i_4]) : (arr_13 [4] [i_4]))) : (arr_11 [i_1] [i_1] [i_5 + 2]));
                            var_22 *= (((arr_25 [i_5 + 2] [3] [i_5] [i_6] [i_7] [i_5] [i_5 - 1]) < (arr_25 [i_5 + 1] [i_4] [i_4] [6] [7] [i_6] [i_5])));
                            var_23 -= (arr_20 [i_1] [i_4] [i_1] [i_6]);
                        }
                    }
                }
                arr_28 [i_4] = -var_2;
                var_24 = (((!(arr_0 [i_1]))));
            }

            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                var_25 = (arr_19 [i_4] [i_4]);
                arr_33 [i_8] [i_8] [2] [i_8] &= (((((11908933664476053578 ? var_14 : (arr_7 [9])))) ? ((((arr_20 [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_1]) : 63))) : 6537810409233498040));
            }
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                var_26 = (min(var_26, ((((((var_18 * (arr_26 [i_9] [i_9] [4] [i_4] [i_1] [i_1])))) ? (arr_34 [i_4] [i_4] [i_9]) : var_17)))));
                arr_36 [i_9] [i_9] [i_9] = -4;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_47 [i_12] [i_12] [i_11] [5] [i_4] [i_1] = -var_6;
                            var_27 ^= (arr_41 [i_1] [i_10] [i_1] [0]);
                        }
                    }
                }
                arr_48 [i_1] [i_4] [i_4] &= (((-548293991 <= var_3) ? (arr_0 [i_10]) : (arr_46 [i_4])));
            }
            var_28 = (!-var_16);
            var_29 ^= (arr_46 [i_4]);
        }
        for (int i_13 = 2; i_13 < 6;i_13 += 1)
        {
            arr_52 [i_13] = ((((var_15 ? var_1 : (arr_14 [i_1]))) < var_17));
            var_30 = (max(var_30, ((((arr_32 [i_13 - 2] [i_13] [9] [0]) ? -var_17 : (arr_23 [3] [i_1] [i_1] [i_13 + 1]))))));
        }
    }
    var_31 = ((var_14 ? (((((var_6 ? var_9 : var_12))) ? (-1526 * var_9) : (!var_1))) : ((~(~var_2)))));
    var_32 = (((var_16 ? ((var_6 ? var_9 : var_5) : ((var_8 ? var_14 : var_3))))));
    #pragma endscop
}
