/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((((min(var_13, var_4))) ? var_17 : (var_1 / var_18)))) && ((((var_7 >= var_14) ? (max(1111372212, 14)) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min((min((arr_0 [i_0]), (arr_3 [i_0] [i_0]))), (((-(arr_0 [i_0]))))));
                var_22 = (max(var_22, ((min((arr_5 [i_1]), ((min(255, (16 || 10)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (min(((max((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_3])))), (max((arr_1 [i_1]), (arr_8 [i_0] [i_3])))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_4] = (max((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [6] [i_2] [i_3] [i_4]))), (min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]), var_15))));
                                var_23 = (max(var_23, ((min(5, 19424)))));
                                var_24 = var_18;
                                var_25 &= (((((((max(var_10, var_10)) / (((max(1, (arr_4 [i_0] [i_0] [i_0]))))))) + 9223372036854775807)) >> (var_6 - 47005)));
                                var_26 += 14;
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_0] = ((var_5 ? (((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((arr_17 [i_0] [2] [i_0] [i_0] [i_0] [i_0] [i_0]) - 1683300879)))) : (~40397)));
                                var_27 = ((((min((max((arr_3 [i_0] [i_0]), var_3)), -1))) ? (arr_4 [i_0] [3] [i_0]) : var_14));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] [i_5] = ((((max((((var_17 || (arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [2])))), (min(var_11, (arr_10 [i_0] [i_0] [6] [i_0])))))) / ((min((arr_0 [i_0]), (62 >= 7))))));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_28 = (max((-2147483632 || -1), ((-(((arr_10 [7] [7] [7] [i_6]) ? 52732 : var_2))))));
                                var_29 = ((((min((((105 / (arr_0 [i_2])))), ((var_14 ? var_12 : 52732))))) ? ((((((min(var_15, (arr_9 [6] [i_1] [i_2] [i_3] [i_6])))) && ((min(var_12, 14))))))) : (min(var_1, var_14))));
                            }

                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_30 = max(((((255 ? var_10 : var_14)))), (min((arr_17 [i_0] [i_0] [9] [9] [i_2] [i_0] [i_7]), (arr_17 [i_0] [i_7] [i_1] [i_3] [i_7] [i_3] [i_2]))));
                                var_31 ^= (((((var_2 ? (((arr_6 [i_1]) ? var_0 : (arr_18 [i_3]))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || ((((min(var_6, (arr_8 [i_7] [i_0]))))))));
                            }
                            for (int i_8 = 0; i_8 < 10;i_8 += 1)
                            {
                                var_32 = (arr_12 [i_3]);
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min((arr_12 [i_0]), (arr_13 [i_2] [i_1] [i_2]))), ((((1 * 42201) > var_16)))));
                                var_33 = (max((max(((min(-8192, 246))), ((-9 ? (arr_22 [i_0] [i_1] [i_0] [i_0] [i_8] [i_8]) : var_19)))), ((((max(246, 4294967294)) == (((max(248, (arr_0 [i_0]))))))))));
                            }
                            for (int i_9 = 2; i_9 < 9;i_9 += 1)
                            {
                                var_34 += (max(2147483645, (((((min(-7225, var_1))) && var_12)))));
                                var_35 = ((var_18 ? (min(858844685, -4987865368662499483)) : (((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_3])))))));
                                var_36 = (min((((!((min(9, 4)))))), ((((min(-1, var_7))) ? ((((arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_9 + 1]) >= 63955))) : (arr_10 [0] [i_1] [i_0] [i_0])))));
                                arr_30 [i_0] [i_1] [i_0] [i_3] [i_9] = ((min(255, 1)));
                            }
                            for (int i_10 = 0; i_10 < 10;i_10 += 1)
                            {
                                var_37 -= (((((arr_0 [i_10]) ? (max((arr_13 [i_1] [i_1] [i_3]), var_1)) : (((var_6 ? var_19 : var_8))))) != ((max((arr_1 [i_0]), ((min((arr_31 [i_0] [i_0] [i_2] [i_3] [i_10]), 6329))))))));
                                var_38 = (arr_12 [i_1]);
                            }
                            var_39 = ((var_16 > (max(1618529312, 5))));

                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                arr_35 [i_3] [i_0] [i_3] [i_2] [i_0] [i_0] = ((((((((min(12, 65510)))) / 4269986362595662372))) ? ((max(var_2, (arr_22 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0])))) : (((arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_11] [i_11]) / (min(var_12, var_5))))));
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] [7] = (min(((max(21570, (((18446744073709551609 <= (arr_12 [1]))))))), (max(((min((arr_7 [i_0] [i_2] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_0] [8] [i_0])))), (arr_34 [i_1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
