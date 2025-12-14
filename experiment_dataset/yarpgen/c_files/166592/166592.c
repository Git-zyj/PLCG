/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9223372036854775793;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (9223372036854775793 % 7864320);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_13 = (max(var_13, (((-(arr_10 [i_3] [i_3 - 2] [i_3 - 4] [i_3] [i_3] [i_3 - 3]))))));
                            var_14 = (((arr_8 [i_4 + 2] [i_3 - 3] [i_1 - 1]) ? (arr_8 [i_4 + 2] [i_3 - 3] [i_1 - 1]) : var_3));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_15 = (max(var_15, var_5));
                            arr_14 [i_0] [i_0] = (var_5 ? (arr_4 [i_1 + 1] [i_0] [i_0] [i_0]) : (arr_7 [i_1 + 1] [i_3 - 3] [i_3 + 1] [i_3 + 1]));
                        }
                        var_16 = var_8;
                        var_17 = var_6;
                        var_18 = (max(var_18, (arr_12 [i_0] [i_0] [i_2])));
                    }
                    for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, ((((arr_15 [i_6 - 4] [i_2] [i_1 + 1] [i_0]) ? ((~(arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_6] [i_6 - 1]))) : ((max(-95, 19))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_6 - 3] = (max(((((var_1 ? 265245651 : var_9)) / var_8)), 265245633));
                        var_20 = (max(var_20, (((15 ? (arr_15 [i_2] [i_1 - 1] [i_2] [i_2]) : (((-1324513062399129843 ? ((27442 ? 27457 : 118)) : (!-6005)))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, var_4));
                        arr_22 [22] [i_1 + 1] [i_2] [i_7] = -1790513250832338869;
                        var_22 = (max(var_22, 127));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_23 = var_3;

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_24 = (arr_15 [i_0] [i_1 - 1] [i_2] [i_8]);
                            var_25 = 0;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_26 = (var_9 == var_9);
                            arr_34 [i_10] [i_8] [i_2] [6] [i_0] = var_6;
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_8] [i_0] [i_2] [i_11] = (((1 - 94) > (min(var_8, 14921420312748718428))));
                            var_27 -= ((((min((var_2 || 1), 123308375692723033))) ? var_3 : (((arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) / var_3))));
                            var_28 = var_7;
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, ((((arr_33 [i_1 + 1] [i_1] [i_1] [11] [i_1 + 1] [i_1] [i_1 + 1]) - 3)))));
                            var_30 = ((((var_1 ? (arr_29 [i_0] [i_1] [i_2] [i_0] [i_12] [i_0] [i_12]) : (var_9 | 38065))) & (var_1 / -469537996)));
                        }
                    }
                    arr_42 [i_0] [19] [i_0] [19] = (((-(arr_31 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                    arr_43 [i_0] [i_1 + 1] [i_2] = ((-(min((arr_26 [i_0] [i_1] [21] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_31 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_0])))));
                    arr_44 [21] [21] [i_2] [i_2] = ((94 ? (((arr_26 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]) - -var_0)) : ((-(arr_6 [i_0] [i_1 + 1] [i_0])))));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_31 = arr_18 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13];
        var_32 = 112;
    }
    #pragma endscop
}
