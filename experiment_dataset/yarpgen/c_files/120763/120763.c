/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 = ((-(arr_3 [i_1])));
                            var_13 = (max(var_13, ((min(((min(1, (((arr_6 [i_0] [i_0]) > (arr_0 [i_1])))))), ((13299 ? 143 : 13311)))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = var_5;
                            arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1] = (((((((arr_10 [i_0] [i_1] [i_2] [i_1]) || (arr_10 [i_0] [i_1] [i_2] [i_3]))) ? ((((!(arr_8 [i_0] [i_1] [i_3]))))) : var_1))) ? (((~(min(var_11, var_9))))) : (arr_4 [i_1 - 2] [i_1 + 2]));
                        }
                    }
                }
                var_14 = (arr_8 [i_0] [i_1 - 3] [i_1]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_1] [i_1] [i_4 - 1] [i_4] = (min(((min(var_7, (var_9 / var_0)))), var_7));
                            arr_20 [i_5] [0] [0] [i_0] &= var_7;
                            var_15 = var_9;
                            var_16 = ((((!(arr_1 [i_4 + 1] [i_1 - 3]))) ? ((((!(!13299))))) : var_4));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_17 |= ((-(((!(arr_28 [i_9] [i_8 + 1] [i_7 - 1]))))));
                            var_18 = var_6;
                            var_19 ^= ((~(min(((max(var_8, (arr_28 [i_6] [i_6] [i_6])))), 9813902368385423957))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 4; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_20 = arr_36 [i_6] [i_6] [i_6] [i_11 - 1] [i_12];
                                arr_40 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] = (arr_15 [i_10 - 3] [i_10 - 3] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, var_4));
    #pragma endscop
}
