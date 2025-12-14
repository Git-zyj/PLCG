/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = ((~(~var_8)));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] = ((~((min(81, -62)))));
                                var_11 = ((61 ? (arr_2 [i_0] [i_2]) : var_4));
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] = min(14280, (((!(((18285 ? (arr_8 [i_1] [i_1]) : var_1)))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_12 = (!46);
                        var_13 = (max(var_13, (((-((-62 ? 68 : 127)))))));
                        var_14 = var_7;
                        var_15 = (max(var_15, (((-68 ? (((arr_15 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]) ? (arr_15 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 - 1]) : (arr_15 [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 + 1]))) : (((!(arr_15 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1])))))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_6] &= (max((((!(arr_8 [i_1] [i_6])))), (min(2, 7))));
                        var_16 &= (((arr_2 [i_0] [i_0]) ? (arr_11 [7] [i_6]) : 68));
                        var_17 -= ((69 ? ((-(arr_17 [i_2]))) : var_7));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_18 = (min(var_18, ((min(68, (~var_3))))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_7] [0] [i_8] = (min(96, 108));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_8] &= (~var_5);
                            arr_27 [i_0] [1] [i_2] [i_7] [i_8] [i_0] [i_0] = ((+((max((arr_6 [i_0] [i_0] [i_0]), var_3)))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_19 = (min(var_19, (arr_4 [i_0] [i_1] [i_0])));
                            arr_30 [7] [7] [5] [i_7] [i_9] [9] = (max((((arr_6 [i_0] [2] [i_2]) ? var_4 : var_8)), (((!(arr_6 [3] [i_2] [3]))))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_33 [i_7] [i_7] [i_0] [i_1] [i_0] |= ((!(((-(-127 - 1))))));
                            arr_34 [i_0] [8] [8] [5] [8] = var_4;
                        }
                    }
                    arr_35 [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_2]);
                    var_20 = (max((arr_20 [4] [2] [4] [2] [4] [i_1]), ((-(arr_10 [0] [i_1] [0])))));
                    var_21 = ((((arr_23 [7] [i_0] [i_1] [i_1] [i_1] [1] [7]) ? (arr_14 [i_2] [6] [i_1] [i_0] [i_0]) : 26688)));
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = -18120;
    #pragma endscop
}
