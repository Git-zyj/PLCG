/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = var_12;
                                var_15 = (arr_3 [i_2]);
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((min((~0), (~var_9)))) ? (min(1218348245, ((72057594037927935 ? 1 : 7)))) : ((((arr_14 [i_1 - 2] [i_1 + 1]) ? var_10 : 27900))))))));
                            var_17 = ((!(var_4 == var_10)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = (((arr_18 [i_0] [i_1] [0] [0]) != 6958555955046170451));
                        }
                    }
                }
                var_18 = (((min(-97, (arr_18 [12] [i_1] [12] [i_1 + 1])))) ? var_2 : (arr_9 [i_1 + 2] [i_1 - 2]));
                var_19 = (min(var_19, var_1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            {
                var_20 = (max(var_20, 7992616026647593644));
                var_21 = ((((min(var_5, (min((arr_8 [i_8] [i_8] [i_8] [i_7] [i_7]), var_7))))) ? (((!(7992616026647593644 >= 1)))) : (((!(14716273694844282958 | 7992616026647593628))))));

                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {
                    arr_30 [i_7] [i_8 - 2] [i_9] = ((((min(20426, 50957))) ? ((10454128047061957987 * (arr_19 [2] [i_8] [i_8] [i_7] [i_8 + 3] [i_7]))) : -var_7));
                    arr_31 [10] [5] [i_9] [5] = ((var_11 ? 4430 : ((var_10 ? 2091911960 : (arr_3 [i_9 - 3])))));
                    var_22 = var_7;
                    var_23 = ((!((max(56, 7992616026647593631)))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_24 |= (5977901206448040654 < 511);
                        arr_36 [i_7] [i_10] [i_7] [i_10] [i_10] = ((15346516587815766076 ? var_3 : (((16777215 ? 122 : (arr_3 [i_7]))))));
                        var_25 = ((((((((1 ? var_5 : var_13)) + 2147483647)) >> (var_5 + 54))) ^ (arr_25 [1] [1] [i_9])));
                        var_26 = ((-((~(arr_20 [i_7] [i_8 + 2] [i_10])))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_27 = ((((min(3730470378865268657, ((min(var_7, var_10)))))) && var_11));
                        var_28 = (max(var_28, ((max((min(((min(var_6, var_13))), ((var_2 ? var_4 : (arr_26 [i_7] [i_8] [i_9]))))), 2203055335)))));
                        var_29 = (min(var_29, var_0));
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_30 = var_11;
                        arr_41 [i_9] [i_12] = ((7992616026647593628 ? -4429 : 695635125810794348));
                    }
                }
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    var_31 = ((var_7 ? (((var_0 ? var_11 : (arr_12 [0] [i_7] [12] [i_8] [i_8] [i_13] [0])))) : var_13));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_32 = (max(var_6, ((max((var_10 == var_7), 57604)))));
                                var_33 = (max(var_33, (((~(max((arr_3 [i_8 + 1]), (!16408))))))));
                                arr_50 [i_7] [i_8] [i_13] [i_13] [i_14] [i_15] |= var_4;
                            }
                        }
                    }
                    var_34 += -31596;
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_35 = (min(var_35, ((((arr_7 [i_16] [i_7] [0] [i_8 - 3] [i_7] [i_7]) >= var_8)))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_36 ^= (arr_34 [10] [i_17] [i_16] [i_18]);
                                var_37 = (max(var_37, ((((10454128047061957967 ? 1073741696 : -1403803917750078307))))));
                                var_38 = (arr_48 [i_7] [3] [i_16] [i_17] [i_18]);
                                var_39 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 *= (max(((max(var_13, (!var_9)))), var_6));
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 12;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_41 = (((min(7, 10454128047061957987)) << (((min((-31596 - var_10), ((min((arr_27 [i_19] [i_20]), var_7))))) + 31547))));
                            arr_66 [i_19] [i_19] [i_19] [i_19] [i_21] [i_22] = var_11;
                            var_42 = ((((max((arr_58 [i_19] [i_22 - 1]), var_7))) ? (1 * -1250603897168943937) : var_2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 0;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            arr_72 [i_24] [i_19] = (min(var_1, ((max((var_10 % 1), (arr_16 [i_19] [i_20] [1] [i_19]))))));
                            arr_73 [1] [0] [i_19] [i_24] = 8216535893553233031;
                        }
                    }
                }
                var_43 = (max(var_43, ((((var_11 << (var_12 - 15375279505053507941)))))));
            }
        }
    }
    #pragma endscop
}
