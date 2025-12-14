/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((480 ? (max(((28820 ? 3 : -105)), var_7)) : 198)))));
                arr_8 [15] |= ((((arr_2 [i_0 + 1]) || (arr_6 [i_0 - 3] [i_1]))));
                arr_9 [i_0 - 3] [i_1] = (((((var_7 ? 96 : (arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 1])))) ? ((var_9 ? (arr_7 [9] [i_0 - 2] [i_0 + 1]) : (arr_7 [i_0 - 3] [i_0 + 1] [i_0 - 2]))) : (((arr_7 [i_0] [i_0 - 3] [i_0 - 2]) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_0] [i_0 + 1] [i_0 - 2])))));
                var_11 = (!-var_7);
                arr_10 [i_1] [i_0 - 2] = ((39252 ? 65535 : (((var_1 ? var_0 : var_9)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_13 [8] [2] |= ((~(arr_12 [i_2] [18])));
        var_12 = (max(var_12, ((((arr_11 [14] [14]) ? var_4 : (arr_11 [i_2] [2]))))));
        var_13 = (((arr_12 [i_2] [i_2]) ? 12323 : (arr_12 [i_2] [i_2])));
    }
    var_14 |= var_1;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                arr_20 [i_4] [i_4] = (arr_18 [i_4] [i_3 - 1] [i_4]);
                arr_21 [i_4] [i_4 - 2] [8] = ((((((65530 ? -447138359 : (arr_16 [i_3] [i_4])))) ? 65513 : (arr_16 [i_3] [i_3 + 1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    arr_31 [i_5] [i_5] [i_5] = (min(((min(var_2, (arr_18 [i_5 - 3] [i_6 + 1] [i_5])))), (max((arr_11 [i_5 - 1] [i_5]), (arr_18 [i_5 - 3] [i_6 - 2] [i_5])))));
                    arr_32 [i_5] [i_6] [i_5] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
