/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = ((((-(arr_12 [i_0] [3] [i_4] [i_0] [0]))) + ((18534 ? 0 : (arr_12 [i_0] [i_1] [i_4] [i_3 - 1] [i_4])))));
                                var_11 = ((-((-(arr_3 [i_2 + 3] [i_2 + 1] [i_3 + 1])))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [6] &= ((~(min(9277670766001176589, var_1))));
            }
        }
    }
    var_12 = (max(var_9, (9277670766001176586 - 1)));
    #pragma endscop
}
