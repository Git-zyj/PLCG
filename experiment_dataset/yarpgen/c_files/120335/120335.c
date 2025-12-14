/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-7323 != 30844);

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_11 = (~34692);
            var_12 = (min(var_12, (arr_3 [i_1])));
        }
        var_13 = var_9;
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_14 ^= (arr_2 [i_2 + 1] [5] [9]);
        var_15 = ((((((arr_7 [i_2 - 1]) + (arr_7 [i_2 - 1])))) ? (arr_7 [i_2 - 3]) : (((arr_7 [i_2 - 3]) - -23860))));
        var_16 = var_0;
        var_17 |= (255 || 30844);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (max(((-1714701615 | (arr_8 [2] [2]))), (((arr_7 [i_3]) / 63))));
        arr_12 [i_3] = (~var_0);
        arr_13 [i_3] = (((-715721577 | 127) < (max(var_1, var_6))));
        var_18 = (max((arr_10 [i_3]), 31));
    }
    #pragma endscop
}
