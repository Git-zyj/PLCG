/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((-(var_14 / var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_3 - 3] [i_0] [i_2 - 1] [i_0] [i_0] = ((~(arr_6 [i_0] [i_0 - 1] [i_0 - 1])));
                        arr_10 [5] [i_0] [i_2] [i_2] = (var_6 >= -var_7);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = arr_6 [i_0] [i_1] [i_1];

                        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_19 -= 11635003294790793878;
                            arr_18 [i_0] [i_0] [i_0 + 1] = (((var_1 ? 1600487952 : (arr_1 [i_4]))));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_20 = (arr_19 [i_2 - 1] [0] [i_2]);
                            arr_22 [i_0] [i_4] [i_2] [i_1] [i_0] = arr_20 [10] [3] [i_2 - 1] [i_4] [i_6 - 1] [i_0 + 1];
                            var_21 = var_11;
                        }
                        arr_23 [11] [i_0] [10] [i_4] [i_0] [i_0] = var_5;
                        arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [2] [i_1] |= (arr_5 [i_0] [i_0] [i_0 - 1] [i_2]);
                        arr_25 [i_0 - 1] [i_1] [i_0] = (~(((arr_20 [i_0 + 1] [i_0 + 1] [3] [i_2] [i_2 - 1] [i_4]) ? var_4 : var_15)));
                    }
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_2] [i_0] = 11635003294790793878;
                        arr_29 [i_0] [i_1] = var_4;
                    }
                    arr_30 [i_0] [i_1] [i_1] [i_0] = var_11;
                    var_22 = (var_15 % (var_4 % var_16));
                    var_23 = var_11;
                }
                for (int i_8 = 4; i_8 < 15;i_8 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_24 *= -var_0;
                        arr_37 [i_8 - 4] [i_8 - 4] [i_0] [i_8 - 1] [i_8] [i_8 + 1] = var_16;
                    }
                    arr_38 [i_0] [i_0] [i_0] = (((((0 ? (arr_33 [i_0] [i_8 - 4]) : (arr_33 [i_0] [i_8 - 3])))) ? (arr_5 [i_0] [i_1] [i_1] [i_8]) : (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : var_4))));
                }
                for (int i_10 = 4; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_25 ^= -103;
                    var_26 ^= arr_19 [i_0] [i_0] [i_0 + 1];
                    var_27 = (max(var_27, 1600487955));
                }
                arr_43 [i_0] = (((min((arr_21 [i_0] [i_1] [i_1] [i_0 + 1]), ((var_16 ? var_15 : (arr_20 [i_0] [i_1] [i_1] [i_1] [2] [i_1]))))) * (((!(((var_11 ? var_5 : var_4))))))));

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_52 [i_0] [i_0 + 1] [i_0] [i_1] [i_11] [i_12] [4] = ((((-(arr_34 [i_0 + 1] [i_1] [i_11] [1]))) % (((((~(arr_0 [i_11])))) ? (((arr_51 [i_0] [4] [11] [i_0] [i_13]) ? var_4 : 1600487955)) : var_8))));
                                var_28 = (min(var_28, (((1 ? 647416282 : 8996512394079056590)))));
                                arr_53 [i_0] [i_1] [i_1] [i_12] [i_11] = (6811740778918757738 ? ((min(var_6, var_5))) : (arr_5 [i_11] [i_0 - 1] [i_11] [i_11]));
                                var_29 = (max((max(1, 55432)), 225));
                            }
                        }
                    }
                    arr_54 [i_0] [i_0 - 1] [i_0] [i_0 + 1] = ((var_9 ^ (arr_21 [i_1] [i_0] [i_1] [i_1])));
                }
            }
        }
    }
    var_30 = 71;
    #pragma endscop
}
