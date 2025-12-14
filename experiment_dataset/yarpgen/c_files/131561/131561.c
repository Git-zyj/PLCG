/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (!-408859150);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 |= var_5;
                                var_15 &= (((((((((7959736198159671464 ? (arr_1 [i_0]) : var_3)) + 2147483647)) >> (var_9 - 218898205)))) < var_11));
                                var_16 = (arr_9 [i_0] [i_2 - 2] [1] [i_0]);
                                var_17 -= ((((((arr_1 [i_4]) ? (((arr_4 [i_0] [i_0]) ? 1203304800 : -1829119473686278823)) : var_8))) ? 188 : (((min((arr_0 [i_1]), 6368348938181473131))))));
                                arr_11 [i_4] [11] [i_2 + 2] [10] [12] = (0 / 140);
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] = var_8;
                    var_18 = 65270;
                    var_19 = (max(((!(arr_3 [1] [i_2]))), (var_7 || 388330440)));
                }
            }
        }
    }
    var_20 &= 3906636833;
    #pragma endscop
}
