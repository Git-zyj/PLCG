/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 *= (((arr_1 [2]) ? 1 : ((1 ? ((1 ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0]))) : ((1 ? 1 : 106))))));
                arr_6 [i_1] [i_0] = (arr_0 [i_0]);
                arr_7 [i_0] [i_0] = (arr_5 [1]);
                var_13 = (arr_0 [i_0]);
            }
        }
    }
    var_14 = (((((var_7 ? var_1 : ((82 ? 27110 : -1))))) ? (((((var_7 ? var_6 : var_2))) ? var_5 : ((var_8 ? var_0 : var_5)))) : (((((var_9 ? var_6 : var_3))) ? var_3 : (((var_3 ? var_1 : var_4)))))));
    var_15 &= ((((((((var_2 ? var_4 : var_6))) ? ((var_11 ? var_2 : var_3)) : var_8))) ? ((var_7 ? var_6 : (((var_7 ? var_8 : var_1))))) : ((var_6 ? var_1 : var_6))));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_16 ^= arr_11 [i_2] [i_2] [i_2];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_3] [i_2] [i_4] [i_3] = (((arr_8 [i_3]) ? ((((((arr_11 [i_2] [i_2 + 2] [i_2]) ? (arr_14 [i_2]) : (arr_14 [i_3])))) ? (((arr_9 [i_2] [i_2]) ? (arr_15 [i_2] [i_3] [i_4] [i_5 - 1]) : (arr_13 [i_2] [i_2] [i_2]))) : (((arr_14 [i_2]) ? (arr_9 [i_2] [i_2 - 1]) : (arr_15 [i_2] [i_3] [i_2] [i_2]))))) : ((4840 ? 106 : -107))));
                            arr_17 [i_2 - 1] [i_3] [i_2 - 4] [i_2 - 4] = arr_9 [i_4] [i_5];
                            var_17 = (((arr_15 [i_2] [i_3] [i_4] [i_5]) ? (arr_15 [i_3] [i_4] [i_3] [20]) : (arr_9 [i_4] [i_4])));
                            arr_18 [i_2] [9] [i_3] [i_5] = (((((1 ? 375756412017859077 : 4294967295))) ? (((((((arr_12 [i_3] [3] [i_4]) ? (arr_11 [i_2] [i_4] [i_5]) : (arr_8 [i_5 - 1])))) ? (((arr_14 [i_5]) ? (arr_9 [i_3] [i_3]) : (arr_15 [i_3] [i_3 - 1] [i_3] [11]))) : (arr_10 [i_2] [i_3] [i_3])))) : ((((((arr_11 [15] [i_2 - 1] [i_2 - 1]) ? (arr_15 [i_5 + 1] [i_4] [i_3 + 1] [i_2]) : (arr_8 [i_5])))) ? (((arr_10 [i_2] [1] [i_5 - 1]) ? (arr_8 [1]) : (arr_13 [i_2] [i_2 - 3] [i_2 - 4]))) : (((arr_10 [i_2 - 4] [i_3] [i_2 - 3]) ? (arr_8 [i_4]) : (arr_10 [8] [i_3 - 2] [8])))))));
                        }
                    }
                }
                arr_19 [i_3] = ((((((arr_8 [i_3]) ? (((arr_13 [i_2] [i_2] [i_2]) ? (arr_13 [i_2] [10] [i_2]) : (arr_9 [i_2] [i_2]))) : (((arr_10 [i_2 - 3] [i_2 - 4] [i_2 - 4]) ? (arr_10 [i_3 + 1] [i_3 - 3] [i_2]) : (arr_14 [i_3])))))) ? (arr_13 [i_2] [i_2] [i_2]) : (((arr_11 [7] [7] [i_3]) ? (arr_10 [i_3] [i_3] [i_2]) : (((arr_9 [i_3 + 1] [i_2]) ? (arr_12 [i_3] [i_2 - 3] [i_2 - 3]) : (arr_13 [i_2] [i_2] [i_2])))))));
                var_18 = (min(var_18, (arr_14 [17])));
            }
        }
    }
    #pragma endscop
}
