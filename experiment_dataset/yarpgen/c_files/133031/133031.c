/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_9, var_4));
    var_11 ^= ((!((((1 ? -1805510457 : var_4)) > ((var_2 ? 28034 : 28034))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (~-28022)));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((((((28020 >= (arr_9 [i_0] [i_1] [i_2] [1]))))) | ((-((31 ? 1 : -3898989002979963556))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [7] [i_1 - 1] [i_1 - 1] [i_5] [3] = ((!(((min(1254495424, 28032))))));
                                arr_20 [i_0] [i_1] [i_4] [i_0] [i_6] = var_7;
                            }
                        }
                    }
                }
                var_13 = (max(var_13, ((((((var_9 ? (arr_15 [i_1] [i_1] [i_1 - 1]) : (arr_15 [i_1] [i_1] [i_1 + 1])))) ? (arr_14 [i_1 + 1] [i_1] [i_1 - 1] [i_0]) : (((arr_13 [i_1 + 1]) / (arr_13 [i_1 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
