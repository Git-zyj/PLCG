/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [6] [i_0] = ((!(arr_7 [i_0] [i_2] [i_3] [i_4 + 1])));
                                arr_15 [i_0] [17] [i_0] [i_3] [4] = (((((!(((var_6 ? var_6 : var_12)))))) << (((min((arr_9 [i_1] [i_4]), (234 ^ 0))) - 216))));
                            }
                        }
                    }
                    var_17 = (min(var_17, var_10));
                }
            }
        }
    }
    var_18 ^= (~65535);
    var_19 = var_14;
    #pragma endscop
}
