/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;
    var_15 = var_11;
    var_16 = ((var_9 ? var_2 : -var_2));
    var_17 = ((-(((var_3 + 2147483647) << (((0 - var_2) - 46))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min(((-(arr_3 [i_3] [17] [i_0]))), (arr_5 [i_3] [7] [i_1] [18])));
                            var_19 = ((((77 ^ (arr_3 [i_1 - 2] [5] [i_2]))) << 7576525148661243990));
                        }
                    }
                }
                var_20 = var_1;
            }
        }
    }
    #pragma endscop
}
