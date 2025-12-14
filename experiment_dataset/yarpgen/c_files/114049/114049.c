/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_3 > var_1) ? var_7 : 0)) / var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!(((((max(15, var_4))) ? (((1 << (var_16 - 98)))) : var_12)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = var_7;
                                arr_15 [i_0] [i_1] [i_1] [i_1] [10] [i_1] [i_1] = (min(((~(~236582324155251408))), ((-(((arr_13 [i_0] [i_0] [i_1] [i_2] [1] [i_3] [i_1]) ? -29837 : var_12))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
