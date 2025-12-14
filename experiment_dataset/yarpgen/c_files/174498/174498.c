/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] = arr_8 [i_0] [i_1] [i_2];
                            arr_13 [i_0] [i_2] [i_3 - 1] = arr_6 [i_1] [i_0];
                            var_13 = (min(var_13, (((max(((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_3 [i_3] [i_3])))), (min((arr_6 [i_0] [i_0]), (arr_1 [i_0] [i_2]))))) & (arr_3 [i_0] [i_1])))));
                            var_14 = (max(((max((arr_4 [i_0]), 1593669817))), (((min((arr_2 [i_3 + 1]), (arr_7 [i_1] [i_3]))) | ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]) / (arr_11 [i_0] [i_1] [i_2] [i_3 + 2]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
