/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((-(!var_7))), (var_7 ^ -var_6)));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [3] = (min((((arr_4 [i_3] [14] [i_0]) >= (arr_3 [i_0]))), var_0));
                            arr_13 [i_3] [15] [i_3] [i_3] = ((max((arr_6 [i_1] [i_2] [i_3]), var_10)));
                            var_15 = (max((max(var_1, (max(var_10, (arr_9 [i_0]))))), (arr_5 [i_0])));
                            arr_14 [i_0] [i_1] [i_1] [i_2] = (max(var_11, (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        }
                    }
                }
                arr_15 [i_0] = var_10;
                var_16 = ((~(arr_4 [i_0] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_17 = arr_24 [i_4] [i_7];

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_31 [i_8] [i_7] [i_5] [i_6] [i_5] [i_4] [i_4] = ((-(!var_8)));
                            arr_32 [i_5] [1] [i_6] [i_5] [i_5] = (arr_25 [i_7] [i_7] [i_6]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_36 [i_4] [i_5] [i_5] [i_5] [i_5] [i_9] = var_3;
                            arr_37 [i_4] [i_5] [i_5] [i_6] [i_5] [i_7] [i_5] = arr_28 [i_5] [i_4];
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_18 = (max(var_18, var_2));
                            var_19 = (arr_26 [i_4] [20] [8] [8]);
                            arr_40 [i_4] [10] [10] [i_4] [i_5] [i_4] [i_4] = -var_11;
                            arr_41 [i_4] [i_5] [5] = var_9;
                            var_20 -= ((((var_10 * (arr_29 [i_4] [i_4] [i_4] [2] [13] [i_7] [i_10]))) < (arr_28 [i_7] [i_7])));
                        }
                        var_21 = arr_24 [i_4] [i_5];

                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            arr_45 [i_4] [i_5] [i_6] [15] [i_5] = (((-(arr_16 [i_4]))));
                            var_22 |= (~17076229434294825841);
                            var_23 = var_0;
                            var_24 ^= (arr_43 [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11]);
                            var_25 = (!(arr_26 [i_5] [i_5] [i_7] [i_11]));
                        }
                    }
                    arr_46 [i_6] [i_5] [i_6] = arr_39 [i_4] [i_5] [i_6] [i_5];

                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_4] [20] [i_5] [i_12] = (i_5 % 2 == 0) ? ((min((((var_2 >> (((arr_39 [i_4] [i_5] [i_6] [i_5]) + 30864))))), -5502977108087000669))) : ((min((((var_2 >> (((((arr_39 [i_4] [i_5] [i_6] [i_5]) + 30864)) - 27674))))), -5502977108087000669)));
                        arr_50 [i_5] [i_5] = var_6;

                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_26 = (((~(((!(arr_27 [i_4] [i_5] [i_12] [i_13])))))));
                            var_27 = var_10;
                        }
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_57 [i_6] [19] [i_6] [i_5] [i_6] = (arr_24 [14] [i_5]);
                        var_28 = (arr_39 [i_4] [i_4] [0] [i_5]);
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_15] [i_5] [i_6] [i_5] [i_5] [i_4] = -var_12;
                        var_29 += (arr_38 [i_4] [i_4] [i_4] [i_4] [i_15]);
                    }
                    arr_61 [i_6] [i_6] [i_6] [i_5] = (max(((-var_12 ? var_10 : (var_7 >= var_9))), (((-(arr_43 [i_4] [i_5] [i_6] [i_5] [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            {
                                arr_67 [i_4] [i_5] [7] [i_6] [i_16] [i_17] = (max(((-(arr_47 [i_5]))), (((-(arr_34 [i_5] [i_5] [i_5]))))));
                                arr_68 [i_5] = (max((var_1 || var_1), (((!((min((arr_42 [i_4] [i_4] [i_4] [i_5] [i_4] [i_4]), (arr_53 [i_4] [i_5] [i_5] [i_6] [i_16] [i_16] [15])))))))));
                                var_30 &= ((var_9 & (arr_55 [i_6] [i_17] [i_6] [i_17])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, (((1370514639414725775 > ((max(136, var_5))))))));
    #pragma endscop
}
