/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = var_12;
                    arr_9 [i_0] [i_1] [i_2] [16] = var_11;
                    var_16 = 1164;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [16] [16] [i_1] [i_1] [i_1] [16] [20] = ((-(arr_3 [i_4 + 1] [i_0 - 1] [i_0 - 1])));
                                var_17 = (((!(arr_2 [i_0 + 3]))) ? 1 : (arr_13 [i_1] [i_4 - 2]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
