/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((max(235, 246))) ? (var_6 / var_5) : (max((4 / var_11), (var_2 * 6)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [10] [10] = (((arr_5 [i_4] [i_3 + 1] [i_0 + 3]) ? (arr_15 [i_1] [i_1] [i_3 + 2] [i_4] [i_1]) : (arr_15 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_4])));
                                arr_18 [0] = (max(-255, (arr_10 [i_0] [14] [i_3 + 2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 |= ((!(~1)));
    #pragma endscop
}
