/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_12 = (18446744073709551615 > 18446744073709551615);
                        var_13 = var_0;
                    }
                    var_14 = var_0;
                }
            }
        }
    }
    var_15 = (((max(var_11, (min(3, -13181)))) | (~1)));
    var_16 = var_3;
    var_17 = var_8;
    var_18 = (1921839056 ? (min(13181, (min(var_0, 1)))) : (((-13195 ? (1 | 13195) : (var_9 > -13195)))));
    #pragma endscop
}
