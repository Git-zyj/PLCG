/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 + 1] = (((arr_3 [i_0 + 2]) - (arr_6 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 ^= ((~((~((var_9 ? var_1 : var_18))))));
                                var_20 = (((arr_15 [i_0] [i_1] [i_1] [i_3] [i_4]) ? ((31135 ? (arr_5 [i_0] [1] [0] [i_0]) : (arr_9 [i_0] [i_1 + 1] [i_0] [i_4]))) : 31135));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= ((var_6 ? var_12 : var_1));
    var_22 = min(var_0, var_2);
    var_23 = (((~var_1) ^ var_17));
    #pragma endscop
}
