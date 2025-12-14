/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_13 * var_4) >= var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = var_6;
                            arr_11 [10] [i_2] [i_2] [i_3] |= (arr_0 [i_1] [i_1]);
                            arr_12 [i_0] [i_2] [i_1] [i_0] = min(2147483647, (((arr_2 [0]) ? var_5 : -112)));
                            arr_13 [i_0] = (((((arr_7 [i_0] [i_1] [i_2]) == (((arr_0 [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [i_3] [9] [i_1]) : (arr_1 [i_0] [i_0]))))) ? var_2 : (((var_3 | (var_10 != var_1))))));
                            arr_14 [i_0] [i_2] = (((arr_9 [i_0] [i_1] [2] [i_2] [i_3]) <= ((((var_14 == (arr_5 [4]))) ? (!var_2) : 12222))));
                        }
                    }
                }
                arr_15 [i_0] [i_0] [4] = arr_6 [i_1] [i_0] [i_0];
                arr_16 [i_0] [i_0] = (arr_7 [i_0] [5] [i_0]);
                var_19 = (((arr_0 [i_0] [i_1]) / (arr_2 [i_0])));
            }
        }
    }

    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_20 = ((((((var_10 ? (arr_20 [i_5]) : (arr_19 [i_4 - 1]))) * (((arr_18 [5]) + (arr_24 [i_5] [i_4])))))) ? var_6 : (arr_22 [14] [i_5] [i_6]));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((arr_28 [i_8] [i_7]) ? (3 || 12222) : (arr_28 [i_8] [i_7]))))));
                                var_22 = (((((arr_28 [i_5] [16]) - ((var_4 ? (arr_24 [i_5] [16]) : (arr_19 [i_4])))))) ? var_14 : (max(var_0, (arr_20 [i_5]))));
                                var_23 += arr_27 [i_4] [i_8];
                            }
                        }
                    }
                    arr_29 [23] [i_5] [i_6] = (arr_25 [10]);
                }
            }
        }
        var_24 &= (arr_21 [i_4] [i_4 - 1]);
        var_25 = var_11;
        arr_30 [i_4] = var_10;
    }
    var_26 = var_17;
    var_27 = (var_12 ^ var_12);
    #pragma endscop
}
