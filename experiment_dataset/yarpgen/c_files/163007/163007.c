/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= min((var_14 || -1417787258), ((12823766600566336427 ? 12823766600566336427 : var_19)));
    var_21 *= (!var_19);
    var_22 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [9] = (arr_10 [i_2] [i_4]);
                                var_23 = (((~var_0) | (0 & var_9)));
                                arr_14 [i_0] &= (((arr_8 [i_0] [i_0] [i_3]) ? ((12823766600566336427 ? ((((18446744073709551615 && (-9223372036854775807 - 1))))) : 12823766600566336427)) : 18446744073709551612));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2] = ((-(min(var_15, (arr_10 [i_2] [6])))));
                    arr_16 [i_2] [2] [i_2] = -26990;
                }
            }
        }
    }
    #pragma endscop
}
