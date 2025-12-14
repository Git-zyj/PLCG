/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((var_6 && var_10) && ((min(var_10, var_0))))))));
    var_17 &= ((-(min(300979103, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] = (((((var_2 != (arr_3 [1] [i_0 + 1])))) / 1769221710));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = ((-(max((((arr_3 [i_2] [i_1]) / (arr_7 [i_0]))), ((min((arr_6 [i_0]), (arr_2 [i_0] [i_0] [i_2]))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (((((((arr_7 [i_2]) && (arr_7 [i_1]))))) != (((arr_7 [i_2]) ? 8919781766891527273 : (arr_7 [i_1])))));
                    arr_9 [i_0] [i_1] [i_0] &= ((-((min((min((arr_0 [i_2]), 0)), ((((arr_6 [i_1]) || -1769221711))))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = (~1);
                        arr_15 [i_0] [i_2] [i_2] [6] = ((((max((arr_0 [i_3 - 1]), (arr_0 [i_3 - 1])))) / (arr_0 [i_3 - 1])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_19 [6] [i_1] [6] [i_2] [i_4] [i_4] = arr_10 [i_0] [i_0] [i_0] [i_0];
                        var_19 = ((-((((arr_2 [i_0 - 2] [i_0 + 3] [i_0]) != (arr_0 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_2] [i_2] = (arr_1 [i_1]);
                        arr_25 [i_2] [i_2] [i_1] [i_2] [i_5] = (((arr_6 [i_0 + 1]) - (arr_6 [i_0 - 2])));
                        arr_26 [i_0] [i_0] [i_0] [2] [i_2] = 2819;
                        arr_27 [i_0] [i_1] [i_1] [i_5] &= (((arr_16 [i_0 + 3] [i_1] [i_2] [i_5] [i_2]) && 1));
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [8] [i_2] [i_2] = -2819;
                        var_20 = 2147483647;
                    }
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_21 = (max(var_21, (((((-(arr_4 [i_0 - 2] [i_1] [i_7 + 1]))) + (arr_4 [i_0 + 2] [i_1] [i_7]))))));

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_38 [i_0] [i_1] [i_7] [i_7] = ((arr_3 [i_0 - 1] [i_7 - 1]) ? 119 : (2147483647 / -300979119));
                        var_22 = ((((((arr_34 [i_0] [i_1] [4]) < (arr_37 [i_0 + 3] [i_0] [i_0] [i_0] [i_0])))) | (2147483644 & var_2)));
                        var_23 = (arr_0 [i_0 - 1]);
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_24 &= (arr_13 [i_1] [i_0 + 3] [i_7]);
                        var_25 = (((!var_1) < (((arr_1 [i_0 + 3]) / (arr_33 [i_7 - 1] [i_0 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_26 = (!-2147483647);
                        arr_45 [9] [9] [i_7] &= ((-((2 / (arr_18 [i_0] [i_7] [i_0] [18] [i_0])))));

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_27 = 255;
                            arr_48 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] &= (((arr_7 [i_11 - 1]) / (arr_7 [i_11 + 1])));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_7] [i_1] [i_1] [i_0] [19] = (arr_0 [i_10]);
                            arr_54 [i_0] [i_0] = (((arr_3 [i_0 + 1] [i_7]) | 4746));
                            var_28 ^= (((1 && 2395318300) | (((arr_0 [i_0]) * (arr_30 [i_0 - 1] [i_1] [i_0] [0])))));
                            var_29 = (((54715 + 0) + -25701));
                        }
                        for (int i_13 = 3; i_13 < 16;i_13 += 1)
                        {
                            var_30 = (min(var_30, (arr_1 [i_0])));
                            var_31 = (max(var_31, ((((((((~2147483647) + 2147483647)) + 2147483647)) >> (arr_35 [i_1] [i_7] [i_10] [i_13 - 3]))))));
                            var_32 ^= (arr_17 [i_1] [i_1]);
                        }
                        for (int i_14 = 2; i_14 < 19;i_14 += 1)
                        {
                            arr_62 [i_0] [i_1] [i_7] [i_14] [i_14] = (((~39944) | (arr_1 [i_7])));
                            var_33 ^= 2147483647;
                            var_34 = (((235 ? var_13 : 137)));
                            arr_63 [i_0 + 1] [i_1] [i_7] [i_10] [i_0 + 1] &= (arr_51 [i_0 - 2] [i_0 + 3] [i_0 - 2] [i_0] [i_0]);
                        }
                        var_35 = (min(var_35, 0));
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        var_36 &= ((((!(arr_7 [i_0 + 3])))));
                        arr_66 [i_0] [i_0] [i_15] [i_15] [i_0] = -1;
                    }
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_37 = (~156);
                    arr_69 [i_16] [i_1] [i_16] = (max((min((arr_43 [19] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0]), (arr_6 [i_16]))), (arr_52 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_16] [i_0 - 1])));
                    arr_70 [i_16] = (((((0 - ((-1769221690 - (arr_50 [i_0] [i_1] [i_16] [i_16] [i_0 - 2] [i_1])))))) || (~3341156385754040150)));
                }
            }
        }
    }
    #pragma endscop
}
