/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (arr_7 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (arr_0 [i_0 - 1]);
                                var_14 = (arr_6 [9]);
                            }
                        }
                    }
                    var_15 -= (!((min((((~(arr_12 [i_0] [i_0] [6] [i_2] [i_2] [7])))), (arr_1 [i_0])))));
                    var_16 = (min((arr_5 [i_0] [i_0 - 1]), (-5766767504160443176 | -3823179583051866923)));
                }
            }
        }
    }
    var_17 = var_11;
    var_18 = ((((max((min(1, -1967120944)), ((var_2 ? var_3 : var_3))))) ? var_1 : (((var_7 >> (((1420842759 << 1) - 2841685507)))))));
    var_19 &= var_3;
    var_20 = ((var_0 >> (var_10 + 23217)));
    #pragma endscop
}
