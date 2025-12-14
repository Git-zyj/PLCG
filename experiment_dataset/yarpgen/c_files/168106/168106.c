/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 & var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_1] [i_0] = (~var_2);
                                var_16 = (((382289785 * 8561472088414006062) ? var_11 : ((((!var_10) & var_5)))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] = (((-32767 / 2147483647) ? var_10 : var_8));
                            }
                        }
                    }
                    var_17 = (!-var_5);
                    arr_17 [i_0] [i_0] [i_2] = (var_10 * 0);
                }
            }
        }
    }
    var_18 = ((!(((((var_6 ? var_12 : var_14)) / var_12)))));
    var_19 = (((var_14 / var_1) * (((var_11 * ((var_4 ? var_5 : var_2)))))));
    #pragma endscop
}
