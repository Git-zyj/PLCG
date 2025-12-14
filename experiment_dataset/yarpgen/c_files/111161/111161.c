/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 ^= (((((((var_3 ? (arr_2 [i_0] [8] [i_0]) : var_3)) + (arr_0 [i_0])))) ? ((min((arr_1 [i_1 + 2] [i_1 - 1]), (arr_0 [i_1])))) : var_4));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (max(var_14, (arr_1 [i_0] [i_1])));
                    arr_8 [i_1] [10] [i_1] [5] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (-(((arr_5 [i_0] [i_1 + 2] [i_1] [i_3 - 1]) - (arr_6 [9] [i_1 + 2] [i_1 + 2] [i_3 - 1]))));
                                arr_15 [i_0] [i_0] [10] [i_1] [i_0] [i_0] = (((((var_11 ? (((var_10 ? var_11 : var_1))) : 8029078365241519033))) ? (min(((var_8 ? var_1 : var_7)), var_3)) : ((min(15173, 65504)))));
                                arr_16 [i_0] [i_1] [i_4] = var_2;
                            }
                        }
                    }
                    arr_17 [i_1] [i_1 - 1] [i_1] = var_8;
                    var_16 += (arr_3 [i_0]);
                }
                arr_18 [i_1] [i_1 + 1] = -8029078365241519039;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_17 = (max(var_17, (((30002 ? 1073741824 : 37519)))));
                arr_25 [17] [i_6] [i_6] = var_8;
                arr_26 [i_5] [i_6] = (arr_22 [21] [i_6]);
                arr_27 [i_6] [i_6] = (arr_23 [i_5] [i_6]);
                arr_28 [i_6] [i_5] [i_6] = (((arr_19 [i_5]) ? (((arr_24 [i_6]) ? (arr_24 [i_6]) : 1)) : 1));
            }
        }
    }
    var_18 = (max(var_18, var_4));
    #pragma endscop
}
