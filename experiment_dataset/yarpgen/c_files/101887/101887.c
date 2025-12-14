/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(1 * -1962313214)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 |= min((min(var_14, var_11)), (var_3 != var_3));
                            arr_10 [i_3] [i_3] [i_2 + 3] [i_1] [i_0] [i_0] = (max(((max((var_8 && var_11), (var_10 < var_6)))), (var_6 % var_8)));
                            var_17 = (min((((0 - 1998415731) + 112)), var_8));
                        }
                    }
                }
                var_18 += (max(((var_1 % (var_9 & var_1))), (min(var_0, var_12))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 ^= ((!(((var_0 && var_5) || var_7))));
                                var_20 = (max(var_7, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
