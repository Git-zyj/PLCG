/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((((var_10 & (min(var_0, var_14))))), 11612158545499325427);
    var_18 = (max((((((var_13 ? var_13 : -4953125230192523088))) ? (var_15 / var_16) : var_1)), var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (min((arr_7 [1] [2] [i_1] [i_1] [2] [2]), var_16));
                                var_20 = (~var_5);
                                var_21 += ((((max((arr_3 [i_2] [i_3 + 1]), (((120 <= (arr_5 [i_3]))))))) ? (max(var_10, ((min(var_4, -120))))) : (((-118 + 2147483647) << ((((max(127, var_0))) - 17942))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] = (!(((-127 | (max(var_1, (arr_9 [i_1] [1] [i_1])))))));
            }
        }
    }
    var_22 = var_0;
    var_23 = (min((var_0 | var_3), var_7));
    #pragma endscop
}
