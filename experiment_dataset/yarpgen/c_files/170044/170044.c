/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_4);
    var_15 = (min(((~(min(var_9, var_10)))), (+-1152)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 |= (((!(1 * 24576))));
                var_17 -= (((((-((-1165 ? 1 : 24601))))) ? ((var_6 ? 0 : 1)) : ((~(min(var_5, var_9))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [5] [i_0 + 2] [i_0 + 2] [i_0] = (~var_10);
                            var_18 = (~10);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_6] [i_5] [i_6 - 1] [i_5] [i_0] = ((1151 ? (((((~23392) && (1 * 1))))) : (min(var_6, 1))));
                                var_19 = ((-var_6 ? (max(-188457696, 10)) : (!var_9)));
                            }
                        }
                    }
                }
                var_20 *= ((!((var_0 || (!0)))));
            }
        }
    }
    var_21 *= var_8;
    #pragma endscop
}
