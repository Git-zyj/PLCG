/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (((((((min(var_4, var_6))) ? var_2 : var_8))) ? var_5 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (var_9 == var_6);
                var_13 = (min(var_13, ((((arr_0 [i_0]) ? (((var_7 ? var_7 : (arr_2 [i_0])))) : ((var_2 ? (((arr_4 [i_0] [6]) + var_0)) : 67076096)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] = ((((var_5 ? var_0 : (arr_7 [3] [3])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3 + 3] [i_5] [i_5] = var_4;
                                arr_19 [i_2] [i_3] [i_3] [i_5] [i_6] [i_5 + 1] [i_5 - 1] = ((((~(arr_15 [i_5] [i_5] [i_5 + 1] [i_3 + 3] [i_5]))) / (((~(-2147483647 - 1))))));
                                arr_20 [1] [i_5] [i_4] = ((+((var_1 ? (arr_9 [i_5 - 1] [i_5 + 1]) : (arr_13 [i_3 + 3] [i_3 - 1])))));
                            }
                        }
                    }
                    var_14 = (max(var_14, (((-(((-981885487 / 2147483647) + var_8)))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_15 = 167;
        var_16 = (max((min((arr_15 [22] [8] [8] [22] [i_7]), (arr_4 [14] [14]))), ((max(((2147483647 << (((arr_15 [20] [20] [i_7] [20] [20]) - 2189684265762374177)))), (arr_17 [i_7] [i_7] [i_7] [i_7] [1] [i_7]))))));
        arr_23 [i_7] = (arr_12 [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
