/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (((!var_12) ? var_14 : ((((!var_9) ? ((max(var_12, 235))) : (arr_6 [i_0] [i_2 + 2] [i_2 - 1] [i_3 - 1]))))));
                                var_17 = ((((!((((arr_0 [i_2 + 1]) ? var_12 : var_14))))) ? ((((235 ? (arr_0 [i_3]) : var_8)))) : (0 || 1)));
                            }
                        }
                    }
                }
                var_18 = (((var_3 & -1) ? (!9223372036854775807) : var_2));
            }
        }
    }
    var_19 = ((((9223372036854775811 ? 1 : (var_10 - var_4))) * ((((!(((var_6 ? var_7 : 9223372036854775807)))))))));
    #pragma endscop
}
