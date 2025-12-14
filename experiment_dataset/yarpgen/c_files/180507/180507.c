/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = ((var_2 * ((((((max(1376183318681881983, 32766))) > (((arr_0 [i_0] [19]) ? (arr_1 [i_0]) : 6160124317815899325))))))));
        var_18 = 32761;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = -32755;
                        var_19 ^= (((((((arr_0 [i_0] [15]) && var_6)) ? -32762 : (((arr_4 [i_0 + 2] [i_3]) ? 2147483630 : var_7)))) > var_7));
                        var_20 |= ((((1 % 18446744073709551615) ? 136 : (arr_2 [i_0 + 4]))) < 24766);
                        arr_13 [i_3] [i_3] [i_0] = (((max((max(41083, var_12)), ((max(var_5, var_10))))) % (((((max(-1685808158, (arr_9 [i_0] [i_0] [10])))) ? var_15 : ((max(-67, var_16))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 = (min(var_21, ((max(((((((((arr_15 [i_4]) + 2147483647)) << (4294967295 - 4294967295)))) ? -79 : 34)), ((((24453 * 250) * (!var_6)))))))));
        arr_17 [i_4] [8] |= ((-((~((((arr_6 [i_4] [i_4]) <= 63)))))));
    }
    var_22 = var_2;
    #pragma endscop
}
