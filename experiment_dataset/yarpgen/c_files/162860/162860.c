/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((var_4 ^ (arr_2 [i_0 - 1]))));
        var_16 = (max(var_16, ((max((arr_2 [i_0 + 2]), (max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = (((max((((5339 >= (arr_1 [i_0])))), ((var_9 ? -20162 : 495636021)))) % (min((max((arr_11 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2]), 105)), ((max(var_4, 1)))))));
                                var_17 += (max(-71, (max(15069700315464653323, (min(3377043758244898297, (arr_6 [i_1] [i_3] [i_4])))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_0] = var_6;
                            }
                        }
                    }
                    var_18 = ((-(arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])));
                    var_19 = (arr_1 [i_1]);
                    var_20 = (max((((arr_6 [i_0 + 2] [i_0] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 + 1]))), (arr_6 [i_0] [i_1] [i_2])));
                    var_21 = 116;
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((~(arr_12 [i_0] [1] [i_0] [i_0])))) ? 93 : var_4));
        arr_16 [i_0] [i_0] = 495636021;
    }
    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        var_22 -= (((max(216, 1))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_23 = ((arr_11 [i_5] [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 - 4] [i_7 - 1] [i_7 + 2]) <= ((min(1, (-32767 - 1)))));
                        var_24 = ((!((min(14112, 1)))));
                    }
                }
            }
        }
        arr_27 [i_5] = (arr_5 [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
