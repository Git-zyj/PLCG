/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_8 ^ var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_12 ^= (-((-301580552 ? var_0 : 17961359618794804978)));
                            var_13 -= var_3;
                        }
                    }
                }
                var_14 = -1411928212;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_1] [i_5] [i_4] [i_1] [i_0] = (((arr_2 [i_6]) ? ((((((arr_1 [i_0] [i_5]) ? var_1 : (arr_8 [i_1] [i_4] [i_5] [i_6])))) ? ((((arr_14 [i_5] [i_1] [i_1] [i_0]) ? (arr_13 [i_4]) : 12))) : (arr_10 [i_6] [i_0]))) : ((((arr_12 [i_1 - 1] [i_4] [i_5] [i_1]) / (arr_1 [i_1] [i_1]))))));
                                var_15 = max((((arr_14 [i_1] [i_1] [i_1] [i_5]) ? (max(var_4, (arr_8 [i_5] [i_1] [i_4] [i_6]))) : (arr_15 [i_0] [i_1] [i_1 - 1] [i_5] [i_6] [i_0]))), (arr_0 [i_0]));
                                arr_19 [i_1] = var_3;
                                var_16 = ((((13666860638953861635 ? 17961359618794804978 : (arr_13 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
