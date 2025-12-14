/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106780
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
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = (min(196, (arr_0 [i_0] [i_0])));
                    arr_10 [i_2] [15] [12] = (min(-28318, ((var_11 ? (((max(-1, (arr_3 [i_0]))))) : (arr_4 [i_2 - 2] [i_2 + 2] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_18 [0] [0] [i_4] [i_4] [i_4] = (max(28317, (((arr_5 [i_2 + 1]) / (arr_0 [i_2 + 1] [i_2 - 1])))));
                                arr_19 [i_0] [21] [21] [i_3] [i_4] = ((((min((arr_3 [0]), (arr_12 [4] [i_3] [i_0] [i_0])))) <= -var_17));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= ((max(var_13, (var_17 / -28318))));
    #pragma endscop
}
