/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = 7240367369170474524;
                arr_7 [i_1] [i_1] = (((((7240367369170474524 ? (!0) : 20))) ? -20 : var_6));
            }
        }
    }
    var_14 = ((((((var_6 ? var_0 : var_10) < 5)))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [i_2] [9] [i_4] [i_3] = var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_2 - 1] [i_3] [i_3] [i_6] = ((var_2 ? ((((arr_9 [i_2 - 1]) ? var_6 : -60))) : ((min(4256053192, var_6)))));
                                var_15 = ((((75 - var_5) ? var_9 : var_2)));
                                var_16 = (arr_11 [i_2] [i_2 + 1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_3;
    var_18 = var_7;
    #pragma endscop
}
