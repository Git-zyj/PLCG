/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max((((min(-31294, 0)))), (~1))))));
                var_13 *= ((1 ^ (((((~64) != -99))))));
                arr_6 [i_1] [i_1] = ((arr_2 [6]) ? (1 & 11) : 0);
                arr_7 [i_1] = ((1 * (65535 * 51)));
                arr_8 [i_0 - 2] [i_0 - 2] = (min(1, 65535));
            }
        }
    }
    var_14 |= var_3;
    var_15 = -7495;
    #pragma endscop
}
