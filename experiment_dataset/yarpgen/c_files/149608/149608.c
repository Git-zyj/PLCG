/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        var_12 += (((0 ? -24233 : 0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] [i_1] = var_0;
            var_13 += ((var_8 ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_1] [i_1] [i_2])));
        }
        var_14 = ((~(arr_8 [13] [i_1] [i_1])));
        var_15 = (((arr_9 [i_1]) % (arr_9 [i_1])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_16 += (arr_6 [i_5 + 1]);
                            var_17 = var_7;
                            var_18 &= (((((~(arr_5 [20])))) ? 0 : var_10));
                            var_19 = (min(var_19, (!1)));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_28 [i_3] [i_3] [i_3] = arr_9 [5];
                var_20 = (((var_6 ? 2147115322 : 649016932)) != -123);
                var_21 = (((arr_23 [16] [8] [i_4] [i_8] [i_8]) - (arr_5 [i_8])));
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_22 += ((!(701251039 | 1)));
                arr_32 [i_3] [i_3] [i_4] [i_3] = -649016933;
                arr_33 [15] [i_3] = ((9223372036854775807 ? (arr_15 [i_4] [i_9]) : -649016933));

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_3] [16] [14] [i_10] [i_9] &= (arr_26 [i_3] [9] [i_11 + 1]);
                        arr_41 [i_11] [i_9] [i_3] [i_9] [i_3] &= (arr_23 [6] [i_11 + 1] [i_11] [i_11] [i_11]);
                        arr_42 [i_3] [i_4] [3] [i_10] [i_11] = (((((arr_31 [i_3] [i_3]) && var_9)) && ((!(arr_13 [i_3])))));
                    }
                    for (int i_12 = 1; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_23 = ((~(arr_39 [8] [23])));
                        arr_45 [9] [19] [i_9] [i_3] [i_12 + 1] = (((((~(-9223372036854775807 - 1)))) ? 16463989295941811568 : 1));
                        arr_46 [i_3] [i_3] [i_4] [i_9] [18] [3] [i_3] = ((-(arr_9 [i_12 + 1])));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_49 [i_3] [i_4] [i_3] [i_10] [i_3] = var_10;
                        arr_50 [i_3] [i_4] [i_3] [i_9] [i_4] [i_10] [0] &= (~2483754272987144567);
                        var_24 = ((-649016933 ? (!-18) : 1));
                        arr_51 [i_4] [i_3] [9] = ((~(arr_7 [i_4])));
                        var_25 = (arr_15 [i_9] [i_10]);
                    }
                    arr_52 [i_4] [i_4] &= (!var_2);
                }
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_26 = ((((arr_34 [i_9] [i_9] [i_9] [i_9]) ? var_8 : var_4)));
                        arr_58 [1] [i_4] [i_4] [1] [i_3] [i_4] = ((14 ? (((arr_12 [i_9]) * (arr_24 [i_9] [i_9] [i_15]))) : (arr_26 [i_4] [i_14 + 4] [i_9])));
                        arr_59 [21] [i_15] [i_15] [i_15] [i_3] [22] [i_15] = ((!(arr_17 [i_14 - 2] [i_14 + 4] [i_14 - 2])));
                    }
                    var_27 = (max(var_27, (((~((-(arr_54 [i_9] [i_4]))))))));
                    var_28 = ((1 ? -919750617 : 81));
                    var_29 = (arr_43 [i_3] [i_3] [i_9] [i_3] [i_14] [i_3]);
                }
                arr_60 [i_3] [i_4] [i_4] [4] &= ((!(arr_25 [i_3] [i_4] [i_9])));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_30 ^= (((arr_67 [13] [13] [i_16] [i_16] [i_18]) | (1 / 1)));
                            arr_69 [i_17] [i_3] [0] [i_17 + 2] [i_17] [12] [i_17] = (((arr_35 [i_17 - 2] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_18 + 1] [i_18 - 1]) <= var_8));
                        }
                    }
                }
                arr_70 [i_3] [i_4] [i_16] = ((-19 ? var_4 : 1));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            arr_75 [i_20] [i_3] [i_3] = (arr_10 [i_4] [i_4] [9]);
                            var_31 += -2;
                        }
                    }
                }
                arr_76 [i_3] = (5967748169022359656 <= (arr_72 [i_3] [i_3] [i_3] [2] [i_16]));
            }
            arr_77 [i_3] [i_4] [16] |= (((var_8 <= var_3) ^ 26));
            arr_78 [7] [i_3] = var_0;
        }
        var_32 = ((-((~(~9449487525050750328)))));
    }
    var_33 = (max(var_4, ((max(var_2, (min(26, var_3)))))));

    for (int i_21 = 0; i_21 < 11;i_21 += 1)
    {
        arr_82 [i_21] = ((!((!(arr_2 [i_21])))));
        arr_83 [i_21] [i_21] = ((((min(2483754272987144566, ((((-32767 - 1) * var_0)))))) ? 0 : var_10));
        arr_84 [i_21] = (var_10 ? ((-(arr_61 [i_21] [i_21] [i_21]))) : (arr_61 [i_21] [i_21] [i_21]));
    }
    var_34 = var_2;
    var_35 |= 1;
    #pragma endscop
}
