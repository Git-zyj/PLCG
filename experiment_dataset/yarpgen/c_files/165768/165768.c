/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 ^= (var_5 ? var_2 : var_2);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) - ((72 << (var_8 - 8963227101040482049)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_17 = var_8;
                        arr_9 [10] [i_2] [i_1] [3] = ((((arr_6 [i_0] [i_2]) ? (arr_7 [i_0 + 1] [i_0 + 2] [i_0] [i_0]) : 72)));
                    }
                }
            }
        }
        arr_10 [i_0 + 1] [i_0 - 3] = (var_13 > -25652);
        var_18 = -27354;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((((max(214, ((-(arr_3 [4])))))) % (max(var_8, var_13))));
        var_19 += (min((arr_13 [i_4]), ((~(arr_13 [i_4])))));
        var_20 *= -27328;
        arr_15 [i_4] = var_7;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_21 = (arr_12 [i_6]);
                            var_22 = (min(var_22, var_3));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_32 [i_5] [i_8] [13] [i_5] [i_5] = (arr_26 [7] [i_6] [i_6 + 1] [14] [14] [i_7]);
                            arr_33 [i_5] [i_8] [i_8] [i_8] [5] [i_6 - 2] [i_5] = (arr_12 [i_5]);
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_36 [i_5] [i_7] [i_5] = (arr_27 [i_5] [i_5] [i_5] [i_5]);
                            var_23 = (max(var_23, (~-2629)));
                            var_24 = (((((var_2 ? -1700575750 : 2147483647))) ? (arr_6 [i_5] [i_5]) : (((arr_31 [i_11]) + (arr_26 [i_11] [i_8] [i_7] [i_7] [i_6 - 2] [i_5])))));
                            arr_37 [11] [i_5] [i_7] [i_7] [i_7] [i_8] [i_11] = var_6;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_25 = arr_21 [i_5] [i_6 - 1];
                            var_26 = (min(var_26, (((!((((arr_16 [i_6]) ? (arr_1 [i_6]) : (arr_7 [i_12] [i_8] [13] [i_6])))))))));
                        }
                        var_27 = ((379694265 ? ((10816705383534591964 % (arr_6 [i_5] [i_6]))) : (arr_25 [i_6 + 1] [i_6] [14] [i_6 + 1])));
                        var_28 |= ((var_4 & (-567735039 >= var_6)));
                        arr_41 [i_5] [i_6] [i_7] [i_8] [14] [0] &= var_3;
                    }
                }
            }
        }
        var_29 = var_10;
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                {
                    arr_48 [i_5] = ((~(arr_43 [0] [i_14 - 1] [i_5])));
                    var_30 *= (((arr_38 [i_14 - 2] [i_14 + 2] [i_14 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 1]) ? (arr_38 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_13 - 2] [i_13 - 2] [i_13 + 1]) : var_6));
                    var_31 = (min(var_31, ((((arr_21 [i_14] [10]) ^ var_3)))));
                }
            }
        }
        arr_49 [i_5] = ((((((arr_0 [i_5] [i_5]) <= var_6))) & (arr_17 [i_5])));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 14;i_17 += 1)
                {
                    {
                        var_32 = (((arr_25 [i_5] [i_15] [i_16] [i_17 - 1]) >= (arr_25 [14] [i_15] [i_16] [i_17 - 1])));
                        arr_58 [i_5] [i_15] [i_5] [i_16] [i_17 - 2] = (((arr_38 [3] [i_15] [i_16] [4] [8] [i_17]) ? (arr_26 [i_15] [i_17 - 2] [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17]) : (!0)));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_33 |= var_1;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    {
                        var_34 = (arr_1 [i_18]);

                        for (int i_22 = 1; i_22 < 14;i_22 += 1)
                        {
                            arr_74 [i_18] [i_19] [i_19] [i_21] [i_22 + 1] = ((((((arr_55 [i_22 - 1] [i_19] [i_20] [i_21] [i_22]) ? var_12 : var_11))) ? 7209689999598056478 : (arr_55 [i_22 - 1] [i_19] [i_20] [1] [i_22])));
                            arr_75 [i_18] [i_18] [i_18] [i_19] [i_18] = ((((-2617 ^ -23375) ? (1604234499297728996 >= 32767) : (arr_22 [i_19] [i_22 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_35 = (max(var_35, 567735035));
    var_36 = (min(var_36, (((+((var_9 ? (var_7 | var_2) : var_5)))))));
    #pragma endscop
}
