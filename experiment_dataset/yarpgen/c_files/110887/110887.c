/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((1 ? var_6 : var_7))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_3 + 1] [i_2] [i_2] [i_0] = (((((arr_2 [i_1]) ? ((58086 ? 58102 : 16383)) : 4095)) >> (var_7 - 7639)));
                        arr_10 [i_2] [i_2] [i_2] [i_0] [i_2] = ((((min(6264, 1))) && var_4));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = ((!((((((93410745 ? (arr_8 [i_1] [i_2] [i_2] [i_3] [i_4]) : var_3))) ? var_6 : (var_10 || 125))))));
                            var_13 |= (((~var_1) <= (((((26663 ? var_8 : (arr_4 [i_1])))) ? (arr_3 [i_3 - 1] [i_2]) : 3032))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_2] = var_8;
                            var_14 -= 35869;
                            var_15 = (max(var_15, (arr_0 [i_0] [i_1])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_16 = -var_8;
                            var_17 = (max(var_17, ((((var_7 ? var_5 : (arr_16 [i_5] [i_5] [i_3 - 2] [i_3 - 2] [8] [i_3 + 2])))))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_0] [i_2] [i_2] = var_7;
                            var_18 -= (max(var_4, (((arr_18 [2] [i_2] [i_3 + 1] [i_2]) ? 7427 : (arr_6 [i_1] [i_3] [i_3 + 1] [i_0])))));
                            var_19 = ((-(((arr_12 [i_2]) ? -3222 : (arr_12 [i_2])))));
                        }
                        arr_20 [i_1] [i_1] [i_2] [i_2] [i_0] [i_2] = ((~((var_1 ? (!var_0) : ((var_10 ? (arr_1 [i_2] [i_3]) : (arr_4 [7])))))));
                        arr_21 [i_0] [18] [i_0] |= var_10;
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_20 -= var_3;

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_2] = ((((arr_6 [i_7 - 2] [i_8 + 1] [1] [i_2]) ? ((var_10 ? -30666 : var_10)) : var_5)));
                            var_21 -= (((var_3 ? -var_2 : ((10 ? var_10 : 17074)))));
                            var_22 = -var_3;
                            arr_30 [i_0] [i_1] [i_2] [i_2] [i_8] = (min(((~(arr_16 [1] [11] [1] [i_8 + 1] [i_7 + 2] [i_7 + 2]))), 12115995914820764484));
                        }
                        arr_31 [i_2] [i_1] [i_2] [i_1] = var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_23 = (((((arr_34 [i_10 + 3]) * (arr_34 [i_10 + 1]))) * ((((49130 <= (arr_34 [i_10 + 1])))))));
                                var_24 = ((62310 ? ((((((arr_22 [i_2] [i_1] [i_2] [i_1] [i_10 + 1]) % (arr_8 [i_10 - 1] [i_2] [i_0] [i_2] [i_0])))) ? (arr_23 [i_0] [i_1] [i_1] [i_1] [7]) : var_2)) : var_1));
                                var_25 = ((((min((arr_18 [i_0] [i_1] [i_0] [i_10]), var_1))) ? ((((42714 - (arr_35 [i_0] [i_1] [i_2] [0] [i_1]))) + -var_0)) : (((var_0 ? var_7 : var_5)))));
                            }
                        }
                    }
                    var_26 |= var_9;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 = ((var_4 ? ((-(arr_1 [i_1] [i_11]))) : (arr_3 [1] [i_1])));
                        var_28 = ((!(((var_1 ? var_7 : (var_8 & var_2))))));
                        arr_39 [i_11] [i_11] [i_2] [i_2] [i_1] [i_1] |= (((((((((arr_38 [i_0] [8] [i_1] [1] [i_2] [i_11]) ? var_0 : 6330748158888787131))) ? var_10 : 6330748158888787132))) ? (min(var_9, var_4)) : (((-(arr_28 [10] [10] [10] [10] [10]))))));
                        var_29 = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_11]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
