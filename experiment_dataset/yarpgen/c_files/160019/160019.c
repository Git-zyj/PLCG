/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((~(!var_7)))), var_6));
    var_11 *= (min(4, var_2));
    var_12 = (((min(((65520 ? var_6 : 627110389)), (((9223372036854775807 ? 32445 : var_4))))) + ((~(-21816 | var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = ((((((((!(arr_7 [18] [i_0] [i_0] [i_0])))) & (arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [1])))) ^ ((((((!(arr_2 [i_2 - 2]))))) & 1637362543239295448))));
                            var_14 = (((arr_7 [10] [i_1] [i_2 + 1] [i_2 - 2]) & (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 2])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_5 - 2] [i_4] [i_1] [i_1] [i_5] = ((+(((min((arr_1 [i_1]), (arr_4 [i_6]))) + (((var_4 ? -21827 : (arr_17 [i_6] [18] [i_4] [18] [18]))))))));
                                arr_22 [i_0] [i_1] [i_4] [i_5 + 2] [i_5] = (((arr_4 [i_5 - 1]) ? (arr_0 [i_4 + 4]) : ((min((arr_4 [i_5 + 2]), (arr_4 [i_5 + 1]))))));
                                var_15 = ((((max(((min(1, var_1))), var_9))) ? (((arr_13 [i_1] [i_5 + 1] [i_1]) + (arr_12 [i_5 - 3] [i_6] [i_6]))) : (arr_18 [i_6])));
                                var_16 = (((!(arr_14 [i_5 + 2] [i_6] [i_4 + 3] [i_1]))));
                                arr_23 [i_0] [i_5] [7] [7] [i_0] = ((1 & (((!(arr_20 [i_5 - 3] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                arr_30 [i_8] [i_8] = ((!((((arr_12 [i_8] [i_8] [i_7]) ? 1 : (((arr_13 [i_7] [i_8] [i_7]) ^ (arr_11 [i_7] [i_7] [i_8] [i_7]))))))));
                var_17 = ((~(arr_5 [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_36 [i_7 - 2] [i_8] [i_9] = ((1 ? 1 : 0));
                            var_18 -= max((min(327885178, (arr_13 [i_10 + 1] [i_10 + 1] [i_7 - 1]))), ((((arr_4 [i_10 + 1]) ^ (arr_8 [i_7 + 1] [i_10] [i_10 + 1] [i_10 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
