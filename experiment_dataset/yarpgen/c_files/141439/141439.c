/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -var_1));
    var_12 *= var_0;
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = ((var_4 ? (arr_1 [i_0 + 1]) : 1));
        arr_3 [i_0] = (~var_1);
        arr_4 [i_0] = var_8;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            var_14 = 37;
                            var_15 = (48311 | 32767);
                            arr_15 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] [i_2 - 3] = var_10;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_16 = (min(var_16, (((((244 ? var_4 : 10718258168049492884)) ^ (arr_17 [3] [i_2] [i_2] [1] [22]))))));
                            var_17 -= var_0;
                            var_18 = ((var_7 ? (arr_0 [i_0 + 1] [i_1 + 3]) : (~var_10)));
                        }
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_19 = (~(arr_19 [i_6] [0] [i_2 - 3] [i_2 + 1] [i_2]));
                            arr_21 [19] [i_1 + 3] [i_2] [i_6] [i_6] = ((!(~7728485905660058731)));
                        }

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_20 += ((((~(arr_13 [i_0] [i_1] [i_2] [i_3] [i_1]))) << (((~var_9) + 285))));
                            arr_24 [i_0 + 1] = (arr_9 [i_0 + 1] [i_1 + 3] [i_1 + 3]);
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_21 -= -245;
                            arr_29 [i_0] [i_1] [i_2] [i_3] [19] = (arr_26 [i_0] [i_1 - 1] [14] [4] [4]);
                            arr_30 [i_0] [18] [8] [i_3] [19] = ((~(arr_28 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_34 [i_0] [i_1 + 3] [i_2] [i_9] [i_9] = (((arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [10] [i_0] [i_0]) ? ((((arr_23 [i_0 + 1] [8] [i_1] [i_1] [i_2] [i_3] [i_9]) ? -244 : var_0))) : ((-86 ? var_1 : var_1))));
                            var_22 = (max(var_22, ((((arr_23 [i_0 + 1] [i_0] [i_0] [i_0] [5] [i_0 + 1] [i_0 + 1]) ? (arr_23 [i_0 + 1] [i_0] [15] [i_0] [i_0] [i_0] [i_0 + 1]) : (arr_23 [i_0 + 1] [6] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                            arr_35 [14] [i_9] [i_2] [i_0] [24] = ((arr_17 [i_1] [21] [i_2 + 3] [19] [i_9]) | (((arr_22 [8] [10] [7] [13] [i_9] [i_2] [i_0]) ? 38488 : (arr_18 [i_0] [i_1] [i_2 - 3] [i_3] [i_9]))));
                            arr_36 [i_0 + 1] [i_1 - 1] [i_9] [i_1] [i_2] [i_3] [i_9] = (arr_17 [8] [9] [i_2] [13] [i_9]);
                        }
                        arr_37 [i_0 + 1] [i_1 + 2] [i_2] [i_3] = ((var_0 ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])));
                        var_23 -= (~-244);
                        arr_38 [i_3] [i_2] [i_1] [i_0] = (!13);
                    }
                    arr_39 [9] [i_1] [9] = -8454759094705633051;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_42 [i_10] = var_8;
        var_24 -= (max((max((4989065388415460293 / 8454759094705633079), var_6)), (((-(max((arr_20 [i_10] [i_10] [14] [i_10] [i_10] [i_10]), (arr_18 [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
        arr_43 [i_10] = -6446582292153302505;

        /* vectorizable */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_25 *= ((var_8 ? var_1 : (arr_6 [i_10])));
            var_26 = (arr_33 [i_11]);
        }
        var_27 = (arr_33 [i_10]);
    }
    #pragma endscop
}
