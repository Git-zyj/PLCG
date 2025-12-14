/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_17 = (((24055 + (arr_2 [i_0] [i_0 + 1]))));
                    arr_7 [i_0] = (max((arr_1 [i_0 - 1] [i_0]), (arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1])));
                    var_18 = ((min(var_15, (((arr_2 [i_0] [i_1]) - (arr_5 [i_0] [i_0 + 1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_19 ^= (((var_9 ? var_5 : ((var_2 ? var_8 : var_9)))) | ((((~-1115531170562458747) ? (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : var_11))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (((((max(var_0, var_4))) ? ((max((arr_2 [i_0] [i_3]), 112))) : var_14)));
                        var_21 = (max(var_21, (((!(arr_2 [i_1] [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [13] [i_0] = arr_0 [i_0 - 1];
                        var_22 = (~0);
                        var_23 = (max(var_23, (((((((arr_10 [i_1]) - var_11))) ? (((arr_4 [i_1] [i_1] [i_1]) ? var_5 : (arr_4 [i_3] [i_0 - 1] [i_0 + 1]))) : (arr_14 [i_0]))))));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_21 [6] [i_0] [i_3] [i_0] [i_5] [i_5] [i_6] = ((var_2 ^ (min((arr_4 [i_0] [i_1] [i_6]), 492613869))));
                            var_24 = (max(var_24, (((~((7282548015789110170 ? 65535 : 13784240782481334739)))))));
                            var_25 += (!var_2);
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] = var_10;
                            var_26 = (((((((var_12 ? var_5 : (arr_16 [i_0] [i_1] [i_0])))) ? (~1) : (arr_3 [i_1] [i_5] [1]))) | ((((arr_19 [i_0 - 1] [i_0 - 1]) ? (~var_10) : (arr_14 [i_0 - 1]))))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((~(((arr_26 [i_0 + 1] [5] [i_0 + 1]) ? (arr_23 [i_0] [i_1] [i_3] [i_5] [i_3]) : var_7)))))));
                            var_28 = (((min((max(var_16, var_8)), (((var_16 ? var_9 : var_6))))) * (!68719476608)));
                            var_29 ^= ((1 ? ((min(var_6, (((var_5 || (arr_4 [i_3] [i_3] [i_3]))))))) : ((min(1, (arr_5 [i_8] [i_1] [i_0]))))));
                        }
                        var_30 *= ((((((!(((var_1 ? (arr_22 [1] [i_5] [i_3] [i_3] [i_3] [i_3]) : var_13))))))) ^ ((1 ? (max(var_14, var_8)) : (min(var_5, (arr_8 [14] [18] [i_3] [i_3])))))));
                    }
                    var_31 = ((((-(arr_26 [8] [i_1] [1])))) + (max(var_9, ((447546649221118463 / (arr_14 [5]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_32 = (max(var_32, var_5));
                                arr_36 [i_0] [i_1] [i_3] [i_9] [i_0] = (max(((~(arr_16 [i_0] [i_1] [i_9 + 1]))), (arr_15 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])));
                                var_33 = (min(var_33, var_2));
                                arr_37 [2] [2] [19] [i_9] [i_0] [i_10] = -43;
                                var_34 = (max(var_34, ((max(((var_2 ? 1 : (arr_34 [i_9 - 1] [i_1] [i_3] [i_9 - 2]))), ((((arr_22 [i_0 - 1] [i_1] [i_10] [i_10] [i_10] [i_1]) && var_6))))))));
                            }
                        }
                    }
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    arr_42 [0] [i_0] = ((max(var_8, (arr_28 [i_0 - 1] [i_1] [1] [16] [i_0]))));
                    arr_43 [i_0] = ((((((((arr_11 [i_0] [i_1] [i_0]) ? var_13 : var_6))) ? ((2233432227 << (var_16 - 244))) : (((var_14 + (arr_41 [i_0] [19])))))) % (arr_14 [i_0])));
                    var_35 = (i_0 % 2 == 0) ? ((((!var_15) ? (((((arr_27 [i_11] [8] [i_11] [i_11 - 1] [8] [i_11] [i_0]) + 2147483647)) << (((arr_15 [10] [i_11 - 1] [i_0] [1] [5]) - 33)))) : (arr_17 [i_0] [i_0])))) : ((((!var_15) ? (((((((arr_27 [i_11] [8] [i_11] [i_11 - 1] [8] [i_11] [i_0]) - 2147483647)) + 2147483647)) << (((((((arr_15 [10] [i_11 - 1] [i_0] [1] [5]) - 33)) + 46)) - 30)))) : (arr_17 [i_0] [i_0]))));
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    var_36 = ((var_4 ? (var_1 || var_16) : 0));
                    arr_47 [i_0] [i_0] [i_12] = arr_17 [i_12] [i_1];
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_37 = (arr_5 [i_0 + 1] [i_1] [i_14]);
                                var_38 -= -5431;
                            }
                        }
                    }
                }
                var_39 = (((arr_5 [i_0] [i_0] [i_0]) - ((var_0 ? (arr_17 [1] [i_1]) : 3123078943657190656))));
                var_40 = (max(var_40, (((-((((arr_26 [3] [i_1] [i_1]) != (arr_31 [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 1])))))))));
            }
        }
    }
    var_41 = (min(var_41, var_6));
    #pragma endscop
}
