/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(var_1, ((((387669311 ? -1736365364 : var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [16] [i_3] [i_3] [6] [14] |= 6341;
                                arr_16 [i_1] = (arr_10 [i_4] [i_1] [i_4] [i_4]);
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [i_1] [20] = (arr_1 [i_0]);
                    var_20 = var_14;
                    var_21 = (max((((!(arr_9 [i_0] [i_0] [i_0] [i_1 - 1] [20] [20])))), (arr_9 [i_1] [i_1] [i_1] [i_1 + 2] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
