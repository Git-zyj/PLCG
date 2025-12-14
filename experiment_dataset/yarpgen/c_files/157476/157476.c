/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((var_12 << (-var_7 + 17431)))) ? (((!(((var_1 ? 0 : -897708800)))))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((-(max((arr_0 [i_0] [i_1]), 2820312921161171889))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [4] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0]);
                                var_14 = (((arr_11 [8] [i_1] [i_2] [i_3] [i_4]) ? ((((((arr_1 [i_0] [i_0]) ? -897708800 : 14101115570787158751))) ? (arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 2]) : (arr_1 [i_0] [i_0]))) : var_0));
                                arr_14 [i_4] [0] [i_4] [0] [5] = (((((min(14101115570787158755, (arr_0 [i_1] [i_1]))))) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [1]) : (((!(~15501305412378501240))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = 6713;
            }
        }
    }
    #pragma endscop
}
