/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 31430;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((-27436 ^ 4095) - -1272540081)) - (((1 ? 38013 : 2675)))));
        arr_2 [i_0] = (+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -27436)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = ((1481628087487967882 >= (1581935695 % 4095)));
                        var_19 |= ((((4294967295 ? 1581935695 : 1)) <= -32087));
                        var_20 -= (((((min((arr_3 [i_1]), (arr_3 [i_2]))) + 2147483647)) << (((-1272540081 + 1272540104) - 23))));
                    }
                }
            }
        }
        var_21 = ((((min(32764, -4095))) ? (((min(4099, 6274655995463131013)))) : ((((min(1, -1))) ? ((1 << (32089 - 32060))) : -1272540081))));
        var_22 = min(-32087, 26811);
    }
    #pragma endscop
}
