/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((!((!(arr_7 [i_0] [0] [i_1]))))))))));
                                var_18 = ((((((arr_1 [i_1 + 1] [i_2]) ? var_5 : var_2))) ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_2] [i_3 - 1] [i_0]) : (arr_10 [i_2] [1])));
                                var_19 = (~201);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((47251 ? (max(var_9, 18296)) : 20500))))));
                            arr_17 [i_0] [i_1] [i_6] [i_6] [i_0] = (arr_0 [i_5 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = ((!(((-1333114682653837138 ? 1333114682653837137 : ((1590083220 ? -1333114682653837143 : 0)))))));
    #pragma endscop
}
