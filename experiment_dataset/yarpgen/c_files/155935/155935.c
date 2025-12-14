/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((var_0 && var_12) + ((var_9 ? var_6 : var_9)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (0 ? (((-6285350766400497549 ? var_3 : 93))) : var_9);
        var_18 = var_5;
        var_19 = ((!(arr_2 [i_0 + 1])));
        var_20 = (max(var_20, ((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 -= ((+((~((((arr_3 [i_1 + 1] [i_1 - 1]) <= (arr_5 [i_1] [i_1]))))))));
        var_22 = (arr_5 [16] [i_1 + 1]);
        arr_6 [i_1] = -11;
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 -= (arr_7 [1]);
        var_24 = -7350868415176137881;
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] = var_2;
        arr_14 [1] [i_3 - 3] = -var_14;

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_19 [i_3] [i_3] [7] = ((33 ? (arr_18 [i_3] [i_3 + 2]) : (arr_18 [i_3 - 1] [i_3 - 2])));
            var_25 = (arr_5 [i_3 - 2] [i_3 + 1]);

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_26 = (((!var_15) ? ((~(arr_4 [i_5]))) : 18));
                            var_27 = (max(var_27, (arr_21 [i_6 + 2] [i_4] [1] [i_6])));
                            var_28 = arr_23 [i_7] [i_6] [i_5] [i_3];
                        }
                    }
                }
                var_29 = (arr_23 [i_5] [i_4] [i_3] [i_5]);

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_30 = (min(var_30, (((!(arr_18 [1] [i_8 - 1]))))));
                    var_31 = (min(var_31, var_6));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_32 = (((((arr_4 [i_3]) ? (arr_16 [i_3] [i_4] [i_5]) : var_11)) >> (47827 - 47803)));

                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        arr_32 [4] [i_4] [4] [4] [i_10] = -24;
                        var_33 &= ((!(arr_2 [i_10 + 2])));
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_34 = 7394522648198234120;
                        arr_36 [i_3] [i_3] [i_3] [i_11] = ((-(arr_31 [i_3 - 3] [i_3] [i_3] [i_3 + 2] [i_3] [i_4] [i_11 - 1])));
                        var_35 = ((1 ? (arr_27 [i_11] [i_11] [i_11 + 1] [i_11 - 1]) : (arr_33 [i_3 - 2] [i_11] [i_11 - 1] [i_11] [i_5] [i_11] [i_3])));
                    }
                }
                for (int i_12 = 4; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_36 = (6239 > var_0);
                        arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((!(arr_20 [i_3 - 3] [i_3])));
                        var_37 = (min(var_37, (arr_40 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3] [i_12 - 2])));
                    }
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        var_38 -= var_6;
                        arr_44 [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 3] = (var_7 % (arr_33 [5] [i_14 - 2] [i_14] [i_14] [i_14 + 1] [i_14] [i_14 + 1]));
                        var_39 = var_6;
                        var_40 = (~var_4);
                    }
                    var_41 = -4902530540337889991;
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 3; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_42 = var_14;
                            var_43 = (min(var_43, ((((arr_26 [i_3] [i_15] [i_15 - 1] [i_16]) + (-9223372036854775807 - 1))))));
                        }
                    }
                }
            }
        }
    }
    var_44 = (((((187 ? (((var_8 ? var_6 : var_6))) : (max(var_13, var_3))))) ? var_14 : (!837)));
    #pragma endscop
}
