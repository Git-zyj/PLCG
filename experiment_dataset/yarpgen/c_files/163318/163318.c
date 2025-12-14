/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_8);
    var_13 = var_7;
    var_14 = ((var_4 ? var_6 : ((-((32767 ? var_7 : -2005307949))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 ^= (arr_5 [i_0] [i_1] [i_1]);
                    arr_7 [8] [8] [i_1] [i_2] = (3773460703363197200 << ((~(~1))));
                    arr_8 [i_0] [i_1] [5] = (arr_6 [i_2] [11] [11]);
                }
            }
        }
        arr_9 [i_0] = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [i_3] = (~-123);
        var_16 = ((((1980410141842846086 ? 1 : (arr_4 [i_3]))) == (!8240090536432245424)));
        var_17 = ((((!(arr_0 [i_3] [i_3]))) ? ((max((arr_11 [14]), (arr_4 [i_3])))) : (arr_5 [i_3] [i_3] [i_3])));
    }
    #pragma endscop
}
