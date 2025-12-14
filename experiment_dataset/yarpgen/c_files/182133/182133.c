/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [19] [i_0] [i_2] = (-9223372036854775807 - 1);
                    arr_9 [i_0] [i_0] [i_0] = (arr_0 [1]);
                    arr_10 [i_2] [18] [i_0] [i_1] = 148;
                    var_12 = arr_7 [i_2];
                }
            }
        }
    }
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_14 = 18446744073709551604;

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_3] [i_4] [i_5] = (arr_18 [i_5 - 1]);
                    var_15 = (max(var_15, var_4));
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    var_16 *= var_1;
                    var_17 -= 0;

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_18 = ((min(-var_6, (arr_12 [i_7]))));
                        arr_25 [i_3] [i_6] [i_3] = (!var_1);
                        var_19 = (((((~((min(169, var_0)))))) | (max(var_1, (arr_20 [i_3] [i_4] [i_6 - 3])))));
                        var_20 = ((((((var_2 == var_3) / 2147483647))) ? 80 : (max(((var_1 ^ (arr_13 [i_3] [i_3]))), 0))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            var_21 = (max(var_21, (((65531 ? (arr_29 [i_6 + 1] [i_6 - 3] [i_6 - 3]) : 171)))));
                            arr_30 [i_9] [i_4] [i_8] [i_8] [i_8] [i_6] = max((((arr_23 [i_6]) ? (((arr_15 [0] [i_3]) ? var_0 : var_8)) : (min(var_8, var_8)))), var_5);
                            var_22 = (min(var_22, ((var_7 ? (arr_21 [i_3] [i_3] [14] [i_3]) : ((min((max((arr_16 [i_3] [4] [i_3]), 164)), ((min(40768, (arr_22 [i_4] [8] [i_4] [i_4])))))))))));
                            var_23 = ((!(arr_27 [i_9 + 1] [i_8] [9] [i_3])));
                        }
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            var_24 = ((max((arr_32 [i_6 - 1]), var_5)));
                            var_25 *= 1;
                            var_26 = (min(var_26, ((max((max(var_3, var_7)), (arr_28 [i_6 + 1] [i_10 - 2] [i_4] [i_10 - 2] [8] [i_10] [0]))))));
                            var_27 = (max(var_27, ((max(var_4, 0)))));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_28 = (((((min(var_8, (arr_33 [i_6]))) ? var_4 : var_7))));
                            var_29 = 9480231784955942524;
                            arr_36 [11] [2] [i_6] [i_8] [2] = (arr_33 [i_6]);
                        }
                        arr_37 [2] [i_4] [i_6] = var_8;
                    }
                    var_30 = (max(745896758, (arr_23 [i_6])));
                }
                for (int i_12 = 4; i_12 < 12;i_12 += 1)
                {
                    var_31 = (min((-9223372036854775807 - 1), 0));
                    arr_42 [i_3] [i_4] = ((max(((var_5 ? var_5 : 51)), ((max((arr_29 [i_3] [i_4] [11]), var_3))))) ^ 26218);
                    var_32 = var_8;
                }
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    arr_46 [i_3] [i_4] [i_13 - 2] [i_13] = (((((((var_8 ? (arr_11 [i_4] [i_13]) : (arr_21 [i_3] [i_3] [2] [13])))) ? var_2 : var_2)) + (min(((((arr_26 [i_3] [i_4] [i_4] [i_13 + 2]) - var_8))), var_2))));

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_33 = (max(var_33, var_3));
                        var_34 |= (~0);
                    }
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        arr_53 [i_3] [i_15] [11] [11] = (((max((2 << 7), -598478460)) > var_5));

                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            var_35 = (~(((max(5681619638726544455, var_0)))));
                            var_36 -= (((max(163, (max((arr_20 [i_16] [i_16] [i_16]), 14989677042074480336)))) ^ var_8));
                            var_37 -= (((19 != var_0) > 14497229894105745084));
                        }
                        for (int i_17 = 1; i_17 < 12;i_17 += 1)
                        {
                            var_38 = 86;
                            var_39 += (min((((9617573857233654278 == -2147483647) / (((arr_13 [i_13 - 1] [i_4]) / 35630203)))), ((((arr_31 [i_17 - 1] [i_17] [i_17 + 1] [i_17 + 1] [i_17 + 2] [11] [i_17 + 1]) & (arr_28 [i_17 + 3] [i_17 + 3] [i_4] [i_17] [i_17 - 1] [0] [i_17 + 3]))))));
                            var_40 = (min(((max(731486962, (arr_1 [i_4])))), (((6 ? 14497229894105745059 : 4294967284)))));
                        }
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            var_41 *= (max((((arr_38 [i_13 - 2] [i_15 - 1]) ? (arr_38 [i_13 + 1] [i_15 + 2]) : (arr_51 [i_3] [0] [i_13 + 2] [i_18] [i_18] [i_15 + 1]))), ((((((max(53843, 53843)))) > ((var_0 ? (arr_61 [i_13] [i_4] [i_13] [i_18]) : (arr_38 [7] [i_13]))))))));
                            arr_64 [5] [i_15] [i_4] [i_13] [14] [i_18] [14] = (arr_29 [4] [4] [i_15]);
                        }
                        var_42 = ((+(((arr_15 [i_13 - 2] [i_15]) << (var_8 + 1233264531)))));
                        var_43 = var_6;
                    }
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        var_44 = (~var_1);
                        var_45 = (min(4294967287, 169));
                        var_46 &= var_0;
                        var_47 = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_48 = (min((((!(!108)))), ((max(var_1, var_7)))));
                                var_49 = (arr_29 [3] [i_13 + 2] [2]);
                                var_50 = 710608156;
                                var_51 += (~((-((var_4 ? var_6 : 120)))));
                                var_52 = 6000975971753311393;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
