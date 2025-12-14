/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2 - 1] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((((((arr_7 [i_0] [i_1 + 1] [i_2] [i_3]) ? (arr_4 [i_0] [i_2] [i_3] [i_4]) : (arr_0 [i_0] [i_1])))) ? (arr_9 [i_0] [i_2 + 1] [i_2 - 1] [i_1]) : (((arr_7 [i_0] [i_2 + 1] [i_3] [i_4 + 1]) ? (arr_8 [i_0] [i_1 - 1] [i_2 - 1] [i_2]) : (arr_3 [i_0] [i_2 - 1] [i_4 + 2])))));
                                var_19 = ((((((arr_10 [i_0] [i_1] [i_2 + 1] [i_3] [i_4]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_1 + 1] [i_2 - 1] [i_2])))) ? (((arr_2 [i_1 + 2] [i_2 - 1] [i_4]) ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4 + 2]) : (arr_7 [i_0] [i_1 - 2] [i_2] [i_1 - 2]))) : (((arr_0 [i_0] [i_0]) ? (arr_10 [i_0] [i_1 + 3] [i_2 - 1] [i_3] [i_4]) : (arr_11 [i_4 - 2] [i_3] [i_3] [i_2] [i_1] [i_0])))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_2 - 1] = ((((((arr_2 [i_1 - 2] [i_1 + 3] [i_1 + 1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_3 [i_0] [i_1 + 3] [i_2]) ? (arr_9 [i_0] [i_1 + 1] [i_2] [i_2 + 1]) : (arr_11 [i_2] [i_2 + 1] [i_2] [i_1 + 2] [i_0] [i_0])))) : (((arr_5 [i_0] [i_1 - 1] [i_2 + 1]) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_2]) : (arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_2] [i_2])))));
                }
            }
        }
        var_20 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_21 = ((((((((var_1 ? var_6 : var_9))) ? ((var_4 ? var_6 : var_1)) : (((var_13 ? var_0 : var_8)))))) ? var_4 : var_14));
    var_22 = ((((((((var_3 ? var_10 : var_14))) ? ((var_10 ? var_3 : var_13)) : var_5))) ? var_1 : ((((((var_14 ? var_4 : var_3))) ? ((var_15 ? var_0 : var_8)) : var_16)))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            {
                var_23 = (((arr_11 [i_6] [i_6 + 1] [i_5] [i_5 + 1] [i_5 + 2] [i_5]) ? ((((((arr_13 [i_5] [i_6]) ? (arr_4 [i_6] [i_6] [i_6 + 1] [i_5]) : (arr_7 [i_5] [i_5] [i_6] [i_6])))) ? (((arr_5 [i_5] [i_5] [i_6]) ? (arr_2 [i_5 - 1] [i_5 - 1] [i_6 - 1]) : (arr_11 [i_6] [i_6 - 2] [i_6] [i_6] [i_5 + 2] [i_5]))) : (((arr_2 [i_5 - 1] [i_5 + 2] [i_5]) ? (arr_10 [i_6 + 1] [i_6] [i_5] [i_6] [i_6]) : (arr_16 [i_5] [i_5] [i_5 + 2]))))) : (((((((arr_15 [i_5 + 2] [i_6]) ? (arr_11 [i_5] [i_5 - 1] [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 2]) : (arr_8 [i_5] [i_5] [i_5 + 2] [i_6])))) ? (((arr_0 [i_5] [i_6 - 2]) ? (arr_3 [i_5 + 1] [i_6 - 2] [i_6 + 1]) : (arr_0 [i_5 + 1] [i_6 + 1]))) : (arr_11 [i_6] [i_6] [i_6] [i_5 - 1] [i_5] [i_5 + 1]))))));
                var_24 = (((((arr_3 [i_5 + 1] [i_6 + 1] [i_6]) ? (((arr_7 [i_5] [i_5 + 2] [i_5 - 1] [i_5 - 1]) ? (arr_3 [i_6] [i_6] [i_6 + 1]) : (arr_3 [i_5 + 2] [i_6 - 1] [i_6]))) : (((arr_16 [i_5] [i_6 + 1] [i_6]) ? (arr_0 [i_6] [i_5]) : (arr_4 [i_6 + 1] [i_6] [i_5] [i_6])))))) ? (arr_11 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 2]) : (((arr_2 [i_6] [i_6] [i_6 - 1]) ? (((arr_9 [i_5 - 1] [i_5] [i_5 - 1] [i_5]) ? (arr_1 [i_6 + 1]) : (arr_13 [i_6 - 2] [i_5]))) : (arr_3 [i_6] [i_5] [i_5]))));
                var_25 |= (arr_1 [i_6 - 1]);
            }
        }
    }
    var_26 = ((((((((var_2 ? var_8 : var_6))) ? var_3 : ((var_14 ? var_14 : var_13))))) ? ((43317 ? 0 : 1674639158206332473)) : ((((((var_6 ? var_10 : var_5))) ? ((var_12 ? var_0 : var_11)) : var_6)))));
    #pragma endscop
}
