/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = ((-((-591091228 ? 1 : 37980))));
                            arr_8 [i_0] [i_1] [i_2] [i_1] = (-((-(var_5 < var_6))));
                            var_13 = -var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_5] [i_4] [14] [i_0] [i_0] = ((((max(((var_9 ? 1 : (arr_13 [16] [i_1] [i_1] [21]))), (arr_2 [i_1 + 1])))) ? (max(-var_9, var_6)) : ((max(((1 ? 27556 : var_11)), -1973721919)))));
                            arr_16 [i_0] [i_0] = -43;
                        }
                    }
                }
                var_14 = (min(var_14, ((((((-(min(var_10, var_9))))) && ((max(var_11, -var_8))))))));
            }
        }
    }
    var_15 = (max(((-(var_1 - 1))), -var_11));
    var_16 = ((-((-(19591 >= 1)))));
    #pragma endscop
}
