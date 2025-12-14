/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = (((((arr_0 [i_0 + 2]) | (arr_0 [i_0 + 1]))) - (1 * var_14)));
        arr_4 [i_0] [i_0] = max((max(((max(1, (arr_2 [i_0] [i_0])))), 40427)), (max(1, 7810)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (min(((((((arr_6 [i_1]) ? 31840 : var_9)) < (arr_0 [i_1])))), ((((1 ? 31438 : 17420)) - (((arr_1 [i_1]) + var_3))))));
        var_20 ^= ((((19375 ? 42099 : (arr_3 [i_1] [1]))) << (arr_3 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [1] = ((45912 ? 1 : 1));
            arr_11 [i_1] [i_1] = ((+(((arr_5 [i_1] [i_1]) ? ((min((arr_1 [i_1]), (arr_9 [i_2])))) : ((-(arr_2 [i_1] [i_2])))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_21 ^= (arr_3 [i_3 + 1] [i_3 + 1]);
                arr_16 [i_1] [i_3 + 1] [1] [i_1] = var_4;
                var_22 = (max(var_22, (arr_3 [i_3 + 1] [i_3 + 1])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_20 [i_1] = ((~(((arr_18 [i_1] [i_3 + 1]) - var_8))));

                for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_23 = 1;
                    arr_25 [i_1] [i_3 + 1] [i_5] [i_1] = (~0);
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_29 [15] [i_1] [i_1] = 1;
                    var_24 = (((arr_3 [i_3 + 1] [i_7 - 1]) ? (arr_3 [i_3 + 1] [i_7 - 1]) : (arr_3 [i_3 + 1] [i_7 - 1])));
                    var_25 = ((((arr_26 [i_1] [i_1] [i_1] [2]) ? (arr_17 [i_1] [i_3] [i_5] [i_1]) : 1)));

                    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_26 = ((var_15 ? (0 && 28658) : 1));
                        arr_32 [i_1] [i_3] [i_5] [i_7 + 2] [1] = (arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7 + 2]);
                        var_27 = (arr_21 [i_8 - 1] [i_1] [i_5] [i_5] [i_1] [13]);
                        arr_33 [1] [i_3] [i_5] [i_7] [i_1] [i_8 + 1] = 42968;
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_28 = 32265;
                        var_29 = (arr_35 [i_1] [i_1] [i_1] [1] [i_1] [i_1] [i_1]);
                        var_30 = (((arr_30 [i_9] [i_9] [1] [i_9 + 1] [i_9 - 1]) ? (arr_28 [i_3 + 1] [i_3 + 1] [i_3] [i_3]) : (arr_15 [i_3 + 1] [i_3 + 1] [i_1])));
                        var_31 ^= var_13;
                    }
                    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_32 = var_2;
                        arr_38 [i_7] [i_1] [i_1] [i_1] = (((arr_27 [i_10] [i_1] [0] [i_7 - 1] [i_1] [11]) ? (arr_19 [i_1]) : (((!(arr_24 [i_1] [i_3 + 1] [i_1] [i_7]))))));
                        arr_39 [i_1] [1] [i_5] [i_5] [i_5] [i_1] [i_10] = (arr_13 [i_1] [i_1] [i_7]);
                    }
                    var_33 = arr_13 [i_1] [i_1] [i_5];
                }
                for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_34 ^= 1;
                    var_35 ^= (arr_2 [i_1] [i_3 + 1]);
                    var_36 ^= ((1 ? ((1 / (arr_9 [i_3]))) : 1));

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_37 = (min(var_37, ((((((31589 ? (arr_27 [i_1] [i_12 - 1] [0] [0] [0] [i_12]) : (arr_17 [i_12] [i_12] [i_5] [10])))) || var_4)))));
                        var_38 = ((-(arr_31 [i_1])));
                        var_39 = ((!(arr_12 [i_1] [i_1] [i_5])));
                        arr_47 [i_1] [i_3] [1] [i_1] [i_12] = 1;
                    }
                }

                for (int i_13 = 4; i_13 < 15;i_13 += 1)
                {
                    arr_50 [i_1] [i_1] [i_5] [i_13] = 24111;
                    arr_51 [i_1] = 1;
                    arr_52 [13] [i_1] [i_13] = (arr_0 [i_13 - 2]);
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_55 [i_1] [i_1] [i_14] = arr_23 [i_1] [1] [i_14] [i_14] [i_14];
                var_40 = ((~(arr_5 [i_3 + 1] [i_1])));
            }
            var_41 = (arr_42 [i_1] [i_3 + 1] [i_3 + 1] [i_3]);
            var_42 = (arr_24 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_43 = arr_23 [i_1] [i_1] [i_1] [i_1] [i_1];
            var_44 -= (arr_21 [i_1] [8] [i_1] [i_15] [i_15] [i_15]);
        }
        arr_58 [i_1] = (((((+(((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1]) : 36868))))) ? (((arr_36 [i_1] [i_1]) ? (arr_26 [i_1] [i_1] [i_1] [i_1]) : ((max((arr_54 [i_1] [i_1] [i_1] [i_1]), (arr_1 [i_1])))))) : (max((arr_1 [i_1]), (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
        var_45 = (((((((19208 ? var_4 : 1)) & (arr_43 [i_1] [i_1] [i_1])))) ? (arr_35 [i_1] [i_1] [0] [i_1] [i_1] [i_1] [i_1]) : ((((arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) > var_15)))));
    }
    #pragma endscop
}
