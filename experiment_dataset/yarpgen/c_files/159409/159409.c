/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (min(-829189728, 829189727));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((~((1 ? -8919185250675765570 : -5)))) << (((((((arr_10 [19] [i_1] [i_2] [i_3 + 2] [i_2] [i_0 + 1]) ? (arr_10 [i_1] [1] [i_2] [i_3 + 1] [i_0] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_0 - 1]))) + 1568)) - 44)))))));
                                arr_11 [6] [i_1] [i_4] [i_0] [i_4] = (-94 & 65535);
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = (max((arr_2 [i_3] [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((((max((var_10 / var_9), (var_6 && var_1)))) ? -18091 : var_10)))));
    var_18 = (min(0, 175));
    #pragma endscop
}
