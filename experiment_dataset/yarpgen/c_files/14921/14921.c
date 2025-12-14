/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;
    var_15 = ((-(max(21716, (min(var_2, var_4))))));
    var_16 = (((min(((0 ? var_3 : -9051977839832212429)), var_3)) - var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = var_3;
                                var_17 = ((((var_4 ? (((max(var_0, (arr_3 [i_0]))))) : (max(-9051977839832212431, var_13)))) + (((max((arr_9 [i_2 + 4]), (arr_9 [i_2 - 3])))))));
                                var_18 = ((max(-9051977839832212429, var_5)));
                            }
                        }
                    }
                    var_19 = min(var_8, (var_11 | -9051977839832212418));
                }
            }
        }
    }
    #pragma endscop
}
