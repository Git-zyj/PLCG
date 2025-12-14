/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((((arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]) >= var_9)))) + (arr_2 [i_0 - 2])));
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [14] [14]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 &= (((!7550433905836238905) < ((((((~(arr_10 [i_0] [i_1] [i_1])))) >= (var_6 & 2203963186))))));
                                arr_14 [i_0] [i_2] [i_2] [i_3 - 1] [i_4] = var_9;
                                arr_15 [i_1] |= -var_8;
                            }
                        }
                    }
                }
                var_14 = (min(var_14, var_5));
            }
        }
    }
    var_15 &= var_0;
    #pragma endscop
}
