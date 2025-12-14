/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_12, -10649));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, var_16));
                            arr_10 [i_0] [8] [1] [i_0] [i_3] = ((~(max(var_4, 2147483628))));
                            var_20 ^= (arr_9 [i_2]);
                        }
                    }
                }
                var_21 *= 1;
                var_22 = (((max(75, var_11)) / var_10));
            }
        }
    }
    #pragma endscop
}
