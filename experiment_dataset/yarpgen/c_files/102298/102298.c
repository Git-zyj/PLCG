/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = var_1;

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_12 = (3 / 4564011519808803275);
                                var_13 = ((var_9 && -1047077235) < var_4);
                            }
                            var_14 = (arr_7 [i_3] [i_0] [i_2]);
                        }
                    }
                }
                arr_11 [i_0] = (i_0 % 2 == 0) ? ((((28 < var_9) >> (((arr_7 [i_0] [i_0] [9]) + 32781))))) : ((((28 < var_9) >> (((((arr_7 [i_0] [i_0] [9]) + 32781)) - 26568)))));
                var_15 -= (arr_3 [i_0 - 2] [i_1]);
            }
        }
    }
    var_16 |= ((-((~(-29 % 13254849769325642552)))));
    var_17 -= (var_2 == var_6);
    var_18 = (((((min(8, var_10))) ? (((-2069717406 ? var_6 : 28))) : 0)));
    #pragma endscop
}
