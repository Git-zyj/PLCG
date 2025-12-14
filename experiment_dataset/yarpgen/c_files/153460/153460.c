/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_19 *= ((~(arr_0 [i_0 - 3] [1])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_20 ^= (arr_3 [i_0 - 1] [i_0 - 3]);
            var_21 = (min(var_21, 12804853183102074267));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] = ((var_7 ? var_9 : var_5));
                        var_22 = (min(var_22, (((!(((5 >> (((arr_4 [i_4 - 1]) - 223212116))))))))));
                    }
                }
            }
            arr_14 [1] = (((arr_8 [i_2]) ? (arr_8 [i_0]) : (arr_12 [11] [21] [i_0])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_5] [1] [12] = (arr_1 [2] [i_0 + 1]);
            var_23 = var_6;
        }
    }
    var_24 = (~var_7);
    var_25 = (min(var_0, var_16));
    var_26 += var_10;
    #pragma endscop
}
