/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [1] [i_4] = ((!((((arr_9 [i_1] [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 2]) / (arr_9 [i_1] [i_1] [i_3 - 2] [i_3 + 1] [i_1] [i_3 - 1]))))));
                                arr_13 [4] [i_0] [i_0] = ((!22568) ? (max(6399838733996356746, 19604)) : var_12);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [21] = ((((((!(50 != -40))))) != 2425652543));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = (-6399838733996356734 ? 6399838733996356746 : 9223372036854775807);
            }
        }
    }
    var_16 = (((var_8 ? -var_8 : 121)) / (var_6 ^ var_2));
    #pragma endscop
}
