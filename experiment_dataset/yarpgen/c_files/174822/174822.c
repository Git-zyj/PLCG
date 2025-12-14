/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((var_2 ? ((((((var_1 ? var_3 : var_1))) || (((var_1 ? var_2 : var_8)))))) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((arr_4 [i_0] [i_0]) >> (((arr_0 [i_1 + 1] [i_0]) - 7543737911150601386))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [1] [8] [i_1] = (min(16273218879802434749, ((((arr_6 [i_1] [i_1 + 1] [i_1 + 1]) + (221 && -3))))));
                                var_14 = (min(var_14, (max(((-16297 ? 2173525193907116884 : 1)), ((var_8 ? 1 : var_7))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] = 0;
                }
            }
        }
    }
    #pragma endscop
}
