/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((~(min((min(var_11, var_13)), (var_16 && -32633)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 ^= -1;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_22 = (((((!(224 | -32633)))) + ((78 | (!-22815)))));
                            var_23 ^= -178;
                            arr_10 [i_0] [12] [i_1] [i_0] = ((~(arr_7 [i_0] [i_0] [i_0] [i_2 - 1] [i_1 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
