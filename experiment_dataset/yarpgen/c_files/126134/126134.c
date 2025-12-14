/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, var_2));
        var_16 = var_3;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_14, var_7));
        var_18 = ((((max(-15823, (arr_5 [i_1 - 1]))))) == 13065061940652783450);
        var_19 = (arr_3 [i_1 + 1] [i_1 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_20 = (((arr_5 [i_5]) > (((((!(arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4]))) && 2126545969)))));
                            var_21 = var_3;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((1152123295906386817 << (((arr_1 [i_1 + 1]) - 13067))));
                            var_23 = var_11;
                            var_24 = -var_5;
                        }
                        var_25 *= ((((max((arr_13 [i_4] [i_4 - 3] [i_4] [i_4 - 2]), (arr_13 [i_4] [i_4 - 3] [i_4 - 3] [i_4 + 1])))) && ((max((arr_13 [i_4] [i_4 - 3] [i_4] [1]), 1)))));
                        var_26 = ((~(((var_9 > (arr_11 [i_4 - 3] [i_4 - 3] [i_4 - 1]))))));
                        var_27 = ((~((5381682133056768156 ? (((arr_15 [i_1 + 2] [i_2] [i_3] [i_4]) ? (arr_18 [14] [14] [i_2] [i_3] [i_4]) : var_12)) : (max((arr_1 [i_1 - 1]), 313949344))))));
                    }
                }
            }
        }
    }
    var_28 = var_4;

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_29 = var_10;
        var_30 = ((-(max((arr_22 [i_7]), (arr_21 [i_7] [i_7])))));
        var_31 = var_10;
        var_32 = var_14;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_33 = (((max(var_8, (arr_13 [i_8] [i_9] [i_9] [i_9]))) - (((max(1, var_13))))));
            var_34 = (min(var_34, (((-(arr_21 [i_8] [i_8]))))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_35 &= (max((((((~(arr_0 [i_8])))) / ((84 ? (arr_9 [i_8] [i_10] [12]) : (arr_27 [i_8] [i_8] [i_8]))))), (max((arr_27 [i_8] [i_10] [i_8]), (arr_23 [i_8])))));
            var_36 = (max((arr_11 [i_8] [13] [i_8]), (max((((arr_8 [14] [12] [8]) ? var_1 : (arr_18 [i_8] [i_8] [i_10] [i_10] [i_8]))), var_1))));
            var_37 = (max((((!((max(11802660631097633299, (arr_19 [i_10] [i_10] [i_8]))))))), ((~(arr_15 [i_8] [i_8] [i_8] [i_8])))));
            var_38 = (max(((0 ? var_1 : (max(var_3, 15700342372405490609)))), (((var_7 ? var_0 : var_1)))));
        }
        var_39 = (max(((2147483629 << (var_5 - 2786419039826856259))), (max(var_12, ((~(arr_22 [9])))))));
        var_40 = (max(var_10, 126));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_41 = (((max(18014398509481983, 1)) ^ (arr_21 [i_11] [i_11])));
        var_42 = ((-7702 ? ((0 ? 0 : 18446744073709551615)) : (-127 - 1)));
        var_43 = (min(var_43, ((max(46203, (((2147483647 | (arr_22 [i_11])))))))));
    }
    var_44 = ((-302401539 ? var_7 : (((max(3, 1356328604)) >> (((max(var_0, var_3)) - 1455278683))))));
    #pragma endscop
}
