/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [0] [i_3 + 3] [i_3] [i_3] [0] [i_3] = 117;
                                var_20 = (max(var_20, 32754));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((var_4 ? ((18899 - (arr_0 [i_0 + 2]))) : ((var_9 ? var_7 : (arr_0 [i_0 + 2])))));
                }
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
