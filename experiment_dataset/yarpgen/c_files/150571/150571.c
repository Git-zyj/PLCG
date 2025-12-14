/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 / (~var_9)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] |= ((-(arr_0 [i_1 - 3] [i_1])));
            var_17 = var_8;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [11] = ((((((!18003) ? var_12 : (1476810136 > var_5)))) ? (arr_4 [10] [i_2 - 1] [10]) : (arr_4 [i_2 - 1] [i_2] [i_0])));

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_2] [i_2] = (max((max((arr_11 [i_0] [i_2]), (max((arr_5 [i_0] [i_3 - 2]), (arr_8 [i_0] [i_3]))))), 65520));
                arr_13 [i_2] [i_0] = (arr_7 [i_0] [i_0] [i_3]);
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_18 = (max(var_18, (26295 & 5228943357930641478)));
            arr_17 [3] = ((~((-5908525435393139470 ? (arr_3 [i_0]) : var_2))));
            var_19 = (((-(((arr_4 [i_0] [i_0] [i_0]) ? 63536 : 16873)))));
            var_20 &= var_11;
            arr_18 [i_0] [15] [i_0] = (min(1, (((arr_1 [i_0]) && (arr_14 [11] [i_0] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_21 = (min(var_21, (arr_11 [i_0] [8])));
            var_22 = (max(1, (((((32767 ? (arr_15 [i_0] [i_5]) : 6778258677444960705))) ? (59 <= 1523874432) : 45220))));
        }
        arr_23 [i_0] = ((((~((-(arr_4 [i_0] [i_0] [i_0])))))) ? -0 : (((((((arr_11 [i_0] [2]) / var_3))) || (((var_7 / (arr_2 [i_0]))))))));
        var_23 = (min(16940340146435983158, (!1)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_24 -= (((max((arr_5 [7] [i_6]), 147)) >= (var_10 / var_14)));
        var_25 = ((-((-(((arr_2 [i_6]) ? 2 : var_0))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_26 = (max(var_26, (((var_15 ? 1 : (((arr_10 [i_7] [17]) * (arr_10 [i_7] [i_7]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_27 = (((max((min(var_6, (arr_1 [i_7]))), (arr_34 [i_10 + 1] [i_11] [i_11] [i_11 + 3]))) ? 34 : 240));
                                arr_40 [i_11] [i_11] [i_10] [i_11] [i_11 + 4] [i_11 + 4] = var_14;
                                arr_41 [i_7] [9] [i_10] [i_10 + 2] [i_11 + 3] = (((arr_14 [i_7] [3] [i_9]) <= 2));
                                var_28 = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
