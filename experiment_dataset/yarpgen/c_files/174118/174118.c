/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = 17655400356861596988;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                arr_18 [i_0] [0] [i_0] [i_1 - 4] [i_2] [i_3 - 2] [i_4 - 1] = ((arr_8 [i_3] [i_4]) ? (arr_9 [i_1 - 4] [i_3 + 1] [i_4 + 1] [6]) : (2147483647 | 7939103236693365109));
                                arr_19 [i_4] [i_0] [i_0] [i_0] = (-32767 - 1);
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_4 - 1]);
                                arr_21 [i_0] [i_0] = (arr_13 [i_0] [i_1]);
                                var_19 = (max(var_19, 1546432178));
                            }
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_0] = 734471908;
                            arr_23 [i_0] = ((-9261 >= (!0)));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
