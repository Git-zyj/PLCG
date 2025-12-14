/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_2;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_13 *= var_5;
                arr_10 [i_0] [i_1] [i_1] [i_2] = (min(var_8, (((arr_5 [i_0] [i_1]) ? var_8 : 9681243548170013639))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_13 [13] [2] [i_2] [i_2] [i_3] = 144115188075855871;
                    arr_14 [i_0] = var_11;
                    arr_15 [i_2] = 31;
                    arr_16 [i_0] [i_1] [3] [i_3] = ((((!(arr_1 [9]))) ? var_1 : 1));
                    arr_17 [i_0] [13] [i_1] [i_2] [i_3] = (((arr_5 [1] [i_3]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_3])));
                }
            }
            arr_18 [i_1] = ((var_10 ? ((max((!1), (arr_1 [i_1])))) : (max(13224, var_11))));
            arr_19 [i_0] = 8309;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_26 [i_0] [9] [1] [5] [i_5] = ((((-106 ? ((((arr_5 [i_0] [i_4]) ? var_3 : var_6))) : (max(var_1, 1)))) | (arr_9 [3] [3] [i_4])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_14 = (max((((arr_29 [i_0] [i_1] [i_4] [i_5] [i_6]) ? 1 : (arr_25 [i_0] [i_4] [11] [8]))), (((~105) & (arr_25 [6] [i_1] [11] [6])))));
                            var_15 *= ((!((((arr_20 [1] [i_1] [5] [i_6]) ? ((-474723390 ? 1 : 15717974945021479880)) : var_3)))));
                            arr_31 [i_0] [i_1] [i_1] [i_4] [7] [i_6] = (((-(min(0, var_1)))));
                            arr_32 [i_0] [i_1] [1] [2] [12] [12] [i_6] = (min((var_4 | var_9), 474723411));
                            arr_33 [i_0] [3] [i_4] [i_5] [2] = ((((+(min((arr_0 [i_1]), 1068548987)))) + (((~var_4) ? (arr_27 [i_0] [i_0] [i_1] [i_4] [2] [i_6] [6]) : (186 - -117)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_16 = (min(var_16, ((max(((196 ? (~6013893261022863943) : ((max(1, (arr_34 [i_7])))))), (~var_12))))));
        var_17 = (min(var_17, ((((((arr_34 [i_7]) * (-211 >= 4157))) - 105)))));
    }
    var_18 = (max((!18442240474082181120), -var_7));
    #pragma endscop
}
