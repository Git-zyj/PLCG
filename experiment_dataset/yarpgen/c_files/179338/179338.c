/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max((!var_9), ((224 * (arr_5 [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = 115;
                                var_18 = 5073;
                                var_19 = (min(var_19, (min((((!(arr_15 [i_3] [i_1])))), (((arr_7 [i_2 + 1]) ? (arr_7 [i_2 - 2]) : var_1))))));
                                var_20 -= ((~(arr_13 [i_4] [i_2] [i_2] [i_3])));
                            }
                        }
                    }
                }
                var_21 = ((((((arr_12 [i_0] [i_1 + 3] [i_1] [i_0]) ? (arr_12 [10] [i_1 + 3] [i_0] [i_0]) : (arr_12 [i_0] [i_1 - 1] [i_0] [i_0])))) && (!5063)));
                var_22 = (min(var_22, (arr_15 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
