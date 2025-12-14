/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = ((~(arr_8 [i_0] [i_1] [i_2] [i_2])));
                                var_18 &= (min((arr_4 [i_0]), (1 != 0)));
                                arr_13 [i_4] = (!var_3);
                            }
                        }
                    }
                }
                var_19 = (!((max((arr_6 [i_1] [i_1 - 1] [i_1]), 2649211599))));
            }
        }
    }
    var_20 = (((min(-927544709, (var_14 | 0))) * ((~(-22 >= 1)))));
    var_21 = (min((max(var_9, var_7)), (~var_1)));
    var_22 *= var_8;
    #pragma endscop
}
