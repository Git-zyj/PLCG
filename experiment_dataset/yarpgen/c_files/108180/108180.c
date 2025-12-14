/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 += -14;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((~((var_2 | (2147483647 ^ 5)))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (((((var_0 + 9223372036854775807) << (var_1 - 3294609344))) ^ var_7));
                        var_22 = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
