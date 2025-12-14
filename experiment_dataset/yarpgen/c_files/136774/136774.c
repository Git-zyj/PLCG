/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((!(arr_12 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1])));
                                var_18 = (max(((min((arr_3 [i_1 + 3] [i_3 + 1] [i_3 - 1]), (arr_3 [i_1 - 2] [i_3 - 1] [i_3 + 1])))), (arr_3 [i_1 - 2] [i_3 + 1] [i_3 + 1])));
                            }
                        }
                    }
                }
                var_19 -= 8784586769417314631;
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
