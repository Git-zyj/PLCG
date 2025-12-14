/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_3] = (arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4]);
                                var_18 = ((~((~(arr_3 [i_1] [i_2 + 1] [i_4])))));
                                var_19 = (arr_4 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 |= (((((((!(arr_8 [i_1] [i_2 + 1] [i_1] [i_0]))) ? (((arr_10 [i_1] [i_5]) ? (arr_11 [i_1] [i_1] [i_5] [i_6]) : (arr_11 [i_6] [i_1] [i_1] [i_0]))) : (arr_11 [i_0 + 3] [i_1] [i_2] [i_5])))) ? (arr_15 [i_0] [i_0] [i_2 + 1] [i_6] [i_1]) : ((var_16 ? var_3 : (((!(arr_6 [i_1] [i_2 + 1] [i_5]))))))));
                                var_21 *= ((!((!((((arr_1 [i_1] [11]) ? (arr_7 [i_0 + 4] [i_2 + 1] [i_1]) : (arr_4 [i_1]))))))));
                                arr_19 [i_0] [i_5] [i_2] [i_2] [1] = (arr_11 [i_0] [i_0] [1] [i_5]);
                                var_22 &= ((!(((var_4 ? (arr_11 [i_1] [i_5 - 1] [i_6] [i_6]) : (arr_9 [i_0 + 1] [i_1] [i_5 - 2] [i_6] [i_6] [i_6]))))));
                            }
                        }
                    }
                    arr_20 [i_0 + 2] [i_1] [i_2 + 1] = (min((arr_4 [i_0 + 3]), (arr_4 [i_0 - 1])));
                }
            }
        }
    }
    var_23 = var_5;

    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_24 = var_14;
        var_25 ^= ((~(((!(arr_22 [i_7 - 1]))))));
    }
    var_26 = ((var_0 ? var_0 : (((((var_16 ? var_14 : var_0))) ? var_14 : var_10))));
    #pragma endscop
}
