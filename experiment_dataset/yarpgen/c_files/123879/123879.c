/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_3 - 3] [6] = (((arr_6 [i_0] [i_1]) ? (((5077 ? var_12 : (arr_0 [i_1] [15])))) : ((-(arr_4 [i_0] [10] [i_3 - 2])))));
                                var_19 = var_4;
                                var_20 = (min(var_20, (((((((((-(arr_8 [i_0] [i_1] [i_1] [i_0])))) ? ((((!(arr_7 [i_0]))))) : (min((arr_9 [i_0] [i_0] [i_2] [i_2] [i_4]), var_6))))) > ((126 ? (min((arr_4 [i_0] [i_2] [i_4]), -17506)) : (((-691559666 ? -19957 : 141))))))))));
                            }
                        }
                    }
                }
                var_21 *= ((((((arr_6 [i_0] [i_0]) ? (arr_7 [i_0]) : var_0))) * (max(0, -6793464852089664763))));
                arr_12 [14] [i_0] [14] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_22 = ((31019 ? var_3 : -32304));
    #pragma endscop
}
