/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [1] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 67108863));
        arr_4 [i_0] = (var_11 ? var_4 : (arr_1 [i_0] [i_0]));
        var_16 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((0 ? (var_2 - 32759) : -var_6));
        var_17 = (((arr_7 [i_1]) ? ((var_13 ? (arr_6 [i_1]) : 4294967295)) : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = max((-1 / var_15), var_13);

        /* vectorizable */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            arr_15 [i_2] = 1;
            var_18 = (arr_13 [1]);
            arr_16 [i_2] = (((arr_11 [i_3 - 2] [i_3 + 2]) - (arr_1 [i_3 + 1] [i_3 + 3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [9] = (var_14 + var_4);
                var_19 -= ((((arr_5 [0] [i_4]) || var_14)));
            }
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                var_20 = ((((30801 ? -1664603086967252020 : var_0)) & 1));

                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    arr_27 [i_2] [i_4] [i_6] [i_7 + 4] = ((5448696562401935005 <= (arr_26 [i_7 - 1] [8] [1] [i_6])));
                    arr_28 [2] [i_4] [i_6 + 2] [i_7] = var_9;
                    arr_29 [i_7 + 1] = var_7;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_34 [i_2] [i_4] [i_6] [i_8] = ((-(arr_21 [i_6 - 2] [i_4] [i_6 - 2] [i_4])));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_6 - 2] [i_4] = (((((var_2 ? var_2 : 5448696562401935010))) ^ (arr_1 [i_2] [i_4])));
                        var_21 = (max(var_21, (arr_31 [i_6 + 2] [i_2] [i_6 + 2])));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        arr_40 [i_2] [i_4] [i_4] [i_6] [i_8] [i_8] [i_10] |= (arr_36 [i_8] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]);
                        arr_41 [i_10] [i_8] [i_4] [i_4] [i_2] = (arr_36 [i_10] [i_10] [i_10] [i_10] [i_10 - 1]);
                    }
                    for (int i_11 = 2; i_11 < 8;i_11 += 1)
                    {
                        var_22 = ((((((!(arr_6 [i_11]))))) <= (-9223372036854775807 - 1)));
                        var_23 = ((-(arr_36 [10] [i_4] [i_6] [i_4] [i_2])));
                    }
                }
            }
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        {
                            var_24 = 5448696562401935011;
                            arr_50 [i_2] [i_4] [i_12] [i_4] [i_2] [i_2] = ((!(((-127 - 1) < var_5))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_25 = (~var_14);
                            var_26 = (arr_36 [i_2] [i_4] [i_12 - 1] [i_15 + 1] [i_16 - 1]);
                        }
                    }
                }
            }
            arr_57 [i_2] = (var_1 && var_10);

            for (int i_17 = 1; i_17 < 7;i_17 += 1)
            {
                arr_60 [i_17] [i_2] = var_9;
                arr_61 [i_4] [i_4] = ((var_14 == (arr_46 [i_17 + 2] [i_17 - 1] [i_17 + 3])));
                arr_62 [i_17 + 4] [i_2] |= 0;
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                arr_65 [i_2] [i_4] [5] = (-127 - 1);
                var_27 = (((-127 - 1) ? (arr_31 [i_2] [i_4] [i_18]) : (arr_8 [i_2])));
                arr_66 [1] [i_4] [i_18] [i_18] = ((((arr_36 [i_2] [i_2] [i_4] [i_18] [i_2]) ? var_13 : (arr_59 [i_2] [i_2] [1] [6]))));
                arr_67 [2] [i_4] [i_18] = var_7;
                var_28 = (min(var_28, var_7));
            }
        }
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            arr_70 [2] = (((((((arr_7 [i_19]) && (arr_7 [i_19]))))) == (arr_7 [i_19])));
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 9;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 9;i_21 += 1)
                {
                    {
                        var_29 = ((+((max((arr_47 [i_2] [i_19] [i_19] [i_20 + 1] [i_21 + 2]), (arr_47 [i_2] [1] [i_2] [1] [i_2]))))));
                        arr_77 [1] [1] [i_19] [i_21] [i_21] [i_21] = ((((arr_72 [i_21 + 1]) ? (-127 - 1) : (arr_72 [i_21 + 2]))));
                        arr_78 [i_21] [i_21] [i_21 - 1] = (max(32759, (((!(arr_45 [i_21 + 1] [i_19] [i_21 + 1] [i_21]))))));
                    }
                }
            }
        }
    }
    var_30 = ((((-32767 - 1) ? (((var_15 ? var_13 : var_14))) : var_2)));
    var_31 = var_1;
    #pragma endscop
}
