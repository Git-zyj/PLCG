/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = -1500750288;
    var_16 = (((((~(!var_12)))) && (!-51273)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 -= ((((max(((min((arr_2 [i_0]), 1))), (((arr_0 [14] [14]) / (arr_1 [i_0] [i_0 + 1])))))) || -2098259356));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((-16553 * 28) ? (((!(arr_3 [8] [i_2 + 1] [i_2])))) : ((var_7 ? var_10 : var_5))))) && ((min((arr_10 [i_0] [i_2] [i_4]), -1500750281)))));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((max(3801250178, -22))) && 51291));
                                var_19 = (min(51291, 45705));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
