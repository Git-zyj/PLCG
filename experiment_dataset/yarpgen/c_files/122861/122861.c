/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_17 |= var_8;
        arr_2 [i_0] = var_13;
    }
    var_18 = ((((6163748617060294510 == 0) ? -1742812455128654521 : var_9)));

    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_4 [i_1])));
        var_20 = 1;
        var_21 = (arr_3 [i_1] [8]);
        arr_6 [i_1] [i_1] = (min((min((arr_0 [i_1]), (((arr_4 [i_1]) ? var_14 : (arr_0 [i_1]))))), (min(var_11, 1))));
        var_22 = ((((2777374140842354294 ? (arr_3 [i_1] [i_1]) : var_6))) || (arr_3 [i_1] [i_1]));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_23 *= arr_3 [1] [2];
        arr_9 [i_2] = var_11;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_23 [i_6] [5] [i_4] [i_4 - 1] [i_5] [i_6] = ((((arr_3 [i_2] [i_6]) ? (arr_20 [i_2] [i_3] [i_4] [9] [i_6]) : ((((arr_11 [4] [i_3]) == var_2))))));
                            arr_24 [i_6] [i_6] [1] [i_6] [i_2] = (min(var_1, (((arr_22 [i_2] [i_6] [i_4] [i_5] [i_3] [i_4 - 1]) - (arr_22 [i_4] [1] [12] [i_6] [i_6] [i_4 - 1])))));
                            arr_25 [1] [i_6] [1] [1] = ((-(((((1 ? var_11 : 18446744073709551615)) > var_15)))));
                        }
                    }
                }
            }
            var_24 = (max(var_24, ((min(((((arr_11 [i_3] [i_3]) ? (arr_5 [i_3] [1]) : (var_15 - var_7)))), (((arr_12 [i_3] [1] [i_2]) ? 1 : 18401093526335652258)))))));
            arr_26 [1] [i_3] [i_3] = var_6;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_29 [i_7] = ((!((((arr_15 [i_2] [i_2] [i_7] [i_7]) + (arr_15 [i_2] [5] [i_7] [i_7]))))));
            arr_30 [i_7] = (((((((min((arr_14 [i_2] [i_2] [i_2]), var_7)) + 9223372036854775807)) << (((1 | 832229655520996541) - 832229655520996541))))) ? ((((!(arr_17 [i_2] [i_2] [i_2] [i_2]))) ? 9223372036854775807 : (arr_22 [i_7] [1] [i_2] [i_2] [i_2] [i_2]))) : ((((17553229399310150913 ? (arr_13 [i_2] [1] [i_2]) : var_9)) + var_0)));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_34 [i_8] [i_8] [i_8] = 0;
            var_25 = ((-(((((var_11 ? var_1 : var_0))) ? (((arr_16 [i_2] [i_2] [i_2]) >> (6163748617060294505 - 6163748617060294502))) : 34084860461056))));
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            arr_38 [i_2] [i_2] [i_2] = var_4;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_45 [i_12] [i_11] [i_10] [i_11] = (((((arr_3 [i_2] [i_9 + 2]) ? (arr_3 [i_2] [i_9 + 1]) : var_13))) == (((arr_4 [3]) ? (arr_21 [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 3]) : (arr_42 [i_9 + 2] [i_9 + 3] [i_9] [i_11] [i_9 - 1]))));
                            arr_46 [i_10] [i_9] [i_10] [i_9] [i_11] = 12697745752594556776;
                            arr_47 [i_2] [i_9] [i_11] [i_12] [i_11] = 1;
                            arr_48 [i_2] [i_2] [i_9] [i_10] [10] [8] [i_12] |= var_0;
                        }
                    }
                }
            }
        }
    }
    var_26 = ((-((354091671926116311 ? var_4 : (var_3 + 1)))));
    var_27 = var_9;
    #pragma endscop
}
