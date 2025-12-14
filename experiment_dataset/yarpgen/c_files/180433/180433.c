/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((30002 ? 1254572676 : 1254572676));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_12));
                                var_17 = (min(var_17, (((!(var_9 || 3040394604))))));
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = (max((min(-125, var_8)), (((~(~-1))))));
                                arr_18 [i_3] [i_1] [i_2] [i_0] [i_3] = min((~-1), (~var_1));
                                arr_19 [i_0] [i_0] [i_0] = (((!1237482917) * (0 << var_13)));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] = (((((max(var_12, var_10)))) ? (((max(65535, (124 < 3881886017))))) : ((-136074851 ? 1 : 4294967285))));
            }
        }
    }
    var_18 |= 379023150;
    var_19 = var_2;
    #pragma endscop
}
