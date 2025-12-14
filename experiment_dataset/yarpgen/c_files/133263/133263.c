/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((min(var_9, ((var_8 ? var_6 : var_9))))) ? (((1 ? 65535 : 0))) : (min(((var_6 ? var_8 : var_9)), ((var_5 ? var_8 : var_1)))))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 4] [19] [i_0] [21] = arr_4 [i_0];
                    var_11 = (arr_3 [i_1]);
                    var_12 = (min(var_12, ((((((max((arr_0 [i_0]), (arr_3 [i_0 - 1])))) ? (arr_6 [1] [i_0] [i_0] [i_0]) : (arr_4 [i_0 - 2])))))));
                }
            }
        }
        var_13 &= ((max((arr_1 [i_0 - 3]), (arr_1 [i_0 + 2]))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    {
                        var_14 = (arr_16 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 - 2]);
                        var_15 = (max(var_15, ((min((min((arr_16 [i_5 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4]), (arr_3 [i_0 - 4]))), (((arr_4 [i_0]) ? ((max(var_8, (arr_3 [i_4 - 1])))) : (((arr_13 [20] [20]) ? var_5 : var_4)))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            {
                var_16 = var_5;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_26 [i_7] [i_9] [i_7] [1] [i_9] [i_7 + 1] = arr_25 [i_9] [i_9] [i_9] [i_6];
                            var_17 = (arr_21 [i_6] [i_7 + 1]);
                            var_18 &= (min((((arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]) ? (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]) : (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]))), (max((arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2]), (arr_23 [i_7 + 1] [i_8 + 1] [i_8 + 3] [i_8 - 2])))));
                            arr_27 [i_6] [i_7] [i_8] [i_9] [i_9] = ((1056964608 ? ((((((arr_20 [i_7]) ? var_8 : var_2))))) : (min((arr_23 [i_8] [i_8 + 1] [i_8] [i_8 + 3]), (min((arr_22 [i_9] [i_8] [i_7] [i_6]), (arr_22 [1] [i_7] [10] [1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
