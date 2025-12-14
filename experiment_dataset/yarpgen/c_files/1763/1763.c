/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (var_3 + var_4);
    var_14 = (min(var_1, ((~(var_10 & 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) | var_3)) >> ((((var_6 ? 21524 : 2098)) - 21509))));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [17] = (!-29940);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1] |= 1;
            arr_11 [i_1] [1] = ((+(((arr_4 [i_1] [i_1]) ? var_0 : (arr_6 [i_1])))));
            arr_12 [i_2] = (((arr_5 [i_1]) >> ((((arr_8 [i_1]) && (arr_5 [i_1]))))));
        }
        arr_13 [i_1] &= ((((((arr_4 [i_1] [i_1]) >> (((arr_6 [i_1]) - 1902321189))))) / (arr_8 [i_1])));
        arr_14 [i_1] = var_7;
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_27 [10] [i_4] [i_4] [i_3] [i_3 - 1] = (((arr_18 [i_5 - 2]) ^ -var_3));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_30 [i_4] [6] [i_5] [i_4] [i_6] [i_3] |= var_11;
                            arr_31 [i_7] [i_4] [i_4] [i_4] [i_7] = var_11;
                            arr_32 [8] [i_4] [i_6] [i_6] [i_7 - 1] = (((arr_23 [i_7 - 1] [i_5 + 2] [i_3 - 2]) ^ (arr_4 [i_7 - 1] [i_5 + 2])));
                            arr_33 [i_3 - 1] [i_7] [i_7] [i_6] [i_7] = ((!(arr_29 [i_4] [i_5 + 2] [i_7 - 1])));
                        }
                    }
                }
            }
        }
        arr_34 [i_3] = (((-25730 + 2147483647) >> (((var_2 / var_8) - 14200))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_38 [i_3 - 2] [i_3] = (((arr_35 [i_3] [i_3 + 2]) ? 825 : var_9));
            arr_39 [i_3] = ((-((1 ? var_9 : 4294967295))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_43 [i_3] = (((((arr_15 [i_3 + 2]) ? (arr_15 [i_3 + 3]) : (arr_15 [i_3 - 1]))) | (((max((arr_28 [i_9] [i_9] [i_3] [i_3] [i_3]), 127))))));
            arr_44 [i_3] [7] = -var_2;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_54 [12] [i_12] [2] [2] [2] [2] [12] |= (((arr_53 [i_12 - 1] [i_12 - 1] [i_3] [2] [i_3 - 2] [4] [4]) > ((((arr_53 [i_12 - 1] [i_12 - 1] [i_10] [i_3] [i_3 - 2] [i_3] [i_3]) > (arr_19 [i_3 + 1]))))));
                            arr_55 [i_3] [i_3] [i_11] [i_10] [i_3] = (arr_53 [1] [1] [i_13] [i_12] [i_13] [i_12 - 1] [i_10]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_61 [i_15] [14] [i_14] [i_14] [14] [i_3 + 1] = ((min(-var_5, ((max(var_10, (arr_20 [i_3] [i_15])))))));
                        arr_62 [i_15] [18] [0] [0] [i_10] [i_3] = (arr_25 [i_3 - 2] [i_3 - 2] [i_14] [i_15]);
                    }
                }
            }
        }
        arr_63 [i_3] = ((!(((~(arr_57 [i_3 + 3] [i_3 + 3] [i_3]))))));
        arr_64 [9] = ((~(((arr_24 [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 2]) - (arr_21 [i_3] [i_3 + 3] [i_3])))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_67 [i_16] = ((29929 ? ((21 / (arr_60 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (arr_23 [i_16] [i_16] [i_16])));
        arr_68 [i_16] = var_3;
    }
    #pragma endscop
}
