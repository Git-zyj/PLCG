/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min(((15 ? 2578118296 : 1716849006)), (2578118296 | 1716849000)));
                                var_19 = ((5188934250734562197 != ((min(2578118296, 1)))));
                                arr_15 [i_0] [i_2] [i_0] [i_2] [i_0] |= ((~((-((var_4 ? var_15 : (arr_9 [i_4] [i_1] [i_2] [i_3])))))));
                                var_20 *= ((((min(var_4, var_4))) || (min((2578118296 || 65519), ((!(arr_10 [i_0] [i_1] [11] [i_3] [i_3])))))));
                                var_21 = var_17;
                            }
                        }
                    }
                }
                var_22 = (max(var_22, var_7));
                arr_16 [i_0] [i_1] = ((((((arr_8 [i_0] [i_1] [i_1] [i_1]) + (arr_8 [i_0] [i_0] [i_1] [i_1])))) && (arr_8 [i_1 + 1] [i_1 - 1] [i_0] [12])));
                var_23 = (max(var_23, ((((0 / 115) * var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_24 = ((arr_13 [i_5] [i_6] [i_6] [i_6] [i_5] [i_5] [i_5]) ? (((-(arr_3 [9] [i_6])))) : (((~var_8) ? (((((arr_2 [i_5]) && (arr_9 [i_6] [i_6] [i_5] [i_5]))))) : (max(var_12, (arr_8 [16] [i_6] [1] [i_6]))))));
                arr_23 [i_5] [i_5] [i_5] = var_14;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            arr_28 [i_5] [i_8] [i_8] [i_8] [i_8 + 1] = ((-((var_13 / (((var_9 ? (arr_24 [i_6] [i_7] [i_8]) : (arr_10 [1] [i_6] [i_6] [1] [i_5]))))))));
                            var_25 = (min((arr_10 [i_8] [8] [i_7] [i_8] [i_8]), (max((arr_12 [i_8] [i_6] [i_7] [i_5] [i_5] [i_8 - 1] [i_8]), (arr_10 [i_5] [i_5] [i_5] [i_8] [i_5])))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (!var_2);
    var_27 = var_2;
    #pragma endscop
}
