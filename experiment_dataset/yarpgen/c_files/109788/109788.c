/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 ^= ((~(((arr_1 [i_0]) / (arr_1 [i_0])))));
        var_16 += (((65535 / 928884333624000669) << ((((arr_0 [i_0]) || (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = (((arr_2 [i_1] [i_2]) ? ((~(arr_7 [i_1] [i_2]))) : (((5685 ? ((var_1 ? 92 : 14280)) : (-127 - 1))))));
            arr_10 [8] = (((((((arr_2 [i_1] [i_1]) ? (arr_9 [i_1] [i_2] [i_2]) : var_2)) <= (((((arr_5 [i_1]) != var_7)))))) ? 104 : ((-82 ? 264031227 : -64))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_15 [i_1] = (arr_6 [i_1]);

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_18 = (4030936059 / 251);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] = ((var_1 ? (arr_25 [i_3] [13] [i_5] [11]) : ((66427442357587476 >> (511 - 478)))));
                            arr_27 [6] [i_4] [i_5] = (((((1 ? -8992029967165233218 : 8992029967165233190))) ? (arr_11 [i_6] [6] [i_1]) : (arr_21 [i_1] [i_3] [i_3] [i_3])));
                            arr_28 [i_1] [i_1] [i_1] [i_1] = (arr_4 [i_3]);
                        }
                    }
                }
                var_19 = (arr_0 [i_1]);
            }
            var_20 = (var_13 | (arr_14 [i_3] [i_1]));
            arr_29 [i_1] [i_3] = (((arr_9 [i_1] [i_1] [i_3]) - (arr_24 [i_1] [i_1] [i_1] [i_3] [i_3])));
        }
        var_21 *= ((((-(arr_12 [i_1]))) <= 4030936048));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    arr_34 [i_1] [i_7] [i_7] = arr_19 [i_1];
                    var_22 = (min(var_22, (((~1) ? (((arr_2 [i_7 + 1] [i_7 - 1]) ^ var_11)) : (arr_33 [i_7 - 1] [i_7 - 1])))));
                    var_23 = (max(var_23, (((var_3 ? ((-(arr_19 [i_8]))) : (((((arr_19 [i_1]) || (arr_19 [i_1]))))))))));
                    arr_35 [8] [i_7] [i_1] = ((!(((arr_5 [i_7 + 1]) && var_11))));
                }
            }
        }
        var_24 = ((((((arr_12 [i_1]) + (arr_12 [i_1])))) ? (((arr_12 [i_1]) ? (arr_12 [1]) : (arr_12 [i_1]))) : 8992029967165233219));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_25 += (((arr_23 [i_9] [i_9] [13] [i_9] [6] [i_9]) ? (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        arr_40 [i_9] = (((var_11 < (arr_21 [i_9] [i_9] [11] [i_9]))) ? (arr_1 [i_9]) : (arr_6 [i_9]));
        arr_41 [i_9] [i_9] = ((arr_22 [i_9] [i_9]) ? (arr_19 [i_9]) : (~65535));
        arr_42 [i_9] [i_9] = ((-(arr_11 [i_9] [i_9] [i_9])));
        arr_43 [i_9] [11] = (((arr_20 [i_9] [i_9] [i_9] [i_9]) ^ var_8));
    }

    /* vectorizable */
    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_26 = (((arr_45 [i_10 - 1] [i_10 + 1]) | (arr_46 [i_10 + 1])));
        arr_48 [8] [1] = (((((-(arr_47 [10])))) - ((var_13 ? (arr_45 [12] [i_10]) : (arr_46 [i_10])))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_27 = (min(var_27, -8992029967165233215));
        var_28 -= (((arr_46 [i_11 + 1]) ? var_6 : (((arr_50 [10]) ? (arr_46 [i_11]) : (arr_44 [i_11] [i_11])))));
        var_29 = (max(var_29, (((264031227 ? (((arr_49 [i_11 - 1] [i_11 + 1]) * (arr_49 [i_11 - 1] [i_11 + 1]))) : (((arr_47 [i_11 + 1]) ? (((arr_47 [i_11 - 1]) ? (arr_46 [0]) : (arr_49 [i_11 - 1] [i_11]))) : (arr_49 [i_11 + 1] [i_11 + 1]))))))));
    }
    var_30 = var_0;
    var_31 = (max(var_31, (((var_5 && ((!(((var_11 ? 16665446103147282476 : var_3))))))))));
    #pragma endscop
}
