/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (min((!0), ((-(max(-1, var_7))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (((((-51 ? var_10 : 51)) / -1)));
                                arr_13 [i_0] [1] [i_2] [i_2] [i_4] = -64;
                            }
                        }
                    }
                    var_18 -= var_6;
                    arr_14 [i_2] [i_1] [20] = (max(-344225450, 1));
                }
            }
        }
        var_19 &= ((arr_12 [5] [i_0] [i_0] [i_0] [i_0]) ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min((arr_6 [i_0] [1] [i_0]), var_2)) : (((arr_5 [i_0] [i_0]) / var_0)))) : ((var_0 ? (arr_2 [i_0]) : ((var_15 ? (arr_6 [i_0] [i_0] [i_0]) : var_6)))));
    }
    #pragma endscop
}
