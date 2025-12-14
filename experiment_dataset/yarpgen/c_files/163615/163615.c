/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((~((-((var_8 ? (arr_6 [i_0] [i_0 + 1] [i_0] [i_0]) : 210))))));
                            arr_10 [i_2] [i_1] [i_0] = -var_11;
                        }
                    }
                }
                arr_11 [4] &= (arr_9 [i_0] [4] [i_0 - 2] [i_0]);
                arr_12 [i_1] [i_1] [i_0] = var_7;
            }
        }
    }
    var_16 &= var_1;
    var_17 = var_1;
    var_18 = ((max(var_11, -var_9)));
    var_19 = var_9;
    #pragma endscop
}
