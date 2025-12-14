/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 -= 28;
                    arr_7 [i_0] = (!var_3);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_17 = (min(var_9, (((arr_2 [i_4]) ? (arr_2 [i_4]) : (arr_2 [i_4])))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_18 = arr_11 [i_3 - 1] [i_3 - 1];
                        var_19 = var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_5 + 3] [i_7 - 2] [i_5 + 3] [i_4] = ((((4294967295 ? (min(-28, (arr_13 [i_3] [i_4] [i_5 + 2] [i_5 + 2]))) : (-28 * var_2))) > var_0));
                                var_20 ^= (min(-74, (((((arr_18 [i_3] [i_4] [i_5 - 1] [i_4] [i_4]) ? 1 : (arr_12 [i_7 + 1]))) & ((max((arr_13 [i_8] [i_4] [i_8] [i_8]), 74)))))));
                                var_21 = ((((((var_14 ? var_7 : var_0)) & (((arr_6 [i_3 - 1] [i_3 + 1]) ? (arr_4 [i_8] [i_3 - 1] [i_3 - 1]) : var_6))))) ? (((((var_0 ? var_10 : (arr_0 [i_7 - 2] [i_8])))) ? ((2997633208 + (arr_15 [i_3 - 1] [i_4] [i_4]))) : (arr_16 [i_4] [i_4] [i_4] [i_7 - 2] [i_7 + 1] [i_8]))) : -89);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= (!((((((28 << (5436 - 5436)))) ? ((((-2147483647 - 1) <= var_12))) : var_10))));
    var_23 = (max(var_23, var_13));
    #pragma endscop
}
