/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = (((var_2 ? (min(var_10, var_5)) : var_5)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((arr_2 [i_0]) + 1)) + ((((((arr_5 [22]) ? var_3 : var_0)) >= (arr_2 [i_0]))))));
                var_13 = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (1 | 1);
                            arr_12 [i_1] [i_1] = (((((((var_3 ? (arr_5 [i_0]) : (arr_3 [i_2 + 1])))) ? ((max(1, 1))) : (min(278320444, 1))))) ? ((max(((1 ? (arr_8 [1] [5] [i_1]) : 1)), 255))) : (((-2147483647 - 1) ^ 54043195528445952)));
                            var_15 = (((((1 * (arr_4 [i_1] [i_1]))) / ((-1459831399 ? 1138684594 : 1)))) >= 1);
                            arr_13 [i_0 + 2] [i_1] [i_2 + 1] [i_1] = (min(((-(arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_3]))), ((((arr_5 [i_0 - 1]) || (arr_5 [i_0 - 1]))))));
                            var_16 = arr_3 [i_3];
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_0 - 2] [i_1] [i_4 - 2] [i_1] = (((arr_1 [i_0 + 2] [12]) ? 1 : (arr_1 [i_0 + 1] [i_1])));
                    var_17 = (arr_3 [i_0 - 1]);
                    var_18 = (min(var_18, (((+(((arr_15 [i_4 + 2] [i_4 + 2] [i_0] [i_0 + 2]) / (arr_1 [i_0] [i_0 + 2]))))))));
                }
            }
        }
    }
    var_19 = (min(var_7, var_2));

    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        var_20 = arr_9 [15] [i_6 + 2] [i_7] [i_5];
                        var_21 = ((+(((!((max((arr_14 [19] [i_8] [i_8] [i_5 - 1]), 0))))))));
                        var_22 = (min(var_22, (arr_26 [i_5] [i_6 - 1] [i_7])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_9 + 2] [i_10] [i_7] [i_10] [i_6 + 2] [i_5] = var_1;
                                var_23 = 1;
                                var_24 = (arr_28 [2] [1] [i_9 + 3] [i_9] [i_9 - 1] [i_5]);
                                var_25 = arr_8 [17] [18] [i_10];
                            }
                        }
                    }
                    var_26 = (((((arr_27 [i_6 + 2] [i_6 - 1] [i_5 + 2] [i_5]) ? (arr_27 [i_6 + 1] [i_6 - 1] [i_5 + 1] [i_5]) : (arr_27 [i_6 + 1] [i_6 - 1] [i_5 + 2] [1]))) > (arr_27 [i_6 + 2] [i_6 - 1] [i_5 + 1] [1])));
                }
            }
        }

        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_27 -= (-(((min(var_8, 165598716)))));
            var_28 = ((((min(((255 ? (arr_28 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5]) : var_9)), ((1 & (arr_26 [i_11] [i_11] [i_5])))))) ? var_5 : ((((arr_7 [i_5 - 1] [i_11]) + ((((arr_10 [i_11] [i_5] [i_5] [i_11] [i_11]) % (arr_26 [1] [i_5] [i_11])))))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_29 += (((arr_23 [i_5] [i_12]) ? (arr_14 [i_5 + 2] [i_5] [i_5 + 1] [8]) : 1));
            var_30 = arr_11 [i_5];
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            arr_43 [i_5 + 1] = (((arr_20 [i_5 - 2]) ^ (max(0, (arr_20 [i_5 + 1])))));
            arr_44 [i_5] = (arr_38 [i_13]);
            var_31 = (1 / -1029777384);
            var_32 = ((!(1 + 96212746)));
        }
        arr_45 [i_5 + 1] = arr_21 [i_5 - 1];
    }
    for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] = ((((arr_36 [i_14] [i_14 - 1] [1]) >= 0)));
        var_33 = -1023;
        var_34 = (((arr_4 [i_14] [i_14]) ? var_8 : (1 & 2147483635)));
    }
    #pragma endscop
}
