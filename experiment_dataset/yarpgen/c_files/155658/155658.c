/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((91 ? 9711748788682245142 : -111));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((((arr_4 [i_0 + 1]) ? (((arr_13 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3]) | (arr_8 [i_0] [i_0] [i_0 + 2]))) : (arr_14 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))) & (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 &= ((((((arr_12 [i_0 - 2] [i_1 + 1]) - (arr_12 [i_0 + 2] [i_1 - 1])))) ? (110 && 126) : (arr_12 [i_0 - 1] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (-7289393433753634226 == 102)));
    #pragma endscop
}
