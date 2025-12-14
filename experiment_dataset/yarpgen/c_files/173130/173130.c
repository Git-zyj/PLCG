/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] = var_1;
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_1] = var_1;
                            }
                        }
                    }
                    var_10 = (max(var_10, (((-var_1 ? (arr_6 [i_0] [i_1] [i_2]) : (((arr_11 [i_0] [10] [i_0] [i_0] [17] [i_0]) ? (((max((arr_13 [i_0] [i_1] [i_1] [i_1] [16] [i_1] [i_1]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max(var_0, var_8)))))))));
                }
            }
        }
    }
    var_11 = -48;
    #pragma endscop
}
