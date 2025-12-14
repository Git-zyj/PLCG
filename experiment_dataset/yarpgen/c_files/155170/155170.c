/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(var_8, (-32767 - 1))), ((min(var_3, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = max((min((arr_6 [i_0 - 1] [i_1 - 1]), 32758)), var_7);
                    arr_7 [i_0] [i_1] = (arr_5 [i_2] [i_2] [i_0 - 2] [i_1]);
                    arr_8 [i_1 - 1] [i_1] [i_1] [i_0] = min(((((~(arr_6 [i_0] [i_0]))) * (!50867))), 9223372036854775807);
                }
            }
        }
    }
    var_12 = (min(var_12, var_9));
    var_13 = (min(var_9, var_8));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        arr_22 [i_3] [i_4] [i_3] [i_6] = (min((max(0, (min((arr_9 [i_3] [i_3]), (arr_0 [i_4]))))), ((min((arr_10 [i_5 - 1] [i_3 + 1]), (!14655))))));
                        arr_23 [0] [i_6] [i_3] [i_6] = (min(22100, (((var_5 <= 50867) | ((max(var_1, (arr_13 [i_3] [i_3]))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_14 = (arr_11 [i_3] [i_7 - 1]);
                        var_15 -= (!-9223372036854775777);
                        arr_27 [i_7 + 1] [i_5] [i_3] [i_3] [i_4] [i_3 - 2] = (-22090 - var_5);
                        arr_28 [i_3] = (-var_1 | 14672);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_16 += (((~9223372036854775807) ? var_4 : (!-22077)));
                        var_17 = ((~(max((~var_4), ((((arr_3 [i_4] [i_4] [i_3]) ^ (arr_13 [i_3] [i_5]))))))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_18 = min(((max(22100, (arr_4 [i_3 + 1] [i_3 - 2])))), (var_4 | -116));
                            arr_37 [i_3] [i_3] [i_4] [i_5] [i_9] [i_10] = min(((((arr_18 [i_3 + 1] [i_3] [i_3 + 1] [i_5 - 1]) ? (arr_15 [i_3 + 1] [i_5] [i_4] [i_5 + 1]) : (arr_15 [i_3 - 1] [i_4] [i_9] [i_5 - 2])))), 2148867723042432739);
                            arr_38 [i_3] [i_3] = (min(9223372036854775807, 50880));
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_19 = var_9;
                            var_20 -= (-9223372036854775807 - 1);
                            var_21 = (max(var_21, -9192684085375534977));
                        }
                        arr_41 [i_3] [i_3] [i_4] [i_5] [i_3] [i_9] = (+((14655 ? (arr_25 [i_5 - 1] [i_5 - 2] [i_4] [i_3 - 2]) : (arr_1 [i_5 - 2]))));
                        arr_42 [i_3] [i_3] [10] [i_9] |= 2148867723042432739;
                    }
                    var_22 = (min(var_0, 14655));
                }
            }
        }
    }
    #pragma endscop
}
