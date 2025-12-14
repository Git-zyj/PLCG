/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = max(((29 * (arr_6 [i_1]))), ((max((arr_6 [i_1]), (arr_6 [i_1])))));
                                var_18 *= var_13;
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((29 ? 213 : (((!(((var_17 ? 40 : 109)))))))))));
                arr_14 [i_1] [13] [i_1] = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(var_7, ((~(arr_5 [i_7 + 1] [i_7 - 3] [i_7 - 4]))))))));
                                var_21 = (max((((var_11 + 2147483647) >> (1411024815 - 1411024796))), (max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_22 = (((17 << (189 - 174))));
                                arr_34 [i_5] [i_5] [3] [9] [i_7] [i_10] [i_11] = (((arr_22 [i_7 - 2] [i_7] [i_7] [i_5]) ? (((arr_5 [i_10 + 2] [i_11 + 3] [i_11]) / (arr_5 [i_10 + 1] [i_11 + 2] [i_11]))) : (arr_20 [i_10 + 1] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= (((((var_14 == (var_7 | var_12))))) < ((var_1 ? (max(var_6, 41546)) : var_13)));
    var_24 = ((var_0 * (var_8 - var_7)));
    #pragma endscop
}
