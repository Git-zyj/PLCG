/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((max(1, 242)))) ? var_2 : ((((1 ? 184 : var_13))))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 *= (max((var_2 < var_12), var_8));
                    arr_10 [i_0] = max(var_3, var_3);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = var_4;
                        arr_13 [i_0] = (!192);
                        var_19 += ((max((max(255, 1)), 0)));
                        var_20 = var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_21 = ((((min((min(1, var_10)), (!var_6)))) << ((var_9 * (var_11 * var_9)))));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [1] = (max(-var_13, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
