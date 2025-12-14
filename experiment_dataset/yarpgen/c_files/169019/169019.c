/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] = ((((((arr_4 [i_0] [i_0]) ? 3324875047 : var_1))) > ((var_8 ? -3851036164024186602 : -1647161685))));
                        var_14 = arr_4 [i_2 + 1] [i_0];
                        var_15 = (((arr_0 [i_0]) ^ (~var_2)));
                        var_16 = ((-(((arr_0 [i_0]) / (arr_9 [i_3] [i_2 - 1] [i_1] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_0] [11] [i_1] = (((((var_5 ? (arr_3 [i_0] [i_0] [i_0 + 3]) : var_10))) ? ((((var_5 % (arr_8 [13] [i_1] [i_0] [i_4]))))) : ((((~(arr_6 [i_1] [2]))) * ((((arr_12 [i_0]) > (arr_9 [i_0] [i_1] [i_2] [i_4]))))))));
                        arr_14 [i_0] [i_0] [i_2] [i_4] [i_1] [i_0] = ((((min(var_6, (!var_12)))) ? (3851036164024186579 && 9223372036854775807) : (((var_5 ^ var_0) ^ (~var_9)))));
                        var_17 = (min(((var_3 ? (arr_1 [i_0 - 1] [i_2 + 1]) : (arr_1 [i_0 + 1] [i_2 + 1]))), ((((var_1 ? var_4 : var_7))))));
                        var_18 = var_8;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [8] [i_2] [i_2 + 1] [i_5 + 2]);
                        var_19 = var_3;
                    }
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_2 + 1] = ((var_10 >> ((((((arr_2 [i_0] [i_1]) < var_8)) || (var_6 <= var_7))))));
                        var_20 = (((var_9 ^ var_4) + (((arr_18 [i_1] [6] [i_6]) ? var_11 : (((arr_0 [i_0]) ? var_9 : var_2))))));
                        var_21 = (((!(arr_4 [i_2] [i_0]))) ? var_12 : var_7);
                    }
                    var_22 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
