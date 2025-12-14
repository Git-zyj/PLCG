/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_11 = (arr_2 [i_0] [i_1 + 1] [i_1]);
            arr_5 [i_1] = 9223372036854775804;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_12 = (((arr_0 [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_2])));
            var_13 = (218 || 193);
            arr_9 [i_2] [i_2] = ((0 ? (arr_7 [i_0] [i_2]) : (arr_7 [i_2] [i_0])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] |= (((arr_10 [i_3] [i_3]) * (arr_10 [i_0] [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_21 [14] [i_0] [i_3] [i_4] [10] [1] [16] = (((arr_1 [i_0] [i_0]) != -1));
                            var_14 = (min(var_14, (((-(arr_17 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 2]))))));
                            arr_22 [i_0] [i_0] [i_0] [10] [1] [i_0] = ((!(arr_16 [6] [6] [i_4 - 1] [i_5] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_15 *= var_2;
                            arr_25 [13] [i_3] [1] [i_5] |= (arr_17 [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 2]);
                            var_16 = (((arr_19 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4]) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_0]) : (arr_14 [i_4 - 1] [15] [i_4 - 1])));
                            arr_26 [i_0] [i_0] [i_4 + 1] [i_5] [i_7] [i_5] = var_6;
                            arr_27 [i_5] [i_3] [i_7] [i_5] = ((arr_17 [i_0] [i_4 + 1] [i_4 + 1] [i_7]) || var_6);
                        }
                        var_17 = var_10;
                        var_18 ^= (arr_0 [i_4 - 2]);
                        arr_28 [i_0] [i_3] [i_4] [i_5] = (((arr_4 [i_5]) ? (arr_7 [i_0] [i_4 - 2]) : (arr_4 [i_5])));
                    }
                }
            }
            arr_29 [1] [i_3] = (arr_15 [i_0] [i_3] [i_3]);
        }
        arr_30 [i_0] [i_0] = ((((-9223372036854775807 - 1) % (arr_24 [i_0] [i_0] [22] [i_0] [10] [i_0]))));
        var_19 = (max(var_19, (arr_18 [i_0] [i_0])));
        var_20 = arr_0 [i_0];
    }
    var_21 = (max((min(var_7, var_9)), (min(64, var_6))));
    var_22 = (max(var_5, (((((min(var_6, var_4))) || var_0)))));
    #pragma endscop
}
