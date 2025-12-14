/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_4 ? -66 : 216));
    var_15 = ((-116 ? var_6 : (!var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(((42 ? 4049153726 : 2269102635)), 127));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [9] [i_0] [i_0] = (((((!((min(var_9, (arr_1 [i_2] [i_4]))))))) > ((var_13 ? (arr_11 [i_1 - 1] [i_4 - 2] [i_2] [i_3 + 2] [i_1]) : (arr_4 [i_1])))));
                                var_17 = ((((arr_3 [i_1] [i_3 + 2]) ? (arr_3 [i_1] [i_3 + 2]) : (arr_3 [i_1] [i_3 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
